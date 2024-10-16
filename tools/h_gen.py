### HEADER GENERATION ###
# This is goes through every file in the `data` folder (obtain this by running proc.py)
# The `headers.h` file will be inserted into the `source` directory

import os

def generate_enum(dir_path):
    file = open("../source/headers.h", 'a')
    file.write("#ifndef HEADERS_H\n#define HEADERS_H\n\n")
    cnt = 0
    seen = []
    for filename in os.listdir(dir_path):
        if filename not in seen:
            file.write(f"#include <{filename.replace(" ", "_").replace("-", "_").replace(".", "_").lower()}.h>\n")
            seen.append(filename)
    file.write("\n#endif")
    file.close()
    print("[LOG] Done :3")

if os.path.exists("../source/headers.h"):
    try:
        os.remove("../source/headers.h")
    except:
        print("[LOG] Could not delete ../scource/headers.h!")
        exit(-1)
generate_enum("../data")