#include "theme.h"
#include "xml.h"
#include <mad.h>
#include <stdio.h>
#include <mp3player.h>

void music_init() {
    ASND_Init();
    MP3Player_Init();
    MP3Player_Volume(127);
}

void play_music() {
    if(!MP3Player_IsPlaying()) {
        MP3Player_PlayBuffer(theme_music.data, theme_music.data_len, NULL);
        ASND_Pause(0);
    }
}

void music_deinit() {
    MP3Player_Stop();
    ASND_End();
}
