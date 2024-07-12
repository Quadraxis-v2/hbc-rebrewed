#ifdef USE_MUSIC
#include "music.h"
#include <asndlib.h>
#include <mad.h>
#include <mp3player.h>
#include <stdio.h>

#include "theme.h"
#include "xml.h"

int current_track = MUSIC_TRACK_MENU; // default

void music_init() {
    ASND_Init();
    MP3Player_Init();
    MP3Player_Volume(127);
}

void play_music() {
    // Just play whatever is playing.
    // This is used in the main loop so if we are in the main menu, keep playing
    // the music: But if we are in the 'about' section, the main loop will
    // replace the credits loop. So we need a control - and this is our solution
    play_music_track(current_track);
}

void play_music_track(int track) {
    if (track != current_track) {
        MP3Player_Stop();
        current_track = track;
    }

    if (!MP3Player_IsPlaying()) {
        MP3Player_PlayBuffer(theme_music[current_track].data,
                             theme_music[current_track].data_len, NULL);
        ASND_Pause(0);
    }
}

void music_deinit() {
    MP3Player_Stop();
    ASND_End();
}

#endif
