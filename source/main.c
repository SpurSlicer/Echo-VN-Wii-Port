#include "scenes/_all_scenes.h"

int main(int argc, char **argv) 
{
	int scene_index = -1;
	int goal_index = 0;
	ML_Init();
	scene_instance** scenes = scene_set_sitwithcarl();

	scene_variables* sv = init_scene_variables();

	ML_SetBackgroundColor(GX_COLOR_WHITE); // Background is now white 

	while(1) {	
		if (Wiimote[0].Newpress.One) goal_index = (goal_index + 1) % SCENESET_SITWITHCARL_COUNT;
		else if (Wiimote[0].Newpress.Two) {
			goal_index = (goal_index - 1);
			if (goal_index < 0) goal_index += SCENESET_SITWITHCARL_COUNT;
		}
		if (scene_index != goal_index) {
			change_scene_variables(sv, scenes[goal_index]);
			scene_index = goal_index;
		} 
		draw_scene(sv);
		ML_Refresh();

	} 
	
	return 0;
}

