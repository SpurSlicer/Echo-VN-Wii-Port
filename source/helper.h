//#include "fonts.h"
//#include "scenes.h"
//#include "speakers.h"
//#include "music.h"
//#include "backgrounds.h"
//#include "images.h"
#ifndef HELPER_H
#define HELPER_H

#include "headers.h"
#include "lookup_helper.h"

void load_background(VN_Background* bk, const uint8_t* id) {
    if (!id) {
        memset(bk, 0, sizeof(VN_Background));
        return;
    }
    ML_LoadBackgroundFromBuffer(&bk->image, &bk->background, id, 0, 0); 
    bk->existance = true;
    return;
}

void load_speaker(VN_Speaker* s, const uint8_t* id) {
    if (!id) { 
        memset(s, 0, sizeof(VN_Speaker));
        return;
    }
	ML_LoadSpriteFromBuffer(&s->asset.image, &s->asset.sprite, id, SPEAKER_X, SPEAKER_Y);
	s->asset.sprite.scaleX = SPEAKER_SCALE_X;
	s->asset.sprite.scaleY = SPEAKER_SCALE_Y;
    s->existance = true;
    return;
}

void load_message_box(VN_Asset* mb) {
    ML_LoadSpriteFromBuffer(&mb->image, &mb->sprite, message_box_png, MB_X, MB_Y);
    mb->sprite.scaleX = MB_SCALE_X;
    mb->sprite.scaleY = MB_SCALE_Y;
    return;
}


void load_images(VN_Scene_Image* s_images, VN_Image* images) {
    if (!s_images) {
        memset(images, 0, sizeof(VN_Image)*IMAGES_SV_COUNT);
        return;
    }
    for (int i = 0; ((i < IMAGES_SV_COUNT) && (s_images[i].position != NONE)); i++) {
        images[i].position = s_images[i].position;
        ML_LoadSpriteFromBuffer(&images[i].asset.image, &images[i].asset.sprite, s_images[i].resource, 0, 0);
        images[i].asset.sprite.scaleX = IMAGES_SV_SCALE_X;
        images[i].asset.sprite.scaleY = IMAGES_SV_SCALE_Y;
        if (images[i].position == CENTER) {
            images[i].asset.sprite.x = (int)(IMAGES_SV_OFFSET_X_SCALAR*(2.5f))-IMAGES_SV_OFFSET_X_SUB;
            images[i].asset.sprite.y = IMAGES_SV_OFFSET_Y;
        } else {
            images[i].asset.sprite.x = (IMAGES_SV_OFFSET_X_SCALAR*(images[i].position-1))-IMAGES_SV_OFFSET_X_SUB;
            images[i].asset.sprite.y = IMAGES_SV_OFFSET_Y;
        }
    }
    return;
}

void draw_images(VN_Image* images) {
    for (int i = 0; i < IMAGES_SV_COUNT && images[i].position != NONE; i++)
        ML_DrawSprite(&images[i].asset.sprite);
}

void draw_text(scene_variables* sv) {
    ML_DrawSprite(&sv->message_box.sprite);
    for (int i = 0; i < TEXTLINE_COUNT; i++)
        ML_DrawText(&sv->font, TEXT_GLOBAL_X, TEXT_GLOBAL_Y + (TEXT_LOCAL_OFFSET_Y * i), sv->text[i]);
    return;
}

void draw_scene(scene_variables* sv) {
    if (sv->background.existance)
        ML_DrawBackground(&sv->background.background);
    draw_images(sv->images);
    draw_text(sv);
    if (sv->speaker.existance)
        ML_DrawSprite(&sv->speaker.asset.sprite);
}


/*lookup_tables* init_lookup_tables() {
    lookup_t* fonts = (lookup_t*)calloc(FONTS_COUNT, sizeof(lookup_t));
    lookup_t* scenes = (lookup_t*)calloc(SCENES_COUNT, sizeof(lookup_t));
    lookup_t* speakers = (lookup_t*)calloc(SPEAKERS_COUNT, sizeof(lookup_t));
    lookup_t* music = (lookup_t*)calloc(MUSIC_COUNT, sizeof(lookup_t));
    lookup_t* backgrounds = (lookup_t*)calloc(BACKGROUNDS_COUNT, sizeof(lookup_t));
    lookup_t* images = (lookup_t*)calloc(IMAGES_COUNT, sizeof(lookup_t));
    lookup_tables* lt = (lookup_tables*)calloc(1, sizeof(lookup_tables));
    lt->fonts = fonts;
    lt->scenes = scenes;
    lt->speakers = speakers;
    lt->music = music;
    lt->backgrounds = backgrounds;
    lt->images = images;
    init_fonts_lookup_table(lt->fonts); //works
    init_scenes_lookup_table(lt->scenes); //works
    init_speakers_lookup_table(lt->speakers); //works
    init_music_lookup_table(lt->music);
    //init_backgrounds_lookup_table(lt->backgrounds); 
    //init_images_lookup_table(lt->images);
    return lt;
}*/

scene_variables* init_scene_variables() {
    VN_Image* images = (VN_Image*)calloc(IMAGES_SV_COUNT, sizeof(VN_Image));
    char** text = (char**)calloc(TEXTLINE_COUNT, sizeof(char*));
    for (int i = 0; i < TEXTLINE_COUNT; i++) {
        char* textline = (char*)calloc(TEXTLINE_LENGTH, sizeof(char));
        text[i] = textline;
    }
    scene_variables* sv = (scene_variables*)calloc(1, sizeof(scene_variables));
    sv->images = images;
    sv->text = text;
    load_message_box(&sv->message_box);
    return sv;
}

void change_scene_variables(scene_variables* sv, scene_instance* si) {
    load_background(&sv->background, si->id_background);
    ML_LoadFontFromBuffer(&sv->font, si->id_font, *si->id_font_size, TEXT_SIZE);
    for (int i = 0; i < TEXTLINE_COUNT; i++) {
        memset(sv->text[i], 0, TEXTLINE_LENGTH);
        strncpy(sv->text[i], si->id_text[i], TEXTLINE_COPY_LENGTH);
    }
    load_images(si->id_images, sv->images);
    load_speaker(&sv->speaker, si->id_speaker);
    return;
}

#endif