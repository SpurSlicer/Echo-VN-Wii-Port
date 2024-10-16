### SCENE GENERATOR ###
# This takes an input file (renpy script in `data`) and an output file name and attempts to convert the script into a usable
# scene in C. Not every renpy feature is implemented here so not everything works (e.g., animations and transitions)

import os

def format(text):
    if "/" in text:
        text = text[text.rfind("/")+1:]
    elif "\\" in text:
        text = text[text.rfind("\\")+1:]
    text = text.replace(" ", "_").replace("-", "_").replace(".", "_").lower()
    if text[0].isdigit():
        text = "_"+text
    return text

def generate_speaker_dict(dirpath):
    speaker_dict = []
    r_file = open(f"{dirpath}script.txt")
    cnt = 0
    temp_str = ""
    r_file.readlines(883)
    while "Transitions" not in temp_str:
        temp_str = r_file.readline()
        if temp_str.lstrip().startswith("$"):
            name_end_index = temp_str.replace("$", "").lstrip().find(" ")
            name = temp_str.replace("$", "").lstrip()[0:name_end_index]
            while "show_who_window_style" not in temp_str:
                temp_str = r_file.readline()
            filename = format(temp_str[temp_str.find("\"")+1:temp_str.rfind("\"")]).replace("say","speaker")+"_png"
            temp_dict = {"name": name, "filename": filename}
            speaker_dict.append(temp_dict)
            cnt += 1
    r_file.close()
    print(f"[LOG] found {cnt} speakers")
    return speaker_dict

def generate_image_dict(dirpath):
    image_dict = []
    r_file = open(f"{dirpath}script.txt")
    cnt = 0
    temp_str = ""
    while True:
        temp_str = r_file.readline()
        if not temp_str:
            break
        if temp_str.lstrip().startswith("image "):
            name_end_index = temp_str.lstrip().replace("image ", "").find("=")-1
            name = temp_str.lstrip().replace("image ", "")[0:name_end_index]
            filename = format(temp_str[temp_str.find("\"")+1:temp_str.rfind("\"")])
            temp_dict = {"name": name, "filename": filename}
            image_dict.append(temp_dict)
            cnt += 1
    r_file.close()
    print(f"[LOG] found {cnt} images")
    return image_dict

def generate_struct(file, cnt, music, background, font, speaker, images, text):
    file.write(f"\tscenes[{cnt}] = init_scene_instance(\n")
    file.write(f"\t\t{background},\n")
    file.write(f"\t\t{font},\n")
    file.write(f"\t\t&{font}_size,\n")
    if speaker == "":
        file.write("\t\tNULL,\n")
    else:
        file.write(f"\t\t{speaker},\n")
    if len(images) > 0:
        file.write("\t\tsi_populate_scene_images((VN_Scene_Image[IMAGES_SV_COUNT]){\n")
        for i in range(0, len(images)):
            if i == len(images)-1:
                file.write("\t\t\t{"+f"{images[i]["image"]}, {images[i]["position"].upper()}"+"}\n")
            else:
                file.write("\t\t\t{"+f"{images[i]["image"]}, {images[i]["position"].upper()}"+"},\n")
        file.write("\t\t}),\n")
    else: 
        file.write("\t\tNULL,\n")
    if text != "":
        file.write("\t\tsi_populate_chars((char*[TEXTLINE_LENGTH]){\n")
        text_pieces = text.split(" ")
        for i in range(0, 4):
            temp = ""
            while True:
                if len(text_pieces) == 0:
                    break
                if len(temp) + len(text_pieces[0]) < 39:
                    temp += (text_pieces[0])
                    text_pieces.remove(text_pieces[0])
                else:
                    break
                if len(text_pieces) > 0:
                    if len(temp)+len(text_pieces[0])+1 < 39:
                        temp += " "
                    else:
                        break
                else:
                    break
            if i == 3:
                file.write(f"\t\t\t\"{temp}\"\n")
            else:
                file.write(f"\t\t\t\"{temp}\",\n")
        file.write("\t\t})")
    else:
        file.write("\t\tNULL,\n")
    file.write("\n\t);\n")
    return

def generate_enum(dirpath, file_writing_name, file_reading_name):
    w_file = open(f"../source/{file_writing_name}.h", "a+")
    w_file.write(f"#ifndef {file_writing_name.upper()}\n#define {file_writing_name.upper()}\n#include \"lookup_helper.h\"\n#include \"headers.h\"\n\n")
    w_file.write("/*$edit later$*/\n\n")
    
    speaker_dict = generate_speaker_dict(dirpath)
    image_dict = generate_image_dict(dirpath)

    cnt = 0
    label = ":3"
    music = ""
    background = "mansion_png"
    font = "belligerent_ttf"
#    speaker = ""
    images = []
