#ifndef _ANIMATE_FRAMES_H_
#define _ANIMATE_FRAMES_H_
#include "animate_frames_bin.h"

#define DEFAULT_DELAY 0

typedef struct _anim_sequence {
        const char *data;
        int size;
        float delay;
} anim_sequence;

static anim_sequence seq[] = {
        { VID_FRAME_0, VID_FRAME_0_SIZE, DEFAULT_DELAY },
	{ VID_FRAME_1, VID_FRAME_1_SIZE, DEFAULT_DELAY },
	{ VID_FRAME_2, VID_FRAME_2_SIZE, DEFAULT_DELAY },
	{ VID_FRAME_3, VID_FRAME_3_SIZE, DEFAULT_DELAY },
	{ VID_FRAME_4, VID_FRAME_4_SIZE, DEFAULT_DELAY },
	{ VID_FRAME_5, VID_FRAME_5_SIZE, DEFAULT_DELAY },
	{ VID_FRAME_6, VID_FRAME_6_SIZE, DEFAULT_DELAY },
	{ VID_FRAME_7, VID_FRAME_7_SIZE, DEFAULT_DELAY },
	{ VID_FRAME_8, VID_FRAME_8_SIZE, DEFAULT_DELAY },
	{ VID_FRAME_9, VID_FRAME_9_SIZE, DEFAULT_DELAY },
	{ VID_FRAME_10, VID_FRAME_10_SIZE, DEFAULT_DELAY },
	{ VID_FRAME_11, VID_FRAME_11_SIZE, 8 },
	{ VID_FRAME_12, VID_FRAME_12_SIZE, DEFAULT_DELAY },
	{ VID_FRAME_13, VID_FRAME_13_SIZE, DEFAULT_DELAY },
	{ VID_FRAME_14, VID_FRAME_14_SIZE, DEFAULT_DELAY },
	{ VID_FRAME_15, VID_FRAME_15_SIZE, DEFAULT_DELAY },
	{ VID_FRAME_11, VID_FRAME_11_SIZE, 8 },
	{ VID_FRAME_16, VID_FRAME_16_SIZE, DEFAULT_DELAY },
	{ VID_FRAME_17, VID_FRAME_17_SIZE, DEFAULT_DELAY },
	{ VID_FRAME_18, VID_FRAME_18_SIZE, DEFAULT_DELAY },
	{ VID_FRAME_19, VID_FRAME_19_SIZE, DEFAULT_DELAY },
	{ VID_FRAME_20, VID_FRAME_20_SIZE, DEFAULT_DELAY },
	{ VID_FRAME_21, VID_FRAME_21_SIZE, DEFAULT_DELAY },
	{ VID_FRAME_11, VID_FRAME_11_SIZE, 8 },
	{ NULL, 0, 0 }
};

#endif

