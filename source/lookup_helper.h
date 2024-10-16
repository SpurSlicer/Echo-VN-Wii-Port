#ifndef LOOKUP_HELPER
#define LOOKUP_HELPER
#include <stddef.h>
#include <stdlib.h>
#include <stdint.h>

#include <MLlib.h>

#define WINDOW_WIDTH 480
#define WINDOW_HEIGHT 640

#define MB_X 2
#define MB_Y 310
#define MB_SCALE_X 0.85f
#define MB_SCALE_Y 0.95f

#define TEXTLINE_COUNT 4
#define TEXTLINE_LENGTH 40
#define TEXTLINE_COPY_LENGTH TEXTLINE_LENGTH-1

#define TEXT_SIZE 23
#define TEXT_GLOBAL_X (MB_X + 110)
#define TEXT_GLOBAL_Y (MB_Y + 27)
#define TEXT_LOCAL_OFFSET_Y 32

#define SPEAKER_X 40
#define SPEAKER_Y 285
#define SPEAKER_SCALE_X 0.62f
#define SPEAKER_SCALE_Y 0.62f

#define IMAGES_SV_COUNT 12
#define IMAGES_SV_SCALE_X 0.80f
#define IMAGES_SV_SCALE_Y 0.95f
#define IMAGES_SV_OFFSET_Y 23
#define IMAGES_SV_OFFSET_X_SUB 60
#define IMAGES_SV_OFFSET_X_SCALAR 139

typedef enum VN_Position {
    NONE = 0,
    FAR_LEFT = 1,
    LEFT = 2,
    RIGHT = 3,
    FAR_RIGHT = 4,
    CENTER = 5
} VN_Position;

typedef enum VN_State_Machine {
    AWAITING = 0,
    PRINTING_TEXT = 1,
    ANIMATING = 2,
    FORCED_CUTSCENE = 3,
} VN_State_Machine;

typedef struct VN_Asset {
    ML_Image image;
    ML_Sprite sprite;
} VN_Asset;

typedef struct VN_Speaker {
    VN_Asset asset;
    bool existance;
} VN_Speaker;

typedef struct VN_Image {
    VN_Asset asset;
    VN_Position position;
} VN_Image;

typedef struct VN_Scene_Image {
    const uint8_t* resource;
    VN_Position position;
} VN_Scene_Image;

typedef struct VN_Background {
    ML_Image image;
    ML_Background background;
    bool existance;
} VN_Background;

typedef struct scene_variables {
    VN_Background background;
    VN_Asset message_box;
    VN_Image* images;
    ML_Font font;
    char** text;
    VN_Speaker speaker;
} scene_variables;

typedef struct scene_instance {
    const uint8_t* id_background;
    const uint8_t* id_font;
    const size_t* id_font_size;
    const uint8_t* id_speaker;
    VN_Scene_Image* id_images;
    char** id_text;
} scene_instance;

typedef struct lookup_t {
    const uint8_t* resource;
    size_t size;
} lookup_t;

char** si_populate_chars(char** c) {
    char** chars = (char**)calloc(TEXTLINE_COUNT, sizeof(char*));
    for (int i = 0; i < TEXTLINE_COUNT; i++) {
        if (c[i]) {
            char* temp_char = (char*)calloc(TEXTLINE_LENGTH, sizeof(char));
            strncpy(temp_char, c[i], TEXTLINE_COPY_LENGTH);
            chars[i] = temp_char;
        } else chars[i] = NULL;
    }
    return chars;
}

VN_Scene_Image* si_populate_scene_images(const VN_Scene_Image* s_i) {
    VN_Scene_Image* images = (VN_Scene_Image*)calloc(IMAGES_SV_COUNT, sizeof(VN_Scene_Image));
    for (int i = 0; i < IMAGES_SV_COUNT; i++) 
        memcpy(&images[i], &s_i[i], sizeof(VN_Scene_Image));
    return images;
}



scene_instance* init_scene_instance(
    const uint8_t* background, 
    const uint8_t* font,
    const size_t* font_size,
    const uint8_t* speaker,
    VN_Scene_Image* images,
    char** text) 
{
    scene_instance* si = (scene_instance*)calloc(1, sizeof(scene_instance));
    si->id_background = background;
    si->id_font = font;
    si->id_font_size = font_size;
    si->id_speaker = speaker;
    si->id_text = text;
    si->id_images = images;
    return si;
}
#endif