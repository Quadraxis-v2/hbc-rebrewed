#include <mad.h>
#include <stdio.h>

int mp3Reader(void *cbdata, void *dst, int size) {
        FILE *file = cbdata;
        return fread(dst,1,size,file);
}

void play_music() {
        FILE *myFile = fopen("sd:/menu_music.mp3");
        MP3Player_PlayFile(myFile, &mp3Reader, NULL);
        fclose(myFile);
}
