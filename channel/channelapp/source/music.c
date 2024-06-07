#include "theme.h"
#include "xml.h"
#include <mad.h>
#include <stdio.h>
#include <mp3player.h>

void play_music() {
        ASND_Init();
        MP3Player_Init();
        MP3Player_Volume(127);
        MP3Player_PlayBuffer(theme_music.data, theme_music.data_len, NULL);
        ASND_Pause(0);
}
