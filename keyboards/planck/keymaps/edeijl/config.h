#pragma once

#ifdef AUDIO_ENABLE
#define STARTUP_SONG SONG(PLANCK_SOUND)
#endif

#define MIDI_BASIC

#define ENCODER_RESOLUTION 4

/*
  Set any config.h overrides for your specific keymap here.
  See config.h options at https://docs.qmk.fm/#/config_options?id=the-configh-file
*/
#define ORYX_CONFIGURATOR
#define FIRMWARE_VERSION u8"OvWQr/KRpwL"
#define RGB_MATRIX_STARTUP_SPD 60
// These are defined in the base keyboard but I put em here for easy reference
// #define VENDOR_ID       0xFEED
//#define PRODUCT_ID      0xC6CF
#define RAW_USAGE_PAGE 0xFF60
#define RAW_USAGE_ID 0x61
