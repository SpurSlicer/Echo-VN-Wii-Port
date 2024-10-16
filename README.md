### What is this??
This is a WIP port of Echo VN for the Nintendo Wii!
### How to I run this?
Do the following:
1. Take the `game` folder of Echo VN and paste it into the root of this repository (assuming you've cloned it)
2. run `tools/proc.py` to generate the `data` folder that to process all images and get all assets in one directory.
3. (optional) run `tools/h_gen.py` to generate all headers for assets of Echo VN.
4. Run the make file to build every asset (this will take a bit). This will create the `build` directory which has all Echo VN assets prepared for the Wii (this is also where `headers` maps to).
5. Boot up the Dol and explore! 
### I want to add more scenes than just the test ones
I'm working on ironing out some strange memory and invalid address bugs in game so I haven't ported the game structure yet, but it's getting there! A scene with carl and a test scene are available to see how it plays. To generate more scenes, please see `tools/s_gen.py` which is for converting a renpy scene to C. 
### Requirements
You will need MLlib and all of it's subsequent requirements for building. You will also need Dolphin Emulator to actually play builds.
### Issues
Progress stopped due to some memory errors that happen after around 30 screen transitions. Sometimes its for an invalid resource and sometimes its for invalid address accessing. For the latter, it seems like overflow of some sort is happening. I'm not sure about the former. This might be a problem with MLlib. To test this, I would switch to a different graphics library for the Wii, but I do not have time to do so at the moment.