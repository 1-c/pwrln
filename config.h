/* Copyright (c) 2019 Maksymilian Mruszczak */


static const char esc = 0x1b; /* escape char */

/* Glyphs */
static const char glyph_delimiter[] = {0xee, 0x82, 0xb0, 0x00};
static const char glyph_subdelimiter[] = {0xee, 0x82, 0xb1, 0x00};
static const char glyph_prompt[] = "%";
static const char glyph_home[] = "~";

/* Colours */
static const unsigned char col_default[] = {238, 248};
static const unsigned char col_user[] = {39, 26};
static const unsigned char col_home[] = {226, 233};
static const unsigned char col_prompt[] = {160, 236, 7}; /* error, ok, font */