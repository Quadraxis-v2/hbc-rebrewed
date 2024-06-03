#include <mad.h>
#include <stdio.h>
#include <mp3player.h>

int mp3Reader(void *cbdata, void *dst, int size) {
        FILE *file = cbdata;
        return fread(dst,1,size,file);
}

void play_music() {
        ASND_Init();
        MP3Player_Init();
        MP3Player_Volume(127);
        FILE* f = fopen("sd:/menu_music.mp3", "r");
        if(f != NULL) {
            MP3Player_PlayFile(f, &mp3Reader, NULL);
        }
        ASND_Pause(0);
}
