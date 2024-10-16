### IMAGE PROCESSING PIPELINE ###
# This goes through every file and folder in the `game` directory (this is just the Echo VN game files from the renpy build)
# and rescales all images, converts them to 32 channel color (RGBA), and stores them in the `data` directory.abs
# It renames renames .rpy files to text files and stores all assets that needn't be converted in `data` as well.
# It skips over renpy functionality and settings files.

import cv2 as cv
import numpy as np
import math
import shutil
import os

def parse(dir_path):
    for filename in os.listdir(dir_path):
        if (os.path.isdir(dir_path + "/" + filename)):
            if ("cache" in filename or "saves" in filename):
                continue
            else:
                parse(dir_path + "/" + filename)
        elif filename.endswith(".png"):
            img = cv.imread(dir_path+"/"+filename, cv.IMREAD_UNCHANGED)
            height, width, dimension = img.shape
            flag_resize = False
            flag_cc = False
            resized = 0
            #print("{} - {}, {}, {}".format(filename, width, height, dimension))
            if (dimension == 3):
                flag_cc = True
                b, g, r = cv.split(img)
                a = np.ones(b.shape, dtype=b.dtype) * 255
                img = cv.merge((b, g, r, a))
                #print(img.shape)
                height, width, dimension = img.shape
            scale_w = 640 / width
            scale_h = 480 / height
            if scale_w > 1:
                scale_w = 1
            else:
                flag_resize = True
            if scale_h > 1:
                scale_h = 1
            else:
                flag_resize = True
            if (scale_w <= scale_h):
                temp_w = math.ceil(width*scale_w)
                temp_w = temp_w - (temp_w%4)
                temp_h = math.ceil(height*scale_w)
                temp_h = temp_h - (temp_h%4)
                resized = scale_w
                img = cv.resize(img, (temp_w, temp_h))
                height, width, dimension = img.shape
                #print("\t{} scale with {}, {}, {}".format(scale_w, width, height, dimension))
            else:
                temp_w = math.ceil(width*scale_h)
                temp_w = temp_w - (temp_w%4)
                temp_h = math.ceil(height*scale_h)
                temp_h = temp_h - (temp_h%4)
                resized = scale_h
                img = cv.resize(img, (temp_w, temp_h))
                height, width, dimension = img.shape
                #print("\t{} scale with {}, {}, {}".format(scale_h, width, height, dimension))
                #print("{} = {} scale with {}, {}, {}".format(scale_w, scale_h, width, height, dimension))
            filename = filename.replace(" ", "_")
            filename = filename.replace("-", "_")
            filename = filename.lower()
            debug_str = "[LOG]"
            if flag_cc:
                debug_str += " [CC]"
            if flag_resize:
                debug_str += " [RESIZE={}]".format(resized)
            debug_str += " adding {}".format(filename)
            print(debug_str)
            cv.imwrite("../data_new/" + filename, img)
        elif filename.endswith(".rpyc") or filename.endswith(".ini") or filename.endswith(".rpyb") or filename.endswith(".psd"):
            continue
        else:
            new_filename = filename.replace(" ", "_")
            new_filename = new_filename.replace("-", "_")
            new_filename = new_filename.replace("rpy", "txt")
            new_filename = new_filename.lower()
            if "." not in new_filename:
                new_filename = new_filename + ".txt"
            print("[LOG] adding {}".format(new_filename))
            shutil.copyfile(dir_path + "/" + filename, "../data_new/"+new_filename)

if os.path.exists("../data_new"):
    for filename in os.listdir("../data_new"):
        filename = filename.replace(" ", "_")
        filename = filename.replace("-", "_")
        filename = filename.lower()
        os.remove("../data_new/"+filename)
    os.rmdir("../data_new")
os.makedirs("../data_new")

parse("../game")