#    text = ""

    image_positions = []

    r_file = open(f"{dirpath}{file_reading_name}.txt", 'r')
    while True:
        r_file_line = r_file.readline()
        if not r_file_line:
            break
        r_file_line = r_file_line.lstrip()
        #-----------STOP - MUSIC -----------#
        if r_file_line.startswith("stop"):
            music = ""
            print(f"[LOG] music command: {music}")
        #-----------PLAY - MUSIC-----------#
        elif r_file_line.startswith("play"):
            music = r_file_line[r_file_line.find("\"")+1:r_file_line.rfind("\"")]
            transition = r_file_line[r_file_line.rfind("\"")+2:].strip()
            print(f"[LOG] music command: {music}" )
        #-----------SHOW - IMAGE-----------#
        elif r_file_line.startswith("show"):
            temp = ""
            temp_fn = ":3"
            position = ""
            first_name = ""
            if " at " in r_file_line:
                temp = (r_file_line[:r_file_line.find("at")]).replace("show ", "").strip()
                first_name = temp[0:temp.find(" ")]
                position = r_file_line[r_file_line.find("at")+2:r_file_line.find("with")].strip()
                if len(image_positions) == 0:
                    image_positions.append({"name": first_name, "position": position})
                else:
                    for i in range(0, len(image_positions)):
                        if image_positions[i]["name"] == first_name:
                            image_positions.remove(image_positions[i])
                            image_positions.append({"name": first_name, "position": position})
                            break
            else:
                temp = (r_file_line[:r_file_line.find("with")]).replace("show ", "").strip()
                first_name = temp[0:temp.find(" ")]
                for image_position in image_positions:
                    if image_position["name"] == first_name:
                        position = image_position["position"]
                        break
            animation = r_file_line[r_file_line.find("with")+4:].strip()
            for image in image_dict:
                if image["name"] == temp:
                    temp_fn = image["filename"]
                    break
            for i in range(0, len(images)):
                if first_name.lower() in images[i]["image"]:
                    images.remove(images[i])
            images.append({"image": temp_fn, "position": position})
            print(f"[LOG] image command: {images}")
            print(image_positions)
        #-----------HIDE - IMAGE-----------#
        elif r_file_line.startswith("hide"):
            temp = r_file_line.replace("hide ", "")[:r_file_line.find("with")-6]
            animation = r_file_line[r_file_line.find("with"):].strip()
            for i in range(0, len(images)):
                if format(temp.strip()) in images[i]["image"]:
                    images.remove(images[i])
            print(f"[LOG] image command: {images}")
        #-----------SCENE - BACKGROUND-----------#
        elif r_file_line.startswith("scene"):
            temp = r_file_line.replace("scene ", "").strip()
            for image in image_dict:
                if image["name"] == temp:
                    background = image["filename"]
                    break
            print(f"[LOG] background command: {background}")
        #-----------WITH - GLOBAL ANIMATION STATE <needs work>-----------#
        elif r_file_line.startswith("with"):
            print("[LOG] animation command")
        #-----------LABEL - SCENE-----------#
        elif r_file_line.startswith("label"):
            print("[LOG] label command")
            label = r_file_line.replace("label ", "").replace(":", "").strip().lower()
            w_file.write(f"scene_instance** scene_set_{label}()"+" {\n")
            w_file.write(f"\tscene_instance** scenes = (scene_instance**)calloc(SCENESET_{label.upper()}_COUNT, sizeof(scene_instance*));\n")
        #-----------JUMP - SCENE-----------#
        elif r_file_line.startswith("jump"):
            print("[LOG] jump command")
        #-----------RENPY - COMMAND-----------#
        elif r_file_line.startswith("$"):
            print("[LOG] renpy command")
        #-----------DEBUG - EMPTY LINE-----------#
        elif r_file_line == "":
            print("[LOG] empty line")
        #-----------TEXT & SPEAKER-----------#
        else:
            speaker = ""
            if not r_file_line.startswith("\""):                
                temp_s = r_file_line[0:r_file_line.find(" ")].strip()
                for speaker_dict_temp in speaker_dict:
                    if speaker_dict_temp["name"] == temp_s:
                        speaker = speaker_dict_temp["filename"]
                        break
            temp = r_file_line[r_file_line.find("\"")+1:r_file_line.rfind("\"")]
            generate_struct(w_file, cnt, music, background, font, speaker, images, temp)
            cnt += 1
            print(f"[LOG] text command: {speaker} - {temp}")
    print(f"total scenes: {cnt}")
    r_file.close()

    w_file.write("\treturn scenes;\n")
    w_file.write("}\n#endif")
    w_file.seek(0)
    w_file_modify_lines = w_file.readlines()
    for i in range(0, len(w_file_modify_lines)):
        if "/*$edit later$*/" in w_file_modify_lines[i]:
            w_file_modify_lines[i] = w_file_modify_lines[i].replace("/*$edit later$*/", f"#define SCENESET_{label.upper()}_COUNT {cnt}")
            break
    w_file.close()
    w_file = open(f"../source/{file_writing_name}.h", 'w')
    w_file.writelines(w_file_modify_lines)
    w_file.close()

    #print("---------------------")
    #print(test_speaker_dict)
    #print("---------------------")
    #print(test_background_dict)
    #print("---------------------")
    #print(test_image_dict)


print("[NOTE] use \" \" (spaces) as seperators for multiple entries!\n----------------------")
file_writing_name = input("Enter filename to write header stuff to: ")
file_reading_name = input("Enter filename to read from: ")
if file_writing_name.find(".") > 0:
    file_writing_name = file_writing_name[0:file_writing_name.find(".")]
if file_reading_name.find(".") > 0:
    file_reading_name = file_reading_name[0:file_reading_name.find(".")]
if os.path.exists(f"../source/scenes/{file_writing_name}.h"):
    try:
        os.remove(f"../source/scenes/{file_writing_name}.h")
    except:
        print(f"[LOG] Could not delete ../scource/scenes/{file_writing_name}.h!")
        exit(-1)
generate_enum("../data/", file_writing_name, file_reading_name)