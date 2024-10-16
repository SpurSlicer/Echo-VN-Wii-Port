#ifndef CARL_TEST_H
#define CARL_TEST_H
#include "../helper.h"

#define SCENESET_SITWITHCARL_COUNT 135

static scene_instance** scene_set_sitwithcarl() {
	scene_instance** scenes = (scene_instance**)calloc(SCENESET_SITWITHCARL_COUNT, sizeof(scene_instance*));
	scenes[0] = init_scene_instance(
		mansion_png,
		belligerent_ttf,
		&belligerent_ttf_size,
		NULL,
		NULL,
		si_populate_chars((char*[TEXTLINE_LENGTH]){
			"I'm tired, and I feel awful. I just",
			"don't have it in me to chase everyone",
			"down right now.",
			""
		})
	);
	scenes[1] = init_scene_instance(
		mansion_png,
		belligerent_ttf,
		&belligerent_ttf_size,
		NULL,
		NULL,
		si_populate_chars((char*[TEXTLINE_LENGTH]){
			"Flynn's back off to Echo, and it looks",
			"like Leo went after TJ, but I can't",
			"imagine the lynx wants all of us",
			"crowding around him right now."
		})
	);
	scenes[2] = init_scene_instance(
		mansion_png,
		belligerent_ttf,
		&belligerent_ttf_size,
		NULL,
		NULL,
		si_populate_chars((char*[TEXTLINE_LENGTH]){
			"I sigh, rubbing my face before I sit",
			"down in the lawn chair next to Carl.",
			"",
			""
		})
	);
	scenes[3] = init_scene_instance(
		mansion_png,
		belligerent_ttf,
		&belligerent_ttf_size,
		NULL,
		si_populate_scene_images((VN_Scene_Image[IMAGES_SV_COUNT]){
			{carl_rejected_png, CENTER}
		}),
		si_populate_chars((char*[TEXTLINE_LENGTH]){
			"He looks over at me, slowly lowering",
			"what's definitely a joint from his",
			"mouth.",
			""
		})
	);
	scenes[4] = init_scene_instance(
		mansion_png,
		belligerent_ttf,
		&belligerent_ttf_size,
		speaker_chase_png,
		si_populate_scene_images((VN_Scene_Image[IMAGES_SV_COUNT]){
			{carl_rejected_png, CENTER}
		}),
		si_populate_chars((char*[TEXTLINE_LENGTH]){
			"\"What? I don't mind.\"",
			"",
			"",
			""
		})
	);
	scenes[5] = init_scene_instance(
		mansion_png,
		belligerent_ttf,
		&belligerent_ttf_size,
		NULL,
		si_populate_scene_images((VN_Scene_Image[IMAGES_SV_COUNT]){
			{carl_rejected_png, CENTER}
		}),
		si_populate_chars((char*[TEXTLINE_LENGTH]){
			"I make a \"go on\" gesture with my",
			"paw.",
			"",
			""
		})
	);
	scenes[6] = init_scene_instance(
		mansion_png,
		belligerent_ttf,
		&belligerent_ttf_size,
		NULL,
		si_populate_scene_images((VN_Scene_Image[IMAGES_SV_COUNT]){
			{carl_rejected_png, CENTER}
		}),
		si_populate_chars((char*[TEXTLINE_LENGTH]){
			"Carl shakes his head though, pushing",
			"the disheveled tube back into his",
			"front pocket.",
			""
		})
	);
	scenes[7] = init_scene_instance(
		mansion_png,
		belligerent_ttf,
		&belligerent_ttf_size,
		NULL,
		si_populate_scene_images((VN_Scene_Image[IMAGES_SV_COUNT]){
			{carl_rejected_png, CENTER}
		}),
		si_populate_chars((char*[TEXTLINE_LENGTH]){
			"\"Nah, I always kinda feel like a dick",
			"when the other guy isn't into it.\"",
			"",
			""
		})
	);
	scenes[8] = init_scene_instance(
		mansion_png,
		belligerent_ttf,
		&belligerent_ttf_size,
		speaker_chase_png,
		si_populate_scene_images((VN_Scene_Image[IMAGES_SV_COUNT]){
			{carl_rejected_png, CENTER}
		}),
		si_populate_chars((char*[TEXTLINE_LENGTH]){
			"\"Want me to leave?\"",
			"",
			"",
			""
		})
	);
	scenes[9] = init_scene_instance(
		mansion_png,
		belligerent_ttf,
		&belligerent_ttf_size,
		NULL,
		si_populate_scene_images((VN_Scene_Image[IMAGES_SV_COUNT]){
			{carl_rejected_png, CENTER}
		}),
		si_populate_chars((char*[TEXTLINE_LENGTH]){
			"He shakes his head with a quick flick",
			"of his horns.",
			"",
			""
		})
	);
	scenes[10] = init_scene_instance(
		mansion_png,
		belligerent_ttf,
		&belligerent_ttf_size,
		NULL,
		si_populate_scene_images((VN_Scene_Image[IMAGES_SV_COUNT]){
			{carl_rejected_png, CENTER}
		}),
		si_populate_chars((char*[TEXTLINE_LENGTH]){
			"\"No man. I just do it when there's",
			"nothing else to do.\"",
			"",
			""
		})
	);
	scenes[11] = init_scene_instance(
		mansion_png,
		belligerent_ttf,
		&belligerent_ttf_size,
		speaker_chase_png,
		si_populate_scene_images((VN_Scene_Image[IMAGES_SV_COUNT]){
			{carl_rejected_png, CENTER}
		}),
		si_populate_chars((char*[TEXTLINE_LENGTH]){
			"\"Ah.\"",
			"",
			"",
			""
		})
	);
	scenes[12] = init_scene_instance(
		mansion_png,
		belligerent_ttf,
		&belligerent_ttf_size,
		NULL,
		si_populate_scene_images((VN_Scene_Image[IMAGES_SV_COUNT]){
			{carl_rejected_png, CENTER}
		}),
		si_populate_chars((char*[TEXTLINE_LENGTH]){
			"There's a moment of silence and I feel",
			"a little pressure to break it since",
			"I'm the one who interrupted his bake",
			"session."
		})
	);
	scenes[13] = init_scene_instance(
		mansion_png,
		belligerent_ttf,
		&belligerent_ttf_size,
		speaker_chase_png,
		si_populate_scene_images((VN_Scene_Image[IMAGES_SV_COUNT]){
			{carl_rejected_png, CENTER}
		}),
		si_populate_chars((char*[TEXTLINE_LENGTH]){
			"\"I actually tried it a few years",
			"ago.\"",
			"",
			""
		})
	);
	scenes[14] = init_scene_instance(
		mansion_png,
		belligerent_ttf,
		&belligerent_ttf_size,
		NULL,
		si_populate_scene_images((VN_Scene_Image[IMAGES_SV_COUNT]){
			{carl_neutral_png, CENTER}
		}),
		si_populate_chars((char*[TEXTLINE_LENGTH]){
			"Carl looks surprised.",
			"",
			"",
			""
		})
	);
	scenes[15] = init_scene_instance(
		mansion_png,
		belligerent_ttf,
		&belligerent_ttf_size,
		NULL,
		si_populate_scene_images((VN_Scene_Image[IMAGES_SV_COUNT]){
			{carl_neutral_png, CENTER}
		}),
		si_populate_chars((char*[TEXTLINE_LENGTH]){
			"\"Oh really? How was it?\"",
			"",
			"",
			""
		})
	);
	scenes[16] = init_scene_instance(
		mansion_png,
		belligerent_ttf,
		&belligerent_ttf_size,
		NULL,
		si_populate_scene_images((VN_Scene_Image[IMAGES_SV_COUNT]){
			{carl_neutral_png, CENTER}
		}),
		si_populate_chars((char*[TEXTLINE_LENGTH]){
			"I shrug.",
			"",
			"",
			""
		})
	);
	scenes[17] = init_scene_instance(
		mansion_png,
		belligerent_ttf,
		&belligerent_ttf_size,
		speaker_chase_png,
		si_populate_scene_images((VN_Scene_Image[IMAGES_SV_COUNT]){
			{carl_neutral_png, CENTER}
		}),
		si_populate_chars((char*[TEXTLINE_LENGTH]){
			"\"Pretty bad. Was in a muffin, I",
			"think.\"",
			"",
			""
		})
	);
	scenes[18] = init_scene_instance(
		mansion_png,
		belligerent_ttf,
		&belligerent_ttf_size,
		NULL,
		si_populate_scene_images((VN_Scene_Image[IMAGES_SV_COUNT]){
			{carl_annoyed_png, CENTER}
		}),
		si_populate_chars((char*[TEXTLINE_LENGTH]){
			"Carl makes a face at that.",
			"",
			"",
			""
		})
	);
	scenes[19] = init_scene_instance(
		mansion_png,
		belligerent_ttf,
		&belligerent_ttf_size,
		NULL,
		si_populate_scene_images((VN_Scene_Image[IMAGES_SV_COUNT]){
			{carl_annoyed_png, CENTER}
		}),
		si_populate_chars((char*[TEXTLINE_LENGTH]){
			"\"Edibles.\"",
			"",
			"",
			""
		})
	);
	scenes[20] = init_scene_instance(
		mansion_png,
		belligerent_ttf,
		&belligerent_ttf_size,
		speaker_chase_png,
		si_populate_scene_images((VN_Scene_Image[IMAGES_SV_COUNT]){
			{carl_annoyed_png, CENTER}
		}),
		si_populate_chars((char*[TEXTLINE_LENGTH]){
			"\"Yeah, well, I ended up eating one,",
			"didn't feel anything for a while. Next",
			"thing I know I'm face down on the",
			"floor and everyone's freaking out.\""
		})
	);
	scenes[21] = init_scene_instance(
		mansion_png,
		belligerent_ttf,
		&belligerent_ttf_size,
		NULL,
		si_populate_scene_images((VN_Scene_Image[IMAGES_SV_COUNT]){
			{carl_annoyed_png, CENTER}
		}),
		si_populate_chars((char*[TEXTLINE_LENGTH]){
			"\"Shit, that sucks.\"",
			"",
			"",
			""
		})
	);
	scenes[22] = init_scene_instance(
		mansion_png,
		belligerent_ttf,
		&belligerent_ttf_size,
		speaker_chase_png,
		si_populate_scene_images((VN_Scene_Image[IMAGES_SV_COUNT]){
			{carl_annoyed_png, CENTER}
		}),
		si_populate_chars((char*[TEXTLINE_LENGTH]){
			"\"It was kinda funny, but I don't",
			"think I'll ever try it again.\"",
			"",
			""
		})
	);
	scenes[23] = init_scene_instance(
		mansion_png,
		belligerent_ttf,
		&belligerent_ttf_size,
		NULL,
		si_populate_scene_images((VN_Scene_Image[IMAGES_SV_COUNT]){
			{carl_annoyed_png, CENTER}
		}),
		si_populate_chars((char*[TEXTLINE_LENGTH]){
			"Carl pulls the joint back out of his",
			"pocket and holds it up.",
			"",
			""
		})
	);
	scenes[24] = init_scene_instance(
		mansion_png,
		belligerent_ttf,
		&belligerent_ttf_size,
		NULL,
		si_populate_scene_images((VN_Scene_Image[IMAGES_SV_COUNT]){
			{carl_annoyed_png, CENTER}
		}),
		si_populate_chars((char*[TEXTLINE_LENGTH]){
			"\"That's why you should use one of",
			"these. It's easier on the brain.\"",
			"",
			""
		})
	);
	scenes[25] = init_scene_instance(
		mansion_png,
		belligerent_ttf,
		&belligerent_ttf_size,
		speaker_chase_png,
		si_populate_scene_images((VN_Scene_Image[IMAGES_SV_COUNT]){
			{carl_annoyed_png, CENTER}
		}),
		si_populate_chars((char*[TEXTLINE_LENGTH]){
			"\"Yeah, well, I guess I just don't",
			"like the idea of putting smoke in my",
			"lungs.\"",
			""
		})
	);
	scenes[26] = init_scene_instance(
		mansion_png,
		belligerent_ttf,
		&belligerent_ttf_size,
		NULL,
		si_populate_scene_images((VN_Scene_Image[IMAGES_SV_COUNT]){
			{carl_rejected_png, CENTER}
		}),
		si_populate_chars((char*[TEXTLINE_LENGTH]){
			"Carl puts the joint back in his",
			"pocket.",
			"",
			""
		})
	);
	scenes[27] = init_scene_instance(
		mansion_png,
		belligerent_ttf,
		&belligerent_ttf_size,
		NULL,
		si_populate_scene_images((VN_Scene_Image[IMAGES_SV_COUNT]){
			{carl_rejected_png, CENTER}
		}),
		si_populate_chars((char*[TEXTLINE_LENGTH]){
			"\"I get that.\"",
			"",
			"",
			""
		})
	);
	scenes[28] = init_scene_instance(
		mansion_png,
		belligerent_ttf,
		&belligerent_ttf_size,
		NULL,
		si_populate_scene_images((VN_Scene_Image[IMAGES_SV_COUNT]){
			{carl_rejected_png, CENTER}
		}),
		si_populate_chars((char*[TEXTLINE_LENGTH]){
			"Again, there's a few seconds of",
			"silence and I try to think of",
			"something to say, but Carl beats me to",
			"it."
		})
	);
	scenes[29] = init_scene_instance(
		mansion_png,
		belligerent_ttf,
		&belligerent_ttf_size,
		NULL,
		si_populate_scene_images((VN_Scene_Image[IMAGES_SV_COUNT]){
			{carl_neutral_png, CENTER}
		}),
		si_populate_chars((char*[TEXTLINE_LENGTH]){
			"\"Crazy shit, huh?\"",
			"",
			"",
			""
		})
	);
	scenes[30] = init_scene_instance(
		mansion_png,
		belligerent_ttf,
		&belligerent_ttf_size,
		NULL,
		si_populate_scene_images((VN_Scene_Image[IMAGES_SV_COUNT]){
			{carl_neutral_png, CENTER}
		}),
		si_populate_chars((char*[TEXTLINE_LENGTH]){
			"I assume he's talking about what just",
			"happened.",
			"",
			""
		})
	);
	scenes[31] = init_scene_instance(
		mansion_png,
		belligerent_ttf,
		&belligerent_ttf_size,
		speaker_chase_png,
		si_populate_scene_images((VN_Scene_Image[IMAGES_SV_COUNT]){
			{carl_neutral_png, CENTER}
		}),
		si_populate_chars((char*[TEXTLINE_LENGTH]){
			"\"Yeah, crazy.\"",
			"",
			"",
			""
		})
	);
	scenes[32] = init_scene_instance(
		mansion_png,
		belligerent_ttf,
		&belligerent_ttf_size,
		NULL,
		si_populate_scene_images((VN_Scene_Image[IMAGES_SV_COUNT]){
			{carl_neutral_png, CENTER}
		}),
		si_populate_chars((char*[TEXTLINE_LENGTH]){
			"\"But you know how he is. He's",
			"regretting everything right now.\"",
			"",
			""
		})
	);
	scenes[33] = init_scene_instance(
		mansion_png,
		belligerent_ttf,
		&belligerent_ttf_size,
		speaker_chase_png,
		si_populate_scene_images((VN_Scene_Image[IMAGES_SV_COUNT]){
			{carl_neutral_png, CENTER}
		}),
		si_populate_chars((char*[TEXTLINE_LENGTH]){
			"\"Well, I guess I'd rather he just",
			"wouldn't say it in the first place.\"",
			"",
			""
		})
	);
	scenes[34] = init_scene_instance(
		mansion_png,
		belligerent_ttf,
		&belligerent_ttf_size,
		speaker_chase_png,
		si_populate_scene_images((VN_Scene_Image[IMAGES_SV_COUNT]){
			{carl_neutral_png, CENTER}
		}),
		si_populate_chars((char*[TEXTLINE_LENGTH]){
			"\"What he said to TJ, man...He picks",
			"on him a lot, but that was crossing",
			"the line.\"",
			""
		})
	);
	scenes[35] = init_scene_instance(
		mansion_png,
		belligerent_ttf,
		&belligerent_ttf_size,
		NULL,
		si_populate_scene_images((VN_Scene_Image[IMAGES_SV_COUNT]){
			{carl_neutral_png, CENTER}
		}),
		si_populate_chars((char*[TEXTLINE_LENGTH]){
			"Carl scratches behind one of his",
			"horns, then rubs his nose.",
			"",
			""
		})
	);
	scenes[36] = init_scene_instance(
		mansion_png,
		belligerent_ttf,
		&belligerent_ttf_size,
		NULL,
		si_populate_scene_images((VN_Scene_Image[IMAGES_SV_COUNT]){
			{carl_neutral_png, CENTER}
		}),
		si_populate_chars((char*[TEXTLINE_LENGTH]){
			"\"Well yeah, I guess I never",
			"understood that, either. Making fun of",
			"TJ is like...making fun of a cloud.\"",
			""
		})
	);
	scenes[37] = init_scene_instance(
		mansion_png,
		belligerent_ttf,
		&belligerent_ttf_size,
		NULL,
		si_populate_scene_images((VN_Scene_Image[IMAGES_SV_COUNT]){
			{carl_neutral_png, CENTER}
		}),
		si_populate_chars((char*[TEXTLINE_LENGTH]){
			"\"But Flynn doesn't mean it, usually.",
			"He likes TJ.\"",
			"",
			""
		})
	);
	scenes[38] = init_scene_instance(
		mansion_png,
		belligerent_ttf,
		&belligerent_ttf_size,
		NULL,
		si_populate_scene_images((VN_Scene_Image[IMAGES_SV_COUNT]){
			{carl_neutral_png, CENTER}
		}),
		si_populate_chars((char*[TEXTLINE_LENGTH]){
			"I've noticed during the trip that",
			"Carl's been pretty defensive of Flynn,",
			"even though he's the butt of most of",
			"the lizard's jokes."
		})
	);
	scenes[39] = init_scene_instance(
		mansion_png,
		belligerent_ttf,
		&belligerent_ttf_size,
		NULL,
		si_populate_scene_images((VN_Scene_Image[IMAGES_SV_COUNT]){
			{carl_neutral_png, CENTER}
		}),
		si_populate_chars((char*[TEXTLINE_LENGTH]){
			"I'd seen Flynn trip Carl up and put",
			"him in several headlocks since I got",
			"here.",
			""
		})
	);
	scenes[40] = init_scene_instance(
		mansion_png,
		belligerent_ttf,
		&belligerent_ttf_size,
		NULL,
		si_populate_scene_images((VN_Scene_Image[IMAGES_SV_COUNT]){
			{carl_neutral_png, CENTER}
		}),
		si_populate_chars((char*[TEXTLINE_LENGTH]){
			"You'd think getting older would change",
			"that, but I swear they roughhouse even",
			"more than they did before.",
			""
		})
	);
	scenes[41] = init_scene_instance(
		mansion_png,
		belligerent_ttf,
		&belligerent_ttf_size,
		speaker_chase_png,
		si_populate_scene_images((VN_Scene_Image[IMAGES_SV_COUNT]){
			{carl_neutral_png, CENTER}
		}),
		si_populate_chars((char*[TEXTLINE_LENGTH]){
			"\"So you and him still seem pretty",
			"close. You guys hang out a lot?\"",
			"",
			""
		})
	);
	scenes[42] = init_scene_instance(
		mansion_png,
		belligerent_ttf,
		&belligerent_ttf_size,
		NULL,
		si_populate_scene_images((VN_Scene_Image[IMAGES_SV_COUNT]){
			{carl_neutral_png, CENTER}
		}),
		si_populate_chars((char*[TEXTLINE_LENGTH]){
			"\"Yeah, a bit, mostly because there",
			"isn't much else to do. He's got a",
			"friend in Payton that he hangs out",
			"with sometimes, too.\""
		})
	);
	scenes[43] = init_scene_instance(
		mansion_png,
		belligerent_ttf,
		&belligerent_ttf_size,
		speaker_chase_png,
		si_populate_scene_images((VN_Scene_Image[IMAGES_SV_COUNT]){
			{carl_neutral_png, CENTER}
		}),
		si_populate_chars((char*[TEXTLINE_LENGTH]){
			"\"So what do you guys do?\"",
			"",
			"",
			""
		})
	);
	scenes[44] = init_scene_instance(
		mansion_png,
		belligerent_ttf,
		&belligerent_ttf_size,
		NULL,
		si_populate_scene_images((VN_Scene_Image[IMAGES_SV_COUNT]){
			{carl_neutral_png, CENTER}
		}),
		si_populate_chars((char*[TEXTLINE_LENGTH]){
			"I know Flynn isn't into video games at",
			"all, and Carl probably doesn't care to",
			"go clubbing every other night.",
			""
		})
	);
	scenes[45] = init_scene_instance(
		mansion_png,
		belligerent_ttf,
		&belligerent_ttf_size,
		NULL,
		si_populate_scene_images((VN_Scene_Image[IMAGES_SV_COUNT]){
			{carl_neutral_png, CENTER}
		}),
		si_populate_chars((char*[TEXTLINE_LENGTH]){
			"He shrugs.",
			"",
			"",
			""
		})
	);
	scenes[46] = init_scene_instance(
		mansion_png,
		belligerent_ttf,
		&belligerent_ttf_size,
		NULL,
		si_populate_scene_images((VN_Scene_Image[IMAGES_SV_COUNT]){
			{carl_neutral_png, CENTER}
		}),
		si_populate_chars((char*[TEXTLINE_LENGTH]){
			"\"Sometimes we go fishing, maybe just",
			"drive around Payton.\"",
			"",
			""
		})
	);
	scenes[47] = init_scene_instance(
		mansion_png,
		belligerent_ttf,
		&belligerent_ttf_size,
		NULL,
		si_populate_scene_images((VN_Scene_Image[IMAGES_SV_COUNT]){
			{carl_neutral_png, CENTER}
		}),
		si_populate_chars((char*[TEXTLINE_LENGTH]){
			"\"Mostly I'm just hangin' out at home,",
			"though.\"",
			"",
			""
		})
	);
	scenes[48] = init_scene_instance(
		mansion_png,
		belligerent_ttf,
		&belligerent_ttf_size,
		speaker_chase_png,
		si_populate_scene_images((VN_Scene_Image[IMAGES_SV_COUNT]){
			{carl_neutral_png, CENTER}
		}),
		si_populate_chars((char*[TEXTLINE_LENGTH]){
			"\"Playing video games?\"",
			"",
			"",
			""
		})
	);
	scenes[49] = init_scene_instance(
		mansion_png,
		belligerent_ttf,
		&belligerent_ttf_size,
		NULL,
		si_populate_scene_images((VN_Scene_Image[IMAGES_SV_COUNT]){
			{carl_neutral_png, CENTER}
		}),
		si_populate_chars((char*[TEXTLINE_LENGTH]){
			"\"Playing video games, watching",
			"movies, cybering with a chatbot—the",
			"usual.\"",
			""
		})
	);
	scenes[50] = init_scene_instance(
		mansion_png,
		belligerent_ttf,
		&belligerent_ttf_size,
		NULL,
		si_populate_scene_images((VN_Scene_Image[IMAGES_SV_COUNT]){
			{carl_neutral_png, CENTER}
		}),
		si_populate_chars((char*[TEXTLINE_LENGTH]){
			"I grin.",
			"",
			"",
			""
		})
	);
	scenes[51] = init_scene_instance(
		mansion_png,
		belligerent_ttf,
		&belligerent_ttf_size,
		speaker_chase_png,
		si_populate_scene_images((VN_Scene_Image[IMAGES_SV_COUNT]){
			{carl_neutral_png, CENTER}
		}),
		si_populate_chars((char*[TEXTLINE_LENGTH]){
			"\"That's sad, I would have cybered",
			"with you if I'd known you didn't have",
			"anyone.\"",
			""
		})
	);
	scenes[52] = init_scene_instance(
		mansion_png,
		belligerent_ttf,
		&belligerent_ttf_size,
		NULL,
		si_populate_scene_images((VN_Scene_Image[IMAGES_SV_COUNT]){
			{carl_png, }
		}),
		si_populate_chars((char*[TEXTLINE_LENGTH]){
			"\"I dunno man, that thing compiles all",
			"the fetishes of the people it's talked",
			"to. It's gotten my sexuality all kinds",
			"of fucked up.\""
		})
	);
	scenes[53] = init_scene_instance(
		mansion_png,
		belligerent_ttf,
		&belligerent_ttf_size,
		speaker_chase_png,
		si_populate_scene_images((VN_Scene_Image[IMAGES_SV_COUNT]){
			{carl_png, }
		}),
		si_populate_chars((char*[TEXTLINE_LENGTH]){
			"\"Oh yeah?\"",
			"",
			"",
			""
		})
	);
	scenes[54] = init_scene_instance(
		mansion_png,
		belligerent_ttf,
		&belligerent_ttf_size,
		NULL,
		si_populate_scene_images((VN_Scene_Image[IMAGES_SV_COUNT]){
			{carl_png, }
		}),
		si_populate_chars((char*[TEXTLINE_LENGTH]){
			"\"Yeah, seems like no matter what I",
			"say to her she's tied up in some",
			"warehouse, blindfolded with a few",
			"missing limbs.\""
		})
	);
	scenes[55] = init_scene_instance(
		mansion_png,
		belligerent_ttf,
		&belligerent_ttf_size,
		speaker_chase_png,
		si_populate_scene_images((VN_Scene_Image[IMAGES_SV_COUNT]){
			{carl_png, }
		}),
		si_populate_chars((char*[TEXTLINE_LENGTH]){
			"\"You underestimate my abilities.\"",
			"",
			"",
			""
		})
	);
	scenes[56] = init_scene_instance(
		mansion_png,
		belligerent_ttf,
		&belligerent_ttf_size,
		NULL,
		si_populate_scene_images((VN_Scene_Image[IMAGES_SV_COUNT]){
			{carl_png, }
		}),
		si_populate_chars((char*[TEXTLINE_LENGTH]){
			"\"Oh, and a gender swap that comes out",
			"of nowhere halfway through.\"",
			"",
			""
		})
	);
	scenes[57] = init_scene_instance(
		mansion_png,
		belligerent_ttf,
		&belligerent_ttf_size,
		speaker_chase_png,
		si_populate_scene_images((VN_Scene_Image[IMAGES_SV_COUNT]){
			{carl_png, }
		}),
		si_populate_chars((char*[TEXTLINE_LENGTH]){
			"\"Well, while you're not sexing up a",
			"robot, you doing anything else?\"",
			"",
			""
		})
	);
	scenes[58] = init_scene_instance(
		mansion_png,
		belligerent_ttf,
		&belligerent_ttf_size,
		NULL,
		si_populate_scene_images((VN_Scene_Image[IMAGES_SV_COUNT]){
			{carl_png, }
		}),
		si_populate_chars((char*[TEXTLINE_LENGTH]){
			"He chuckles.",
			"",
			"",
			""
		})
	);
	scenes[59] = init_scene_instance(
		mansion_png,
		belligerent_ttf,
		&belligerent_ttf_size,
		NULL,
		si_populate_scene_images((VN_Scene_Image[IMAGES_SV_COUNT]){
			{carl_png, }
		}),
		si_populate_chars((char*[TEXTLINE_LENGTH]){
			"\"I can't exactly get around myself",
			"anymore.\"",
			"",
			""
		})
	);
	scenes[60] = init_scene_instance(
		mansion_png,
		belligerent_ttf,
		&belligerent_ttf_size,
		speaker_chase_png,
		si_populate_scene_images((VN_Scene_Image[IMAGES_SV_COUNT]){
			{carl_png, }
		}),
		si_populate_chars((char*[TEXTLINE_LENGTH]){
			"\"So I guess your parents decided",
			"against getting you a new car?\"",
			"",
			""
		})
	);
	scenes[61] = init_scene_instance(
		mansion_png,
		belligerent_ttf,
		&belligerent_ttf_size,
		NULL,
		si_populate_scene_images((VN_Scene_Image[IMAGES_SV_COUNT]){
			{carl_png, }
		}),
		si_populate_chars((char*[TEXTLINE_LENGTH]){
			"\"Yeah...Oh! Look at this.\"",
			"",
			"",
			""
		})
	);
	scenes[62] = init_scene_instance(
		mansion_png,
		belligerent_ttf,
		&belligerent_ttf_size,
		NULL,
		si_populate_scene_images((VN_Scene_Image[IMAGES_SV_COUNT]){
			{carl_png, }
		}),
		si_populate_chars((char*[TEXTLINE_LENGTH]){
			"He leans over and pulls out his phone.",
			"I can't help but notice it's a top",
			"model brand, probably around $700.",
			""
		})
	);
	scenes[63] = init_scene_instance(
		mansion_png,
		belligerent_ttf,
		&belligerent_ttf_size,
		NULL,
		si_populate_scene_images((VN_Scene_Image[IMAGES_SV_COUNT]){
			{carl_png, }
		}),
		si_populate_chars((char*[TEXTLINE_LENGTH]){
			"But he's not showing me the phone.",
			"Instead he presses at the screen a few",
			"times and swipes through some",
			"pictures."
		})
	);
	scenes[64] = init_scene_instance(
		mansion_png,
		belligerent_ttf,
		&belligerent_ttf_size,
		NULL,
		si_populate_scene_images((VN_Scene_Image[IMAGES_SV_COUNT]){
			{carl_png, }
		}),
		si_populate_chars((char*[TEXTLINE_LENGTH]){
			"I swear I see an image of Flynn with",
			"his pants down mooning the camera.",
			"",
			""
		})
	);
	scenes[65] = init_scene_instance(
		mansion_png,
		belligerent_ttf,
		&belligerent_ttf_size,
		NULL,
		si_populate_scene_images((VN_Scene_Image[IMAGES_SV_COUNT]){
			{carl_png, }
		}),
		si_populate_chars((char*[TEXTLINE_LENGTH]){
			"Carl swipes over it pretty quick,",
			"though, and now I'm looking at the",
			"image of a brand-new sedan—",
			""
		})
	);
	scenes[66] = init_scene_instance(
		mansion_png,
		belligerent_ttf,
		&belligerent_ttf_size,
		NULL,
		si_populate_scene_images((VN_Scene_Image[IMAGES_SV_COUNT]){
			{carl_png, }
		}),
		si_populate_chars((char*[TEXTLINE_LENGTH]){
			"—except the front is neatly folded",
			"up around the pole of a stop sign.",
			"",
			""
		})
	);
	scenes[67] = init_scene_instance(
		mansion_png,
		belligerent_ttf,
		&belligerent_ttf_size,
		NULL,
		si_populate_scene_images((VN_Scene_Image[IMAGES_SV_COUNT]){
			{carl_png, }
		}),
		si_populate_chars((char*[TEXTLINE_LENGTH]){
			"I recognize the sign; I'd actually",
			"seen it right outside the convenience",
			"store, still bent at a ridiculous",
			"angle."
		})
	);
	scenes[68] = init_scene_instance(
		mansion_png,
		belligerent_ttf,
		&belligerent_ttf_size,
		NULL,
		si_populate_scene_images((VN_Scene_Image[IMAGES_SV_COUNT]){
			{carl_png, }
		}),
		si_populate_chars((char*[TEXTLINE_LENGTH]){
			"Guess the town didn't care enough to",
			"get it fixed.",
			"",
			""
		})
	);
	scenes[69] = init_scene_instance(
		mansion_png,
		belligerent_ttf,
		&belligerent_ttf_size,
		NULL,
		si_populate_scene_images((VN_Scene_Image[IMAGES_SV_COUNT]){
			{carl_png, }
		}),
		si_populate_chars((char*[TEXTLINE_LENGTH]){
			"The pole itself is almost embedded",
			"into the middle of the hood.",
			"",
			""
		})
	);
	scenes[70] = init_scene_instance(
		mansion_png,
		belligerent_ttf,
		&belligerent_ttf_size,
		speaker_chase_png,
		si_populate_scene_images((VN_Scene_Image[IMAGES_SV_COUNT]){
			{carl_png, }
		}),
		si_populate_chars((char*[TEXTLINE_LENGTH]){
			"\"Holy shit.\"",
			"",
			"",
			""
		})
	);
	scenes[71] = init_scene_instance(
		mansion_png,
		belligerent_ttf,
		&belligerent_ttf_size,
		NULL,
		si_populate_scene_images((VN_Scene_Image[IMAGES_SV_COUNT]){
			{carl_png, }
		}),
		si_populate_chars((char*[TEXTLINE_LENGTH]){
			"Carl chuckles and pinches the screen,",
			"zooming in.",
			"",
			""
		})
	);
	scenes[72] = init_scene_instance(
		mansion_png,
		belligerent_ttf,
		&belligerent_ttf_size,
		NULL,
		si_populate_scene_images((VN_Scene_Image[IMAGES_SV_COUNT]){
			{carl_png, }
		}),
		si_populate_chars((char*[TEXTLINE_LENGTH]){
			"\"Yeah. Dropped my phone and when I",
			"came back up this freakin' pole was",
			"right in front of me.\"",
			""
		})
	);
	scenes[73] = init_scene_instance(
		mansion_png,
		belligerent_ttf,
		&belligerent_ttf_size,
		speaker_chase_png,
		si_populate_scene_images((VN_Scene_Image[IMAGES_SV_COUNT]){
			{carl_png, }
		}),
		si_populate_chars((char*[TEXTLINE_LENGTH]){
			"\"Really, Carl? Why were you on your",
			"phone?\"",
			"",
			""
		})
	);
	scenes[74] = init_scene_instance(
		mansion_png,
		belligerent_ttf,
		&belligerent_ttf_size,
		NULL,
		si_populate_scene_images((VN_Scene_Image[IMAGES_SV_COUNT]){
			{carl_png, }
		}),
		si_populate_chars((char*[TEXTLINE_LENGTH]){
			"\"I dunno. When I get to the town I",
			"don't really think anyone's gonna be",
			"on the road.\"",
			""
		})
	);
	scenes[75] = init_scene_instance(
		mansion_png,
		belligerent_ttf,
		&belligerent_ttf_size,
		NULL,
		si_populate_scene_images((VN_Scene_Image[IMAGES_SV_COUNT]){
			{carl_png, }
		}),
		si_populate_chars((char*[TEXTLINE_LENGTH]){
			"I sigh, then notice a big, round, spot",
			"on the right side of the windshield,",
			"spiderwebbed and smashed white.",
			""
		})
	);
	scenes[76] = init_scene_instance(
		mansion_png,
		belligerent_ttf,
		&belligerent_ttf_size,
		speaker_chase_png,
		si_populate_scene_images((VN_Scene_Image[IMAGES_SV_COUNT]){
			{carl_png, }
		}),
		si_populate_chars((char*[TEXTLINE_LENGTH]){
			"\"Whoah, is that—\"",
			"",
			"",
			""
		})
	);
	scenes[77] = init_scene_instance(
		mansion_png,
		belligerent_ttf,
		&belligerent_ttf_size,
		NULL,
		si_populate_scene_images((VN_Scene_Image[IMAGES_SV_COUNT]){
			{carl_png, }
		}),
		si_populate_chars((char*[TEXTLINE_LENGTH]){
			"\"Yup!\"",
			"",
			"",
			""
		})
	);
	scenes[78] = init_scene_instance(
		mansion_png,
		belligerent_ttf,
		&belligerent_ttf_size,
		NULL,
		si_populate_scene_images((VN_Scene_Image[IMAGES_SV_COUNT]){
			{carl_png, }
		}),
		si_populate_chars((char*[TEXTLINE_LENGTH]){
			"Carl knocks on his head for effect,",
			"the hollow sound that it emits seeming",
			"rather appropriate.",
			""
		})
	);
	scenes[79] = init_scene_instance(
		mansion_png,
		belligerent_ttf,
		&belligerent_ttf_size,
		speaker_chase_png,
		si_populate_scene_images((VN_Scene_Image[IMAGES_SV_COUNT]){
			{carl_png, }
		}),
		si_populate_chars((char*[TEXTLINE_LENGTH]){
			"\"You rely on that too much...and you",
			"really need to start wearing your",
			"seatbelt.\"",
			""
		})
	);
	scenes[80] = init_scene_instance(
		mansion_png,
		belligerent_ttf,
		&belligerent_ttf_size,
		NULL,
		si_populate_scene_images((VN_Scene_Image[IMAGES_SV_COUNT]){
			{carl_png, }
		}),
		si_populate_chars((char*[TEXTLINE_LENGTH]){
			"He shrugs and puts the phone back in",
			"his pocket before leaning back in the",
			"chair and closing his eyes.",
			""
		})
	);
	scenes[81] = init_scene_instance(
		mansion_png,
		belligerent_ttf,
		&belligerent_ttf_size,
		NULL,
		si_populate_scene_images((VN_Scene_Image[IMAGES_SV_COUNT]){
			{carl_png, }
		}),
		si_populate_chars((char*[TEXTLINE_LENGTH]){
			"\"What's the point?\"",
			"",
			"",
			""
		})
	);
	scenes[82] = init_scene_instance(
		mansion_png,
		belligerent_ttf,
		&belligerent_ttf_size,
		speaker_chase_png,
		si_populate_scene_images((VN_Scene_Image[IMAGES_SV_COUNT]){
			{carl_png, }
		}),
		si_populate_chars((char*[TEXTLINE_LENGTH]){
			"\"Uh, to not die?\"",
			"",
			"",
			""
		})
	);
	scenes[83] = init_scene_instance(
		mansion_png,
		belligerent_ttf,
		&belligerent_ttf_size,
		NULL,
		si_populate_scene_images((VN_Scene_Image[IMAGES_SV_COUNT]){
			{carl_png, }
		}),
		si_populate_chars((char*[TEXTLINE_LENGTH]){
			"\"Happens to everyone sooner or later.",
			"Why not get out early if you can?\"",
			"",
			""
		})
	);
	scenes[84] = init_scene_instance(
		mansion_png,
		belligerent_ttf,
		&belligerent_ttf_size,
		NULL,
		si_populate_scene_images((VN_Scene_Image[IMAGES_SV_COUNT]){
			{carl_png, }
		}),
		si_populate_chars((char*[TEXTLINE_LENGTH]){
			"He keeps his voice light under the",
			"heavy statement.",
			"",
			""
		})
	);
	scenes[85] = init_scene_instance(
		mansion_png,
		belligerent_ttf,
		&belligerent_ttf_size,
		NULL,
		si_populate_scene_images((VN_Scene_Image[IMAGES_SV_COUNT]){
			{carl_png, }
		}),
		si_populate_chars((char*[TEXTLINE_LENGTH]){
			"I have no idea what to say to that, so",
			"I don't, but he breaks the silence",
			"again soon enough.",
			""
		})
	);
	scenes[86] = init_scene_instance(
		mansion_png,
		belligerent_ttf,
		&belligerent_ttf_size,
		NULL,
		si_populate_scene_images((VN_Scene_Image[IMAGES_SV_COUNT]){
			{carl_png, }
		}),
		si_populate_chars((char*[TEXTLINE_LENGTH]){
			"\"So how's PU, you see Chelsea at",
			"all?\"",
			"",
			""
		})
	);
	scenes[87] = init_scene_instance(
		mansion_png,
		belligerent_ttf,
		&belligerent_ttf_size,
		NULL,
		si_populate_scene_images((VN_Scene_Image[IMAGES_SV_COUNT]){
			{carl_png, }
		}),
		si_populate_chars((char*[TEXTLINE_LENGTH]){
			"Sometimes I forget Carl went to Pueblo",
			"with me. It was only one semester, but",
			"we had a lot of fun.",
			""
		})
	);
	scenes[88] = init_scene_instance(
		mansion_png,
		belligerent_ttf,
		&belligerent_ttf_size,
		speaker_chase_png,
		si_populate_scene_images((VN_Scene_Image[IMAGES_SV_COUNT]){
			{carl_png, }
		}),
		si_populate_chars((char*[TEXTLINE_LENGTH]){
			"\"It's alright, haven't seen Chelsea",
			"at all though.\"",
			"",
			""
		})
	);
	scenes[89] = init_scene_instance(
		mansion_png,
		belligerent_ttf,
		&belligerent_ttf_size,
		NULL,
		si_populate_scene_images((VN_Scene_Image[IMAGES_SV_COUNT]){
			{carl_png, }
		}),
		si_populate_chars((char*[TEXTLINE_LENGTH]){
			"\"It is a big school. Anyway, what's",
			"that project thing you're doing?\"",
			"",
			""
		})
	);
	scenes[90] = init_scene_instance(
		mansion_png,
		belligerent_ttf,
		&belligerent_ttf_size,
		speaker_chase_png,
		si_populate_scene_images((VN_Scene_Image[IMAGES_SV_COUNT]){
			{carl_png, }
		}),
		si_populate_chars((char*[TEXTLINE_LENGTH]){
			"\"Just a news packet about Echo,",
			"really. Kinda about how it's falling",
			"apart.\"",
			""
		})
	);
	scenes[91] = init_scene_instance(
		mansion_png,
		belligerent_ttf,
		&belligerent_ttf_size,
		NULL,
		si_populate_scene_images((VN_Scene_Image[IMAGES_SV_COUNT]){
			{carl_png, }
		}),
		si_populate_chars((char*[TEXTLINE_LENGTH]){
			"\"Huh.\"",
			"",
			"",
			""
		})
	);
	scenes[92] = init_scene_instance(
		mansion_png,
		belligerent_ttf,
		&belligerent_ttf_size,
		NULL,
		si_populate_scene_images((VN_Scene_Image[IMAGES_SV_COUNT]){
			{carl_png, }
		}),
		si_populate_chars((char*[TEXTLINE_LENGTH]){
			"I've told him this already, but Carl",
			"never remembers much.",
			"",
			""
		})
	);
	scenes[93] = init_scene_instance(
		mansion_png,
		belligerent_ttf,
		&belligerent_ttf_size,
		speaker_chase_png,
		si_populate_scene_images((VN_Scene_Image[IMAGES_SV_COUNT]){
			{carl_png, }
		}),
		si_populate_chars((char*[TEXTLINE_LENGTH]){
			"\"Might center it around the whole",
			"'body in the mine' thing that happened",
			"way back.\"",
			""
		})
	);
	scenes[94] = init_scene_instance(
		mansion_png,
		belligerent_ttf,
		&belligerent_ttf_size,
		NULL,
		si_populate_scene_images((VN_Scene_Image[IMAGES_SV_COUNT]){
			{carl_png, }
		}),
		si_populate_chars((char*[TEXTLINE_LENGTH]){
			"Carl opens his eyes and looks at me.",
			"",
			"",
			""
		})
	);
	scenes[95] = init_scene_instance(
		mansion_png,
		belligerent_ttf,
		&belligerent_ttf_size,
		NULL,
		si_populate_scene_images((VN_Scene_Image[IMAGES_SV_COUNT]){
			{carl_png, }
		}),
		si_populate_chars((char*[TEXTLINE_LENGTH]){
			"\"So do you need like, history stuff,",
			"like old books and records and",
			"stuff?\"",
			""
		})
	);
	scenes[96] = init_scene_instance(
		mansion_png,
		belligerent_ttf,
		&belligerent_ttf_size,
		speaker_chase_png,
		si_populate_scene_images((VN_Scene_Image[IMAGES_SV_COUNT]){
			{carl_png, }
		}),
		si_populate_chars((char*[TEXTLINE_LENGTH]){
			"\"Uh, yeah. If it relates.\"",
			"",
			"",
			""
		})
	);
	scenes[97] = init_scene_instance(
		mansion_png,
		belligerent_ttf,
		&belligerent_ttf_size,
		NULL,
		si_populate_scene_images((VN_Scene_Image[IMAGES_SV_COUNT]){
			{carl_png, }
		}),
		si_populate_chars((char*[TEXTLINE_LENGTH]){
			"Carl sits up straighter and grins.",
			"",
			"",
			""
		})
	);
	scenes[98] = init_scene_instance(
		mansion_png,
		belligerent_ttf,
		&belligerent_ttf_size,
		NULL,
		si_populate_scene_images((VN_Scene_Image[IMAGES_SV_COUNT]){
			{carl_png, }
		}),
		si_populate_chars((char*[TEXTLINE_LENGTH]){
			"\"Well, why didn't you say so! We've",
			"got a ton of stuff in the crawl space",
			"from way back when.\"",
			""
		})
	);
	scenes[99] = init_scene_instance(
		mansion_png,
		belligerent_ttf,
		&belligerent_ttf_size,
		speaker_chase_png,
		si_populate_scene_images((VN_Scene_Image[IMAGES_SV_COUNT]){
			{carl_png, }
		}),
		si_populate_chars((char*[TEXTLINE_LENGTH]){
			"\"Yeah? What kind of stuff?\"",
			"",
			"",
			""
		})
	);
	scenes[100] = init_scene_instance(
		mansion_png,
		belligerent_ttf,
		&belligerent_ttf_size,
		NULL,
		si_populate_scene_images((VN_Scene_Image[IMAGES_SV_COUNT]){
			{carl_png, }
		}),
		si_populate_chars((char*[TEXTLINE_LENGTH]){
			"Carl sets a hoof against one of the",
			"rocks circling the fire pit and starts",
			"rocking his chair back.",
			""
		})
	);
	scenes[101] = init_scene_instance(
		mansion_png,
		belligerent_ttf,
		&belligerent_ttf_size,
		NULL,
		si_populate_scene_images((VN_Scene_Image[IMAGES_SV_COUNT]){
			{carl_png, }
		}),
		si_populate_chars((char*[TEXTLINE_LENGTH]){
			"\"Well, whatever my family kept over",
			"the years. That one guy, um...\"",
			"",
			""
		})
	);
	scenes[102] = init_scene_instance(
		mansion_png,
		belligerent_ttf,
		&belligerent_ttf_size,
		NULL,
		si_populate_scene_images((VN_Scene_Image[IMAGES_SV_COUNT]){
			{carl_png, }
		}),
		si_populate_chars((char*[TEXTLINE_LENGTH]){
			"Carl snaps his fingers a few times.",
			"",
			"",
			""
		})
	);
	scenes[103] = init_scene_instance(
		mansion_png,
		belligerent_ttf,
		&belligerent_ttf_size,
		NULL,
		si_populate_scene_images((VN_Scene_Image[IMAGES_SV_COUNT]){
			{carl_png, }
		}),
		si_populate_chars((char*[TEXTLINE_LENGTH]){
			"\"You know, the guy...founded this",
			"place, uh...\"",
			"",
			""
		})
	);
	scenes[104] = init_scene_instance(
		mansion_png,
		belligerent_ttf,
		&belligerent_ttf_size,
		speaker_chase_png,
		si_populate_scene_images((VN_Scene_Image[IMAGES_SV_COUNT]){
			{carl_png, }
		}),
		si_populate_chars((char*[TEXTLINE_LENGTH]){
			"\"James?\"",
			"",
			"",
			""
		})
	);
	scenes[105] = init_scene_instance(
		mansion_png,
		belligerent_ttf,
		&belligerent_ttf_size,
		NULL,
		si_populate_scene_images((VN_Scene_Image[IMAGES_SV_COUNT]){
			{carl_png, }
		}),
		si_populate_chars((char*[TEXTLINE_LENGTH]){
			"\"Yeah, sure. He's like, my",
			"great-great-great grandfather, or",
			"something. I think we still have some",
			"of that stuff from back in the day.\""
		})
	);
	scenes[106] = init_scene_instance(
		mansion_png,
		belligerent_ttf,
		&belligerent_ttf_size,
		NULL,
		si_populate_scene_images((VN_Scene_Image[IMAGES_SV_COUNT]){
			{carl_png, }
		}),
		si_populate_chars((char*[TEXTLINE_LENGTH]){
			"\"My parents were thinking about",
			"setting up an Echo museum thing, but",
			"they never did.\"",
			""
		})
	);
	scenes[107] = init_scene_instance(
		mansion_png,
		belligerent_ttf,
		&belligerent_ttf_size,
		NULL,
		si_populate_scene_images((VN_Scene_Image[IMAGES_SV_COUNT]){
			{carl_png, }
		}),
		si_populate_chars((char*[TEXTLINE_LENGTH]){
			"This might actually be useful to me.",
			"",
			"",
			""
		})
	);
	scenes[108] = init_scene_instance(
		mansion_png,
		belligerent_ttf,
		&belligerent_ttf_size,
		NULL,
		si_populate_scene_images((VN_Scene_Image[IMAGES_SV_COUNT]){
			{carl_png, }
		}),
		si_populate_chars((char*[TEXTLINE_LENGTH]){
			"All I had planned was to maybe look",
			"over some old newspapers or town",
			"records and be done with it.",
			""
		})
	);
	scenes[109] = init_scene_instance(
		mansion_png,
		belligerent_ttf,
		&belligerent_ttf_size,
		NULL,
		si_populate_scene_images((VN_Scene_Image[IMAGES_SV_COUNT]){
			{carl_png, }
		}),
		si_populate_chars((char*[TEXTLINE_LENGTH]){
			"Actually seeing some old stuff up",
			"close could be pretty cool.",
			"",
			""
		})
	);
	scenes[110] = init_scene_instance(
		mansion_png,
		belligerent_ttf,
		&belligerent_ttf_size,
		speaker_chase_png,
		si_populate_scene_images((VN_Scene_Image[IMAGES_SV_COUNT]){
			{carl_png, }
		}),
		si_populate_chars((char*[TEXTLINE_LENGTH]){
			"\"That might be a good idea,",
			"actually.\"",
			"",
			""
		})
	);
	scenes[111] = init_scene_instance(
		mansion_png,
		belligerent_ttf,
		&belligerent_ttf_size,
		NULL,
		si_populate_scene_images((VN_Scene_Image[IMAGES_SV_COUNT]){
			{carl_png, }
		}),
		si_populate_chars((char*[TEXTLINE_LENGTH]){
			"Carl grins.",
			"",
			"",
			""
		})
	);
	scenes[112] = init_scene_instance(
		mansion_png,
		belligerent_ttf,
		&belligerent_ttf_size,
		NULL,
		si_populate_scene_images((VN_Scene_Image[IMAGES_SV_COUNT]){
			{carl_png, }
		}),
		si_populate_chars((char*[TEXTLINE_LENGTH]){
			"\"Awesome. I always kinda wanted to",
			"look through that stuff, but the crawl",
			"space is damn creepy. You free",
			"tonight?\""
		})
	);
	scenes[113] = init_scene_instance(
		mansion_png,
		belligerent_ttf,
		&belligerent_ttf_size,
		NULL,
		si_populate_scene_images((VN_Scene_Image[IMAGES_SV_COUNT]){
			{carl_png, }
		}),
		si_populate_chars((char*[TEXTLINE_LENGTH]){
			"For the first time Carl actually looks",
			"really excited.",
			"",
			""
		})
	);
	scenes[114] = init_scene_instance(
		mansion_png,
		belligerent_ttf,
		&belligerent_ttf_size,
		NULL,
		si_populate_scene_images((VN_Scene_Image[IMAGES_SV_COUNT]){
			{carl_png, }
		}),
		si_populate_chars((char*[TEXTLINE_LENGTH]){
			"\"Oh wait, nevermind. Flynn's taking",
			"me to a dentist appointment early in",
			"the morning. How about around 11",
			"tomorrow?\""
		})
	);
	scenes[115] = init_scene_instance(
		mansion_png,
		belligerent_ttf,
		&belligerent_ttf_size,
		NULL,
		si_populate_scene_images((VN_Scene_Image[IMAGES_SV_COUNT]){
			{carl_png, }
		}),
		si_populate_chars((char*[TEXTLINE_LENGTH]){
			"I smile.",
			"",
			"",
			""
		})
	);
	scenes[116] = init_scene_instance(
		mansion_png,
		belligerent_ttf,
		&belligerent_ttf_size,
		speaker_chase_png,
		si_populate_scene_images((VN_Scene_Image[IMAGES_SV_COUNT]){
			{carl_png, }
		}),
		si_populate_chars((char*[TEXTLINE_LENGTH]){
			"\"Sounds like a plan.\"",
			"",
			"",
			""
		})
	);
	scenes[117] = init_scene_instance(
		mansion_png,
		belligerent_ttf,
		&belligerent_ttf_size,
		NULL,
		si_populate_scene_images((VN_Scene_Image[IMAGES_SV_COUNT]){
			{carl_png, }
		}),
		si_populate_chars((char*[TEXTLINE_LENGTH]){
			"\"Sweet! WHOAH!\"",
			"",
			"",
			""
		})
	);
	scenes[118] = init_scene_instance(
		mansion_png,
		belligerent_ttf,
		&belligerent_ttf_size,
		NULL,
		NULL,
		si_populate_chars((char*[TEXTLINE_LENGTH]){
			"Carl gives an excited kick off the",
			"rock and, as the chair's tipping back,",
			"the back legs practically snap under",
			"his weight."
		})
	);
	scenes[119] = init_scene_instance(
		mansion_png,
		belligerent_ttf,
		&belligerent_ttf_size,
		NULL,
		NULL,
		si_populate_chars((char*[TEXTLINE_LENGTH]){
			"He's sent slamming down on his rear,",
			"the chair a crumpled mess under his",
			"ass.",
			""
		})
	);
	scenes[120] = init_scene_instance(
		mansion_png,
		belligerent_ttf,
		&belligerent_ttf_size,
		NULL,
		si_populate_scene_images((VN_Scene_Image[IMAGES_SV_COUNT]){
			{carl_sheepish_png, CENTER}
		}),
		si_populate_chars((char*[TEXTLINE_LENGTH]){
			"I laugh and of course I feel bad, but",
			"Carl just gets up with a sheepish",
			"smile, looking down at the broken",
			"pile."
		})
	);
	scenes[121] = init_scene_instance(
		mansion_png,
		belligerent_ttf,
		&belligerent_ttf_size,
		NULL,
		si_populate_scene_images((VN_Scene_Image[IMAGES_SV_COUNT]){
			{carl_sheepish_png, CENTER}
		}),
		si_populate_chars((char*[TEXTLINE_LENGTH]){
			"\"Welp, Leo's gonna be pissed.\"",
			"",
			"",
			""
		})
	);
	scenes[122] = init_scene_instance(
		thelake_png,
		belligerent_ttf,
		&belligerent_ttf_size,
		NULL,
		si_populate_scene_images((VN_Scene_Image[IMAGES_SV_COUNT]){
			{carl_sheepish_png, CENTER}
		}),
		si_populate_chars((char*[TEXTLINE_LENGTH]){
			"I'm driving down the road alongside",
			"the lake.",
			"",
			""
		})
	);
	scenes[123] = init_scene_instance(
		thelake_png,
		belligerent_ttf,
		&belligerent_ttf_size,
		NULL,
		si_populate_scene_images((VN_Scene_Image[IMAGES_SV_COUNT]){
			{carl_sheepish_png, CENTER}
		}),
		si_populate_chars((char*[TEXTLINE_LENGTH]){
			"Carl's sitting next to me.",
			"",
			"",
			""
		})
	);
	scenes[124] = init_scene_instance(
		thelake_png,
		belligerent_ttf,
		&belligerent_ttf_size,
		NULL,
		si_populate_scene_images((VN_Scene_Image[IMAGES_SV_COUNT]){
			{carl_sheepish_png, CENTER}
		}),
		si_populate_chars((char*[TEXTLINE_LENGTH]){
			"He's in the chair that he broke.",
			"",
			"",
			""
		})
	);
	scenes[125] = init_scene_instance(
		thelake_png,
		belligerent_ttf,
		&belligerent_ttf_size,
		NULL,
		si_populate_scene_images((VN_Scene_Image[IMAGES_SV_COUNT]){
			{carl_sheepish_png, CENTER}
		}),
		si_populate_chars((char*[TEXTLINE_LENGTH]){
			"I keep telling him to wear his",
			"seatbelt, but he won't.",
			"",
			""
		})
	);
	scenes[126] = init_scene_instance(
		thelake_png,
		belligerent_ttf,
		&belligerent_ttf_size,
		NULL,
		si_populate_scene_images((VN_Scene_Image[IMAGES_SV_COUNT]){
			{carl_sheepish_png, CENTER}
		}),
		si_populate_chars((char*[TEXTLINE_LENGTH]){
			"I turn down a road I don't remember.",
			"",
			"",
			""
		})
	);
	scenes[127] = init_scene_instance(
		thelake_png,
		belligerent_ttf,
		&belligerent_ttf_size,
		NULL,
		si_populate_scene_images((VN_Scene_Image[IMAGES_SV_COUNT]){
			{carl_sheepish_png, CENTER}
		}),
		si_populate_chars((char*[TEXTLINE_LENGTH]){
			"It goes straight down towards the",
			"lake.",
			"",
			""
		})
	);
	scenes[128] = init_scene_instance(
		thelake_png,
		belligerent_ttf,
		&belligerent_ttf_size,
		NULL,
		si_populate_scene_images((VN_Scene_Image[IMAGES_SV_COUNT]){
			{carl_sheepish_png, CENTER}
		}),
		si_populate_chars((char*[TEXTLINE_LENGTH]){
			"For some reason I can't stop.",
			"",
			"",
			""
		})
	);
	scenes[129] = init_scene_instance(
		thelake_png,
		belligerent_ttf,
		&belligerent_ttf_size,
		NULL,
		si_populate_scene_images((VN_Scene_Image[IMAGES_SV_COUNT]){
			{carl_sheepish_png, CENTER}
		}),
		si_populate_chars((char*[TEXTLINE_LENGTH]){
			"I brace myself for the impact, but I",
			"hardly feel anything.",
			"",
			""
		})
	);
	scenes[130] = init_scene_instance(
		thelake_png,
		belligerent_ttf,
		&belligerent_ttf_size,
		NULL,
		si_populate_scene_images((VN_Scene_Image[IMAGES_SV_COUNT]){
			{carl_sheepish_png, CENTER}
		}),
		si_populate_chars((char*[TEXTLINE_LENGTH]){
			"We just glide into the lake.",
			"",
			"",
			""
		})
	);
	scenes[131] = init_scene_instance(
		thelake_png,
		belligerent_ttf,
		&belligerent_ttf_size,
		NULL,
		si_populate_scene_images((VN_Scene_Image[IMAGES_SV_COUNT]){
			{carl_sheepish_png, CENTER}
		}),
		si_populate_chars((char*[TEXTLINE_LENGTH]){
			"I start trying to take off the",
			"seatbelt, but it's stuck.",
			"",
			""
		})
	);
	scenes[132] = init_scene_instance(
		thelake_png,
		belligerent_ttf,
		&belligerent_ttf_size,
		NULL,
		si_populate_scene_images((VN_Scene_Image[IMAGES_SV_COUNT]){
			{carl_sheepish_png, CENTER}
		}),
		si_populate_chars((char*[TEXTLINE_LENGTH]){
			"I look over at Carl and he smiles",
			"before opening his door.",
			"",
			""
		})
	);
	scenes[133] = init_scene_instance(
		thelake_png,
		belligerent_ttf,
		&belligerent_ttf_size,
		NULL,
		si_populate_scene_images((VN_Scene_Image[IMAGES_SV_COUNT]){
			{carl_sheepish_png, CENTER}
		}),
		si_populate_chars((char*[TEXTLINE_LENGTH]){
			"Water rushes in, and he starts to step",
			"out.",
			"",
			""
		})
	);
	scenes[134] = init_scene_instance(
		thelake_png,
		belligerent_ttf,
		&belligerent_ttf_size,
		NULL,
		si_populate_scene_images((VN_Scene_Image[IMAGES_SV_COUNT]){
			{carl_sheepish_png, CENTER}
		}),
		si_populate_chars((char*[TEXTLINE_LENGTH]){
			"Soon the water is over my head, and it",
			"doesn't matter that I'm an otter.",
			"",
			""
		})
	);
	return scenes;
}
#endif