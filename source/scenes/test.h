#ifndef TEST_H
#define TEST_H
#include "../helper.h"

static scene_instance** set_test_scene() { 
    scene_instance** scenes = (scene_instance**)calloc(2, sizeof(scene_instance*));
	scenes[0] = init_scene_instance( 
		chasehouse_png,
		_28_days_later_ttf,
		&_28_days_later_ttf_size,
		NULL,
		si_populate_scene_images((VN_Scene_Image[IMAGES_SV_COUNT]){
			{tj_annoyed_png, FAR_LEFT},
			{tj_annoyed_png, LEFT},
			{tj_annoyed_png, RIGHT},
			{tj_annoyed_png, FAR_RIGHT}
		}),
		si_populate_chars((char*[TEXTLINE_LENGTH]){
			"ZZZZZZZZZZ",
			"ZZZZZZZZZZZZZZZZZZZZ",
			"ZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZ",
			"ZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZX"
		})
	);
	scenes[1] = init_scene_instance(
		barside_png,
		belligerent_ttf,
		&belligerent_ttf_size,
		speaker_cameron_png,
		si_populate_scene_images((VN_Scene_Image[IMAGES_SV_COUNT]){
			{leo_annoyed_png, FAR_LEFT},
			{leo_annoyed_png, LEFT},
			{leo_annoyed_png, RIGHT},
			{leo_annoyed_png, FAR_RIGHT}
		}),
		si_populate_chars((char*[TEXTLINE_LENGTH]){
			"This is scene 2!",
			"Ain't that cool?",
			"Keep switching lel",
			"REEE again"
		})
	);
    return scenes;
}
#endif