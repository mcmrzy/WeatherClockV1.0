/*******************************************************************************
 * Size: 8 px
 * Bpp: 8
 * Opts: --bpp 8 --size 8 --font C:\Users\29538\Documents\SquareLine\assets\江城黑体.ttf -o C:\Users\29538\Documents\SquareLine\assets\ui_font_jiangcheng8.c --format lvgl -r 0x20-0x7f --symbols 石家庄 --no-compress --no-prefilter
 ******************************************************************************/

#include "../ui.h"

#ifndef UI_FONT_JIANGCHENG8
#define UI_FONT_JIANGCHENG8 1
#endif

#if UI_FONT_JIANGCHENG8

/*-----------------
 *    BITMAPS
 *----------------*/

/*Store the image of the glyphs*/
static LV_ATTRIBUTE_LARGE_CONST const uint8_t glyph_bitmap[] = {
    /* U+0020 " " */

    /* U+0021 "!" */
    0x1c, 0xff, 0x47, 0x11, 0xff, 0x3c, 0x2, 0xfd,
    0x2b, 0x0, 0xee, 0x19, 0x14, 0xff, 0x37, 0x19,
    0xed, 0x3e,

    /* U+0022 "\"" */
    0x4c, 0xff, 0x2b, 0xff, 0x57, 0x3d, 0xff, 0x11,
    0xfc, 0x48, 0x1b, 0xea, 0x0, 0xdf, 0x26, 0x1,
    0x4b, 0x0, 0x47, 0x5,

    /* U+0023 "#" */
    0x0, 0x94, 0x3a, 0xce, 0x1, 0x7c, 0xfe, 0xf8,
    0xfe, 0x93, 0x0, 0xd1, 0x21, 0xb3, 0x0, 0xaa,
    0xfe, 0xf9, 0xfc, 0x64, 0x12, 0xc1, 0x56, 0x7b,
    0x0, 0x2b, 0xa5, 0x6f, 0x63, 0x0,

    /* U+0024 "$" */
    0x0, 0x2, 0x2a, 0x0, 0x0, 0x0, 0x15, 0xe9,
    0x8, 0x0, 0x20, 0xea, 0xff, 0xe8, 0x10, 0x64,
    0xfc, 0x19, 0x3a, 0x0, 0x21, 0xec, 0xce, 0x3a,
    0x0, 0x0, 0x18, 0xa4, 0xf9, 0x20, 0x32, 0x6c,
    0x57, 0xff, 0x3f, 0x4d, 0xe4, 0xfe, 0xad, 0x3,
    0x0, 0xc, 0xe4, 0x0, 0x0,

    /* U+0025 "%" */
    0x61, 0xe2, 0xc1, 0x8, 0x25, 0xaa, 0x0, 0x0,
    0xbc, 0x4a, 0xd6, 0x30, 0xa6, 0x29, 0x0, 0x0,
    0x53, 0xda, 0xae, 0x38, 0xa1, 0xae, 0xd0, 0x28,
    0x0, 0x0, 0x0, 0xb2, 0x62, 0xb5, 0x6a, 0x94,
    0x0, 0x0, 0x43, 0x8c, 0x47, 0xb0, 0x64, 0x97,
    0x0, 0x0, 0xbc, 0x13, 0x7, 0xc2, 0xdf, 0x31,

    /* U+0026 "&" */
    0x0, 0x90, 0xf5, 0xb2, 0x0, 0x0, 0x6, 0xff,
    0x5a, 0xfc, 0x9, 0x0, 0x0, 0xdd, 0xf1, 0x70,
    0x29, 0x58, 0x7d, 0xe4, 0xed, 0x86, 0xc7, 0x91,
    0xb6, 0xc4, 0x68, 0xfe, 0xff, 0x6c, 0x3c, 0xd8,
    0xf2, 0xaf, 0x90, 0xbb,

    /* U+0027 "'" */
    0x4c, 0xff, 0x1b, 0x3d, 0xff, 0xd, 0x1b, 0xea,
    0x0, 0x1, 0x4b, 0x0,

    /* U+0028 "(" */
    0x0, 0x9, 0x7, 0x0, 0x74, 0x90, 0x2, 0xdf,
    0x37, 0x2d, 0xfa, 0x2, 0x4f, 0xe0, 0x0, 0x57,
    0xd3, 0x0, 0x44, 0xec, 0x0, 0x14, 0xfc, 0x12,
    0x0, 0xb0, 0x61, 0x0, 0x3a, 0x5e,

    /* U+0029 ")" */
    0x1, 0xf, 0x0, 0x5d, 0xb3, 0x0, 0xc, 0xf7,
    0x1b, 0x0, 0xcb, 0x5c, 0x0, 0xae, 0x7f, 0x0,
    0xa1, 0x86, 0x0, 0xbc, 0x73, 0x0, 0xe1, 0x41,
    0x2e, 0xe9, 0x4, 0x3c, 0x61, 0x0,

    /* U+002A "*" */
    0x2, 0x4d, 0x87, 0x2, 0x83, 0xed, 0xf0, 0xb7,
    0x3, 0xe1, 0xf3, 0x1f, 0xd, 0x61, 0x46, 0x29,

    /* U+002B "+" */
    0x0, 0x10, 0xa3, 0x0, 0x0, 0x0, 0x18, 0xf4,
    0x0, 0x0, 0xa5, 0xf1, 0xff, 0xf0, 0x87, 0x16,
    0x35, 0xf5, 0x20, 0x12, 0x0, 0x18, 0xf4, 0x0,
    0x0,

    /* U+002C "," */
    0x24, 0xa4, 0x19, 0x43, 0xf8, 0x62, 0x6, 0xb9,
    0x43, 0x6a, 0x8f, 0x0, 0x0, 0x0, 0x0,

    /* U+002D "-" */
    0x90, 0xf4, 0xa0, 0x13, 0x20, 0x15,

    /* U+002E "." */
    0x35, 0xd5, 0x13, 0x40, 0xed, 0x19,

    /* U+002F "/" */
    0x0, 0x39, 0xb6, 0x0, 0x6b, 0x84, 0x0, 0x9d,
    0x52, 0x0, 0xcf, 0x20, 0x6, 0xe7, 0x0, 0x32,
    0xbb, 0x0, 0x64, 0x89, 0x0, 0x96, 0x57, 0x0,
    0xc7, 0x25, 0x0,

    /* U+0030 "0" */
    0x6, 0xa1, 0xf2, 0xc7, 0x23, 0x66, 0xfa, 0x4c,
    0xd1, 0xb2, 0x9d, 0xd6, 0x0, 0x8b, 0xe8, 0x9c,
    0xd7, 0x0, 0x8d, 0xe7, 0x63, 0xfc, 0x52, 0xd7,
    0xae, 0x5, 0x9f, 0xf2, 0xc7, 0x21,

    /* U+0031 "1" */
    0x0, 0x4b, 0xf7, 0x68, 0x4b, 0xf3, 0xff, 0x68,
    0x10, 0x30, 0xff, 0x68, 0x0, 0x2c, 0xff, 0x68,
    0x0, 0x2c, 0xff, 0x68, 0x0, 0x2c, 0xff, 0x68,

    /* U+0032 "2" */
    0x34, 0xcf, 0xf7, 0xbf, 0x16, 0x29, 0x5d, 0x56,
    0xfd, 0x82, 0x0, 0x0, 0x19, 0xfc, 0x69, 0x0,
    0xa, 0xc1, 0xcb, 0x5, 0x1b, 0xcb, 0xee, 0x5a,
    0x40, 0xa5, 0xff, 0xff, 0xff, 0xe4,

    /* U+0033 "3" */
    0x38, 0xcb, 0xf6, 0xcb, 0x2b, 0xe, 0x59, 0x47,
    0xfb, 0x96, 0x0, 0x2e, 0xa1, 0xea, 0x3c, 0x0,
    0x23, 0x7c, 0xec, 0x76, 0x35, 0x5e, 0x47, 0xe0,
    0xcd, 0x52, 0xd5, 0xf5, 0xcd, 0x39,

    /* U+0034 "4" */
    0x0, 0xd, 0xdb, 0xff, 0x64, 0x0, 0x0, 0xa4,
    0xbc, 0xff, 0x64, 0x0, 0x5f, 0xed, 0x30, 0xff,
    0x64, 0x0, 0xd2, 0xfe, 0xfc, 0xff, 0xfd, 0x1b,
    0x24, 0x2c, 0x3c, 0xff, 0x7e, 0x4, 0x0, 0x0,
    0x14, 0xff, 0x64, 0x0,

    /* U+0035 "5" */
    0x27, 0xff, 0xff, 0xff, 0x8c, 0x36, 0xff, 0x65,
    0x44, 0x25, 0x45, 0xff, 0xe6, 0xc9, 0x33, 0x6,
    0x43, 0x33, 0xdd, 0xc5, 0x35, 0x5a, 0x4a, 0xe6,
    0xb9, 0x4d, 0xcf, 0xf3, 0xc1, 0x22,

    /* U+0036 "6" */
    0x0, 0x7d, 0xed, 0xe7, 0x6f, 0x4e, 0xff, 0x6e,
    0x3d, 0x1b, 0x92, 0xf0, 0xc0, 0xd7, 0x50, 0x95,
    0xf1, 0x3a, 0xaf, 0xdc, 0x5b, 0xfe, 0x4b, 0xae,
    0xde, 0x1, 0x90, 0xf3, 0xd8, 0x3f,

    /* U+0037 "7" */
    0x98, 0xff, 0xff, 0xff, 0xe3, 0x28, 0x44, 0x53,
    0xf7, 0x71, 0x0, 0x0, 0x96, 0xcd, 0x0, 0x0,
    0xf, 0xf7, 0x6d, 0x0, 0x0, 0x47, 0xff, 0x3c,
    0x0, 0x0, 0x6a, 0xff, 0x25, 0x0,

    /* U+0038 "8" */
    0xd, 0xb5, 0xf6, 0xd4, 0x2f, 0x54, 0xff, 0x32,
    0xc7, 0x92, 0x17, 0xe1, 0x8b, 0xcb, 0x35, 0x38,
    0xda, 0x7d, 0xee, 0x88, 0x8e, 0xd8, 0x23, 0xb1,
    0xdd, 0x24, 0xc6, 0xf8, 0xdd, 0x53,

    /* U+0039 "9" */
    0x2d, 0xc8, 0xf6, 0xbb, 0x17, 0xa6, 0xe2, 0x34,
    0xd1, 0xa1, 0x53, 0xf8, 0xf6, 0xdb, 0xdd, 0x0,
    0x6, 0xe, 0xab, 0xd9, 0xe, 0x55, 0x56, 0xf7,
    0x92, 0x3c, 0xd7, 0xf6, 0xa9, 0xd,

    /* U+003A ":" */
    0x41, 0xed, 0x1a, 0x34, 0xce, 0x12, 0x0, 0x0,
    0x0, 0x35, 0xd5, 0x13, 0x40, 0xed, 0x19,

    /* U+003B ";" */
    0x41, 0xed, 0x1a, 0x34, 0xce, 0x12, 0x0, 0x0,
    0x0, 0x24, 0xa4, 0x19, 0x43, 0xf8, 0x62, 0x6,
    0xb9, 0x43, 0x6a, 0x8f, 0x0, 0x0, 0x0, 0x0,

    /* U+003C "<" */
    0x0, 0x0, 0x0, 0x1b, 0x3b, 0x1, 0x45, 0xae,
    0xf9, 0x75, 0xa1, 0xf7, 0x77, 0x17, 0x0, 0x47,
    0xc2, 0xee, 0x9b, 0x2f, 0x0, 0x0, 0x2b, 0x94,
    0x81, 0x0, 0x0, 0x0, 0x0, 0x0,

    /* U+003D "=" */
    0xb0, 0xff, 0xff, 0xff, 0x90, 0xd, 0x14, 0x14,
    0x14, 0xb, 0xa5, 0xf0, 0xf0, 0xf0, 0x87, 0x16,
    0x20, 0x20, 0x20, 0x12,

    /* U+003E ">" */
    0x44, 0x12, 0x0, 0x0, 0x0, 0x93, 0xf6, 0xa1,
    0x37, 0x0, 0x0, 0x20, 0x88, 0xfd, 0x81, 0x3e,
    0xa6, 0xf2, 0xb4, 0x37, 0x99, 0x87, 0x1f, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0,

    /* U+003F "?" */
    0x37, 0xd4, 0xeb, 0x5e, 0x25, 0x6f, 0xaf, 0xd4,
    0x0, 0x2, 0xc3, 0xa9, 0x0, 0x66, 0xeb, 0x16,
    0x0, 0x50, 0x5e, 0x0, 0x0, 0x8b, 0x94, 0x0,
    0x0, 0x9f, 0xa9, 0x0,

    /* U+0040 "@" */
    0x0, 0x0, 0x63, 0xd1, 0xeb, 0xdc, 0x6b, 0x0,
    0x0, 0x8a, 0xbc, 0x23, 0x0, 0x1b, 0xc2, 0x5b,
    0x29, 0xde, 0x10, 0xb6, 0xd4, 0xd1, 0x35, 0xc0,
    0x74, 0x83, 0x6a, 0xb1, 0x69, 0xa6, 0xe, 0xd8,
    0x88, 0x6b, 0x99, 0x7e, 0x97, 0x8c, 0x5b, 0xa7,
    0x68, 0x9b, 0x4b, 0xe6, 0x86, 0xe0, 0xc4, 0x1c,
    0x11, 0xe3, 0x64, 0x4, 0x2, 0x17, 0x0, 0x0,
    0x0, 0x27, 0xb4, 0xea, 0xe4, 0x76, 0x0, 0x0,

    /* U+0041 "A" */
    0x0, 0x0, 0x33, 0xfe, 0xf8, 0xe, 0x0, 0x0,
    0x0, 0x8a, 0xb1, 0xe9, 0x5d, 0x0, 0x0, 0x0,
    0xe0, 0x60, 0x9a, 0xb4, 0x0, 0x0, 0x37, 0xff,
    0xff, 0xff, 0xfa, 0x10, 0x0, 0x8e, 0xdd, 0x30,
    0x3c, 0xff, 0x61, 0x1, 0xe3, 0xa3, 0x0, 0x0,
    0xde, 0xb8,

    /* U+0042 "B" */
    0x50, 0xff, 0xff, 0xf2, 0xbc, 0x20, 0x50, 0xff,
    0x64, 0x6e, 0xff, 0x54, 0x50, 0xff, 0xfa, 0xfe,
    0xdf, 0x13, 0x50, 0xff, 0x61, 0x3b, 0xed, 0x9c,
    0x50, 0xff, 0x64, 0x43, 0xf1, 0xa5, 0x50, 0xff,
    0xff, 0xf2, 0xb6, 0x1e,

    /* U+0043 "C" */
    0x0, 0x49, 0xd0, 0xf5, 0xc4, 0x2c, 0x2e, 0xfa,
    0xc3, 0x5c, 0x8c, 0x13, 0x83, 0xff, 0x20, 0x0,
    0x0, 0x0, 0x85, 0xff, 0x1f, 0x0, 0x0, 0x0,
    0x37, 0xfd, 0xbf, 0x5f, 0x9a, 0x2c, 0x0, 0x58,
    0xd8, 0xf6, 0xc4, 0x2c,

    /* U+0044 "D" */
    0x50, 0xff, 0xfd, 0xe5, 0x90, 0x8, 0x50, 0xff,
    0x73, 0x82, 0xfe, 0x8c, 0x50, 0xff, 0x44, 0x0,
    0xc8, 0xd6, 0x50, 0xff, 0x44, 0x0, 0xcb, 0xd5,
    0x50, 0xff, 0x75, 0x87, 0xff, 0x89, 0x50, 0xff,
    0xfe, 0xe8, 0x91, 0x7,

    /* U+0045 "E" */
    0x50, 0xff, 0xff, 0xff, 0xd8, 0x50, 0xff, 0x7e,
    0x50, 0x3e, 0x50, 0xff, 0xff, 0xff, 0x74, 0x50,
    0xff, 0x70, 0x3c, 0x1b, 0x50, 0xff, 0x78, 0x48,
    0x43, 0x50, 0xff, 0xff, 0xff, 0xf0,

    /* U+0046 "F" */
    0x50, 0xff, 0xff, 0xff, 0xe0, 0x50, 0xff, 0x7e,
    0x50, 0x41, 0x50, 0xff, 0xff, 0xff, 0x80, 0x50,
    0xff, 0x70, 0x3c, 0x1e, 0x50, 0xff, 0x44, 0x0,
    0x0, 0x50, 0xff, 0x44, 0x0, 0x0,

    /* U+0047 "G" */
    0x0, 0x46, 0xcc, 0xf6, 0xd2, 0x4a, 0x2c, 0xf9,
    0xc7, 0x60, 0x73, 0x24, 0x82, 0xff, 0x21, 0x98,
    0xff, 0xd8, 0x85, 0xff, 0x21, 0x21, 0xa5, 0xd8,
    0x37, 0xfd, 0xc6, 0x61, 0xc1, 0xd8, 0x0, 0x52,
    0xd1, 0xf8, 0xda, 0x66,

    /* U+0048 "H" */
    0x50, 0xff, 0x44, 0x0, 0x94, 0xf8, 0x50, 0xff,
    0x4f, 0x10, 0x9a, 0xf8, 0x50, 0xff, 0xff, 0xff,
    0xff, 0xf8, 0x50, 0xff, 0x73, 0x40, 0xaf, 0xf8,
    0x50, 0xff, 0x44, 0x0, 0x94, 0xf8, 0x50, 0xff,
    0x44, 0x0, 0x94, 0xf8,

    /* U+0049 "I" */
    0x50, 0xff, 0x44, 0x50, 0xff, 0x44, 0x50, 0xff,
    0x44, 0x50, 0xff, 0x44, 0x50, 0xff, 0x44, 0x50,
    0xff, 0x44,

    /* U+004A "J" */
    0x0, 0x0, 0x24, 0xff, 0x70, 0x0, 0x0, 0x24,
    0xff, 0x70, 0x0, 0x0, 0x24, 0xff, 0x70, 0x0,
    0x0, 0x25, 0xff, 0x6f, 0x68, 0x9a, 0x91, 0xff,
    0x4c, 0x4c, 0xdf, 0xf8, 0xa1, 0x3,

    /* U+004B "K" */
    0x50, 0xff, 0x44, 0x43, 0xfc, 0x76, 0x0, 0x50,
    0xff, 0x61, 0xeb, 0xa2, 0x0, 0x0, 0x50, 0xff,
    0xf0, 0xfb, 0x16, 0x0, 0x0, 0x50, 0xff, 0xe7,
    0xf2, 0x9a, 0x0, 0x0, 0x50, 0xff, 0x56, 0x6e,
    0xff, 0x42, 0x0, 0x50, 0xff, 0x44, 0x2, 0xca,
    0xdd, 0xa,

    /* U+004C "L" */
    0x50, 0xff, 0x44, 0x0, 0x0, 0x50, 0xff, 0x44,
    0x0, 0x0, 0x50, 0xff, 0x44, 0x0, 0x0, 0x50,
    0xff, 0x44, 0x0, 0x0, 0x50, 0xff, 0x78, 0x48,
    0x3a, 0x50, 0xff, 0xff, 0xff, 0xd0,

    /* U+004D "M" */
    0x50, 0xff, 0x97, 0x0, 0xd, 0xf4, 0xe8, 0x50,
    0xfe, 0xf1, 0xb, 0x65, 0xfd, 0xe8, 0x50, 0xf8,
    0xd9, 0x62, 0xc6, 0xcd, 0xe8, 0x50, 0xff, 0x87,
    0xd1, 0xf3, 0x8f, 0xe8, 0x50, 0xff, 0x2d, 0xf9,
    0x9a, 0x88, 0xe8, 0x50, 0xff, 0x18, 0x5d, 0x25,
    0x88, 0xe8,

    /* U+004E "N" */
    0x50, 0xff, 0x91, 0x0, 0x9c, 0xe4, 0x50, 0xff,
    0xf6, 0x27, 0x9c, 0xe4, 0x50, 0xff, 0xb2, 0xb4,
    0x95, 0xe4, 0x50, 0xff, 0x4d, 0xfa, 0xb6, 0xe4,
    0x50, 0xff, 0x2f, 0x90, 0xfc, 0xe4, 0x50, 0xff,
    0x30, 0x12, 0xee, 0xe4,

    /* U+004F "O" */
    0x0, 0x5a, 0xd7, 0xf4, 0xca, 0x3e, 0x0, 0x37,
    0xfd, 0xb5, 0x5c, 0xcd, 0xf1, 0x19, 0x80, 0xff,
    0x1b, 0x0, 0x44, 0xff, 0x57, 0x7e, 0xff, 0x1f,
    0x0, 0x47, 0xff, 0x55, 0x33, 0xfd, 0xba, 0x60,
    0xd1, 0xef, 0x16, 0x0, 0x57, 0xd7, 0xf5, 0xca,
    0x3c, 0x0,

    /* U+0050 "P" */
    0x50, 0xff, 0xff, 0xed, 0xa9, 0x13, 0x50, 0xff,
    0x6a, 0x53, 0xfb, 0x84, 0x50, 0xff, 0x44, 0x25,
    0xf9, 0x88, 0x50, 0xff, 0xff, 0xff, 0xd7, 0x1d,
    0x50, 0xff, 0x67, 0x1b, 0x0, 0x0, 0x50, 0xff,
    0x44, 0x0, 0x0, 0x0,

    /* U+0051 "Q" */
    0x0, 0x51, 0xd4, 0xf4, 0xc7, 0x37, 0x0, 0x2d,
    0xfb, 0xbc, 0x5e, 0xd3, 0xec, 0x13, 0x7a, 0xff,
    0x23, 0x0, 0x4c, 0xff, 0x51, 0x88, 0xff, 0x11,
    0x0, 0x3a, 0xff, 0x5f, 0x54, 0xff, 0x63, 0x0,
    0x8b, 0xfe, 0x28, 0x3, 0xb1, 0xfe, 0xe6, 0xfe,
    0x81, 0x0, 0x0, 0x0, 0x48, 0xfa, 0xc3, 0x41,
    0x28, 0x0, 0x0, 0x0, 0x48, 0xcf, 0xf9, 0xa3,

    /* U+0052 "R" */
    0x50, 0xff, 0xff, 0xf0, 0xba, 0x1b, 0x50, 0xff,
    0x6a, 0x4f, 0xf9, 0x90, 0x50, 0xff, 0x46, 0x25,
    0xf7, 0x96, 0x50, 0xff, 0xff, 0xff, 0xdf, 0x24,
    0x50, 0xff, 0x6a, 0xc3, 0xdf, 0xe, 0x50, 0xff,
    0x44, 0x24, 0xf5, 0xa2,

    /* U+0053 "S" */
    0x7, 0x9f, 0xf0, 0xe3, 0x80, 0x0, 0x5d, 0xff,
    0x88, 0x6b, 0x6a, 0x0, 0x29, 0xf3, 0xd6, 0x78,
    0x18, 0x0, 0x0, 0x18, 0x78, 0xe1, 0xec, 0x14,
    0x33, 0xb0, 0x63, 0xad, 0xff, 0x2d, 0x31, 0xba,
    0xf1, 0xdd, 0x7c, 0x0,

    /* U+0054 "T" */
    0xc4, 0xff, 0xff, 0xff, 0xff, 0x5c, 0x34, 0x44,
    0xff, 0xb0, 0x44, 0x18, 0x0, 0x0, 0xff, 0x94,
    0x0, 0x0, 0x0, 0x0, 0xff, 0x94, 0x0, 0x0,
    0x0, 0x0, 0xff, 0x94, 0x0, 0x0, 0x0, 0x0,
    0xff, 0x94, 0x0, 0x0,

    /* U+0055 "U" */
    0x58, 0xff, 0x38, 0x0, 0x94, 0xf0, 0x58, 0xff,
    0x38, 0x0, 0x94, 0xf0, 0x58, 0xff, 0x38, 0x0,
    0x94, 0xf0, 0x4b, 0xff, 0x41, 0x0, 0x9d, 0xe3,
    0x1c, 0xfa, 0xb7, 0x64, 0xec, 0xb0, 0x0, 0x60,
    0xdf, 0xf5, 0xc0, 0x23,

    /* U+0056 "V" */
    0x2, 0xe7, 0xbb, 0x0, 0x7, 0xf6, 0x96, 0x0,
    0x96, 0xf7, 0x9, 0x43, 0xff, 0x42, 0x0, 0x42,
    0xff, 0x47, 0x88, 0xea, 0x3, 0x0, 0x3, 0xea,
    0x8a, 0xcd, 0x9a, 0x0, 0x0, 0x0, 0x9a, 0xdc,
    0xfe, 0x46, 0x0, 0x0, 0x0, 0x46, 0xff, 0xed,
    0x4, 0x0,

    /* U+0057 "W" */
    0xca, 0xcb, 0x0, 0xa3, 0xee, 0x2, 0x7c, 0xf9,
    0x5, 0x97, 0xf2, 0x0, 0xe0, 0xff, 0x30, 0xa3,
    0xce, 0x0, 0x64, 0xff, 0x37, 0xf8, 0xcd, 0x70,
    0xca, 0x9e, 0x0, 0x30, 0xff, 0x93, 0xcb, 0x98,
    0xa7, 0xec, 0x6d, 0x0, 0x5, 0xf8, 0xe8, 0x94,
    0x5f, 0xe7, 0xff, 0x3c, 0x0, 0x0, 0xca, 0xff,
    0x5c, 0x25, 0xff, 0xfe, 0xd, 0x0,

    /* U+0058 "X" */
    0x81, 0xff, 0x33, 0x54, 0xff, 0x43, 0x9, 0xe1,
    0xaf, 0xc4, 0xb1, 0x0, 0x0, 0x56, 0xff, 0xfa,
    0x25, 0x0, 0x0, 0x72, 0xfb, 0xfc, 0x2f, 0x0,
    0x16, 0xf0, 0x80, 0xd6, 0xc2, 0x0, 0x9d, 0xf3,
    0x11, 0x59, 0xff, 0x5c,

    /* U+0059 "Y" */
    0x1, 0xd1, 0xcc, 0x0, 0x68, 0xff, 0x32, 0x0,
    0x51, 0xff, 0x34, 0xd0, 0xae, 0x0, 0x0, 0x1,
    0xce, 0xcb, 0xfe, 0x2d, 0x0, 0x0, 0x0, 0x4d,
    0xff, 0xa9, 0x0, 0x0, 0x0, 0x0, 0x1c, 0xff,
    0x78, 0x0, 0x0, 0x0, 0x0, 0x1c, 0xff, 0x78,
    0x0, 0x0,

    /* U+005A "Z" */
    0x6c, 0xff, 0xff, 0xff, 0xff, 0x13, 0x1c, 0x44,
    0x60, 0xfc, 0xa5, 0x0, 0x0, 0x3, 0xc3, 0xd9,
    0xc, 0x0, 0x0, 0x85, 0xf8, 0x2f, 0x0, 0x0,
    0x44, 0xfd, 0xa7, 0x48, 0x48, 0x7, 0xaf, 0xff,
    0xff, 0xff, 0xff, 0x1c,

    /* U+005B "[" */
    0x34, 0xf7, 0x9c, 0x34, 0xd8, 0x0, 0x34, 0xd8,
    0x0, 0x34, 0xd8, 0x0, 0x34, 0xd8, 0x0, 0x34,
    0xd8, 0x0, 0x34, 0xd8, 0x0, 0x34, 0xd8, 0x0,
    0x2f, 0xe4, 0x9f,

    /* U+005C "\\" */
    0x9f, 0x4c, 0x0, 0x6d, 0x7e, 0x0, 0x3b, 0xb0,
    0x0, 0xb, 0xdf, 0x0, 0x0, 0xd6, 0x13, 0x0,
    0xa4, 0x45, 0x0, 0x72, 0x77, 0x0, 0x40, 0xa9,
    0x0, 0xe, 0xd9,

    /* U+005D "]" */
    0x72, 0xed, 0x68, 0x0, 0xa4, 0x68, 0x0, 0xa4,
    0x68, 0x0, 0xa4, 0x68, 0x0, 0xa4, 0x68, 0x0,
    0xa4, 0x68, 0x0, 0xa4, 0x68, 0x0, 0xa4, 0x68,
    0x75, 0xdf, 0x5e,

    /* U+005E "^" */
    0x0, 0x51, 0xff, 0x31, 0x0, 0x0, 0xab, 0xe0,
    0x8b, 0x0, 0xd, 0xf5, 0x51, 0xe3, 0x1, 0x5f,
    0xc6, 0x2, 0xe7, 0x3f,

    /* U+005F "_" */
    0xc3, 0xdc, 0xdc, 0xdc, 0x67,

    /* U+0060 "`" */
    0x0, 0x7, 0x0, 0x0, 0x10, 0xd7, 0x40, 0x0,
    0x0, 0x88, 0xe2, 0x4, 0x0, 0x0, 0x24, 0x0,

    /* U+0061 "a" */
    0x2b, 0xc0, 0xf3, 0xd3, 0x29, 0x10, 0x76, 0x5b,
    0xf8, 0x9f, 0x27, 0xc8, 0xdc, 0xf4, 0xba, 0x92,
    0xf3, 0x43, 0xeb, 0xbc, 0x41, 0xeb, 0xd3, 0xc9,
    0xbc,

    /* U+0062 "b" */
    0x6c, 0xff, 0x24, 0x0, 0x0, 0x0, 0x6c, 0xff,
    0x23, 0x0, 0x0, 0x0, 0x6c, 0xff, 0xc4, 0xf1,
    0x90, 0x0, 0x6c, 0xff, 0x78, 0x9c, 0xff, 0x32,
    0x6c, 0xff, 0x24, 0x46, 0xff, 0x54, 0x6c, 0xff,
    0x71, 0xa6, 0xfe, 0x28, 0x6c, 0xe8, 0xb8, 0xf1,
    0x76, 0x0,

    /* U+0063 "c" */
    0x4, 0x92, 0xf0, 0xe1, 0x27, 0x75, 0xff, 0x77,
    0x57, 0x0, 0xa8, 0xf5, 0x0, 0x0, 0x0, 0x7c,
    0xff, 0x72, 0x5f, 0x8, 0x5, 0x9c, 0xf5, 0xde,
    0x31,

    /* U+0064 "d" */
    0x0, 0x0, 0x0, 0x74, 0xff, 0x20, 0x0, 0x0,
    0x0, 0x73, 0xff, 0x20, 0xa, 0xb2, 0xf3, 0xd4,
    0xff, 0x20, 0x78, 0xff, 0x6b, 0xa9, 0xff, 0x20,
    0xa0, 0xfa, 0x0, 0x74, 0xff, 0x20, 0x7b, 0xff,
    0x6b, 0xb0, 0xff, 0x20, 0x11, 0xbd, 0xf1, 0xb3,
    0xff, 0x20,

    /* U+0065 "e" */
    0x6, 0x9e, 0xf5, 0xd5, 0x21, 0x78, 0xf8, 0x4a,
    0xb6, 0xaa, 0xa8, 0xfe, 0xf8, 0xf9, 0xcc, 0x7a,
    0xfa, 0x5b, 0x3f, 0x1e, 0x4, 0x95, 0xf4, 0xe5,
    0x55,

    /* U+0066 "f" */
    0x0, 0x86, 0xf6, 0xa4, 0xf, 0xfe, 0xa1, 0x21,
    0xc5, 0xff, 0xff, 0x58, 0x42, 0xff, 0x8d, 0x11,
    0x20, 0xff, 0x70, 0x0, 0x20, 0xff, 0x70, 0x0,
    0x20, 0xff, 0x70, 0x0,

    /* U+0067 "g" */
    0x26, 0xc4, 0xfa, 0xff, 0xff, 0x28, 0x84, 0xfa,
    0x51, 0xf5, 0x96, 0x9, 0x25, 0xf8, 0xe9, 0xc8,
    0x2b, 0x0, 0x63, 0xe1, 0x2f, 0x22, 0x4, 0x0,
    0x34, 0xfd, 0xfe, 0xff, 0xe3, 0x12, 0x9d, 0xb4,
    0x3, 0x74, 0xff, 0x23, 0x4d, 0xde, 0xf5, 0xda,
    0x63, 0x0,

    /* U+0068 "h" */
    0x6c, 0xff, 0x24, 0x0, 0x0, 0x0, 0x6c, 0xff,
    0x23, 0x0, 0x0, 0x0, 0x6c, 0xff, 0xaf, 0xf1,
    0xa1, 0x0, 0x6c, 0xff, 0x8b, 0xb1, 0xff, 0x18,
    0x6c, 0xff, 0x24, 0x68, 0xff, 0x28, 0x6c, 0xff,
    0x24, 0x68, 0xff, 0x28, 0x6c, 0xff, 0x24, 0x68,
    0xff, 0x28,

    /* U+0069 "i" */
    0x58, 0xe8, 0x1d, 0x24, 0x7c, 0x7, 0x6c, 0xff,
    0x24, 0x6c, 0xff, 0x24, 0x6c, 0xff, 0x24, 0x6c,
    0xff, 0x24, 0x6c, 0xff, 0x24,

    /* U+006A "j" */
    0x0, 0x40, 0xe9, 0x36, 0x0, 0x18, 0x7e, 0x13,
    0x0, 0x50, 0xff, 0x44, 0x0, 0x50, 0xff, 0x44,
    0x0, 0x50, 0xff, 0x44, 0x0, 0x50, 0xff, 0x44,
    0x0, 0x50, 0xff, 0x43, 0x10, 0x8c, 0xff, 0x2a,
    0x5b, 0xfa, 0xa1, 0x0,

    /* U+006B "k" */
    0x6c, 0xff, 0x1c, 0x0, 0x0, 0x0, 0x6c, 0xff,
    0x1c, 0x0, 0x0, 0x0, 0x6c, 0xff, 0x1f, 0xbb,
    0xdb, 0x13, 0x6c, 0xff, 0xa7, 0xed, 0x25, 0x0,
    0x6c, 0xff, 0xff, 0xd8, 0x7, 0x0, 0x6c, 0xff,
    0x7b, 0xf6, 0x84, 0x0, 0x6c, 0xff, 0x1c, 0x81,
    0xfa, 0x2e,

    /* U+006C "l" */
    0x6c, 0xff, 0x24, 0x6c, 0xff, 0x24, 0x6c, 0xff,
    0x24, 0x6c, 0xff, 0x24, 0x6c, 0xff, 0x24, 0x63,
    0xff, 0x48, 0x1d, 0xdb, 0xaa,

    /* U+006D "m" */
    0x6c, 0xf1, 0xaf, 0xf1, 0xa5, 0xb2, 0xf2, 0x80,
    0x0, 0x6c, 0xff, 0x71, 0xad, 0xff, 0x66, 0xba,
    0xf6, 0x1, 0x6c, 0xff, 0x24, 0x7c, 0xff, 0x14,
    0x8c, 0xff, 0x8, 0x6c, 0xff, 0x24, 0x7c, 0xff,
    0x14, 0x8c, 0xff, 0x8, 0x6c, 0xff, 0x24, 0x7c,
    0xff, 0x14, 0x8c, 0xff, 0x8,

    /* U+006E "n" */
    0x6c, 0xf1, 0xb0, 0xf3, 0xa1, 0x0, 0x6c, 0xff,
    0x71, 0x9f, 0xff, 0x18, 0x6c, 0xff, 0x24, 0x68,
    0xff, 0x28, 0x6c, 0xff, 0x24, 0x68, 0xff, 0x28,
    0x6c, 0xff, 0x24, 0x68, 0xff, 0x28,

    /* U+006F "o" */
    0x6, 0x9a, 0xf4, 0xdb, 0x46, 0x0, 0x78, 0xff,
    0x68, 0xbb, 0xf2, 0xd, 0xa8, 0xf8, 0x1, 0x6e,
    0xff, 0x30, 0x7a, 0xff, 0x63, 0xb9, 0xf3, 0xe,
    0x4, 0x95, 0xf5, 0xdd, 0x3e, 0x0,

    /* U+0070 "p" */
    0x6c, 0xf4, 0xc3, 0xf2, 0x90, 0x0, 0x6c, 0xff,
    0x5e, 0x87, 0xff, 0x32, 0x6c, 0xff, 0x24, 0x46,
    0xff, 0x54, 0x6c, 0xff, 0x72, 0xa8, 0xfe, 0x28,
    0x6c, 0xff, 0xcb, 0xf2, 0x76, 0x0, 0x6c, 0xff,
    0x22, 0x0, 0x0, 0x0, 0x6c, 0xff, 0x24, 0x0,
    0x0, 0x0,

    /* U+0071 "q" */
    0xa, 0xb2, 0xf3, 0xb0, 0xff, 0x20, 0x78, 0xff,
    0x6b, 0xa9, 0xff, 0x20, 0xa0, 0xfa, 0x0, 0x74,
    0xff, 0x20, 0x7b, 0xff, 0x6b, 0xb0, 0xff, 0x20,
    0x11, 0xbd, 0xf2, 0xd0, 0xff, 0x20, 0x0, 0x0,
    0x0, 0x73, 0xff, 0x20, 0x0, 0x0, 0x0, 0x74,
    0xff, 0x20,

    /* U+0072 "r" */
    0x0, 0x0, 0x0, 0x0, 0x0, 0x6c, 0xea, 0x98,
    0xe6, 0x0, 0x6c, 0xff, 0xa1, 0x34, 0x0, 0x6c,
    0xff, 0x21, 0x0, 0x0, 0x6c, 0xff, 0x20, 0x0,
    0x0, 0x6c, 0xff, 0x20, 0x0, 0x0,

    /* U+0073 "s" */
    0x27, 0xd1, 0xf4, 0xb7, 0x6, 0x7f, 0xfa, 0x4a,
    0x49, 0x0, 0x1f, 0xc5, 0xfd, 0x9c, 0x1, 0x37,
    0x4e, 0x8c, 0xff, 0x1f, 0x66, 0xe2, 0xf3, 0x98,
    0x1,

    /* U+0074 "t" */
    0x0, 0x78, 0x32, 0x0, 0x9, 0xff, 0x64, 0x0,
    0xd7, 0xff, 0xff, 0x90, 0x4f, 0xff, 0x83, 0x1d,
    0x2c, 0xff, 0x64, 0x0, 0x1c, 0xff, 0xa2, 0x20,
    0x0, 0x9d, 0xf7, 0x95,

    /* U+0075 "u" */
    0x78, 0xff, 0x18, 0x7c, 0xff, 0x14, 0x78, 0xff,
    0x18, 0x7c, 0xff, 0x14, 0x78, 0xff, 0x18, 0x7c,
    0xff, 0x14, 0x69, 0xff, 0x7b, 0xc6, 0xff, 0x14,
    0x1a, 0xd9, 0xe5, 0x96, 0xff, 0x14,

    /* U+0076 "v" */
    0xb9, 0xd1, 0x0, 0x6e, 0xfa, 0x10, 0x64, 0xfe,
    0x15, 0xb1, 0xb8, 0x0, 0x13, 0xfb, 0x5b, 0xf1,
    0x65, 0x0, 0x0, 0xb9, 0xca, 0xfd, 0x16, 0x0,
    0x0, 0x63, 0xff, 0xc1, 0x0, 0x0,

    /* U+0077 "w" */
    0xa8, 0xe1, 0x0, 0xd6, 0xbf, 0x0, 0xec, 0x82,
    0x69, 0xff, 0x25, 0xf5, 0xf6, 0x23, 0xff, 0x46,
    0x2a, 0xff, 0x8b, 0xbd, 0xeb, 0x84, 0xfc, 0xd,
    0x0, 0xea, 0xe2, 0x8d, 0xb9, 0xe2, 0xce, 0x0,
    0x0, 0xac, 0xff, 0x57, 0x80, 0xff, 0x92, 0x0,

    /* U+0078 "x" */
    0x7c, 0xfd, 0x2b, 0xcb, 0xbf, 0x0, 0x7, 0xdc,
    0xce, 0xfd, 0x31, 0x0, 0x0, 0x7f, 0xff, 0xba,
    0x0, 0x0, 0x11, 0xeb, 0xc6, 0xfb, 0x2d, 0x0,
    0x94, 0xef, 0xf, 0xd7, 0xc8, 0x2,

    /* U+0079 "y" */
    0xb2, 0xd8, 0x0, 0x70, 0xf7, 0xd, 0x4f, 0xff,
    0x28, 0xb8, 0xad, 0x0, 0x4, 0xe7, 0x79, 0xf5,
    0x57, 0x0, 0x0, 0x88, 0xe6, 0xf5, 0xb, 0x0,
    0x0, 0x24, 0xff, 0xa9, 0x0, 0x0, 0xd, 0x60,
    0xff, 0x45, 0x0, 0x0, 0x5a, 0xf4, 0x8a, 0x0,
    0x0, 0x0,

    /* U+007A "z" */
    0x6c, 0xff, 0xff, 0xff, 0x55, 0x15, 0x38, 0xe3,
    0xd8, 0x9, 0x0, 0x7e, 0xfb, 0x36, 0x0, 0x32,
    0xfa, 0xa7, 0x30, 0x13, 0xa1, 0xff, 0xff, 0xff,
    0x68,

    /* U+007B "{" */
    0x0, 0xbf, 0xad, 0x3, 0xff, 0x23, 0x0, 0xf8,
    0x24, 0x10, 0xfa, 0x1f, 0xb4, 0xc8, 0x0, 0xf,
    0xfa, 0x1f, 0x0, 0xf9, 0x24, 0x3, 0xff, 0x26,
    0x0, 0xaa, 0xaa,

    /* U+007C "|" */
    0x2e, 0x95, 0x38, 0xb4, 0x38, 0xb4, 0x38, 0xb4,
    0x38, 0xb4, 0x38, 0xb4, 0x38, 0xb4, 0x38, 0xb4,
    0x38, 0xb4, 0x38, 0xb4,

    /* U+007D "}" */
    0x7a, 0xe1, 0xe, 0x0, 0xf0, 0x32, 0x0, 0xf1,
    0x2b, 0x0, 0xeb, 0x43, 0x0, 0x94, 0xe6, 0x0,
    0xec, 0x43, 0x0, 0xf0, 0x2c, 0x1, 0xf2, 0x32,
    0x7b, 0xca, 0xb,

    /* U+007E "~" */
    0x44, 0xd6, 0x73, 0x39, 0x27, 0x60, 0x52, 0xc0,
    0xf6, 0x48, 0x0, 0x0, 0x1, 0xa, 0x0,

    /* U+5BB6 "家" */
    0x13, 0x40, 0x40, 0x71, 0xcc, 0x42, 0x40, 0x3b,
    0x0, 0x4c, 0xf7, 0xcc, 0xcc, 0xcc, 0xcc, 0xd9,
    0xec, 0x0, 0x33, 0x91, 0xf0, 0xf0, 0xf0, 0xf0,
    0xb8, 0x9e, 0x0, 0xe, 0x63, 0xbf, 0xfd, 0xa4,
    0x2d, 0xb5, 0x22, 0x0, 0x6, 0xa9, 0xb9, 0xdb,
    0xf8, 0xef, 0xc6, 0x9, 0x0, 0x23, 0xf1, 0xb7,
    0xb1, 0xfc, 0xb6, 0xf1, 0x14, 0x0, 0x27, 0xaf,
    0xf0, 0xbe, 0xe6, 0x6a, 0xb9, 0xda, 0x10, 0x10,
    0x85, 0x26, 0xcc, 0xd9, 0x1c, 0xf, 0x61, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0,

    /* U+5E84 "庄" */
    0x0, 0x0, 0x0, 0x0, 0x2, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x59, 0xc8, 0x0, 0x0, 0x0,
    0x29, 0xf4, 0xf4, 0xf7, 0xfa, 0xf4, 0xf4, 0x8d,
    0x2c, 0xf8, 0x1c, 0x1c, 0xd0, 0x53, 0x1c, 0x10,
    0x30, 0xf4, 0x1a, 0x2c, 0xef, 0x67, 0x2c, 0x6,
    0x3f, 0xe8, 0x92, 0xf0, 0xfe, 0xf4, 0xf0, 0x25,
    0x61, 0xc9, 0x0, 0x0, 0xec, 0x48, 0x0, 0x0,
    0xab, 0xa8, 0xcc, 0xcc, 0xfb, 0xda, 0xcc, 0x72,
    0x32, 0x31, 0x50, 0x50, 0x50, 0x50, 0x50, 0x2d,

    /* U+77F3 "石" */
    0x10, 0x30, 0x30, 0x30, 0x30, 0x30, 0x30, 0x26,
    0x53, 0xf4, 0xf8, 0xff, 0xf4, 0xf4, 0xf4, 0xc2,
    0x0, 0x0, 0xa3, 0xa7, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x4e, 0xff, 0xe1, 0xd4, 0xd4, 0xd4, 0x4c,
    0x55, 0xf5, 0xff, 0x6d, 0x48, 0x48, 0xeb, 0x5c,
    0x26, 0x57, 0xf8, 0x34, 0x0, 0x0, 0xe4, 0x5c,
    0x0, 0x0, 0xf8, 0xf6, 0xf4, 0xf4, 0xfe, 0x5c,
    0x0, 0x0, 0xf8, 0x53, 0x28, 0x28, 0xe8, 0x5c,
    0x0, 0x0, 0xb, 0x2, 0x0, 0x0, 0x0, 0x0
};


/*---------------------
 *  GLYPH DESCRIPTION
 *--------------------*/

static const lv_font_fmt_txt_glyph_dsc_t glyph_dsc[] = {
    {.bitmap_index = 0, .adv_w = 0, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0} /* id = 0 reserved */,
    {.bitmap_index = 0, .adv_w = 29, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 0, .adv_w = 51, .box_w = 3, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 18, .adv_w = 81, .box_w = 5, .box_h = 4, .ofs_x = 0, .ofs_y = 3},
    {.bitmap_index = 38, .adv_w = 78, .box_w = 5, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 68, .adv_w = 78, .box_w = 5, .box_h = 9, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 113, .adv_w = 126, .box_w = 8, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 161, .adv_w = 99, .box_w = 6, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 197, .adv_w = 45, .box_w = 3, .box_h = 4, .ofs_x = 0, .ofs_y = 3},
    {.bitmap_index = 209, .adv_w = 51, .box_w = 3, .box_h = 10, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 239, .adv_w = 51, .box_w = 3, .box_h = 10, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 269, .adv_w = 68, .box_w = 4, .box_h = 4, .ofs_x = 0, .ofs_y = 3},
    {.bitmap_index = 285, .adv_w = 78, .box_w = 5, .box_h = 5, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 310, .adv_w = 45, .box_w = 3, .box_h = 5, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 325, .adv_w = 49, .box_w = 3, .box_h = 2, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 331, .adv_w = 45, .box_w = 3, .box_h = 2, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 337, .adv_w = 49, .box_w = 3, .box_h = 9, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 364, .adv_w = 85, .box_w = 5, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 394, .adv_w = 68, .box_w = 4, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 418, .adv_w = 85, .box_w = 5, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 448, .adv_w = 85, .box_w = 5, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 478, .adv_w = 85, .box_w = 6, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 514, .adv_w = 85, .box_w = 5, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 544, .adv_w = 85, .box_w = 5, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 574, .adv_w = 84, .box_w = 5, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 604, .adv_w = 85, .box_w = 5, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 634, .adv_w = 85, .box_w = 5, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 664, .adv_w = 45, .box_w = 3, .box_h = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 679, .adv_w = 45, .box_w = 3, .box_h = 8, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 703, .adv_w = 78, .box_w = 5, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 733, .adv_w = 78, .box_w = 5, .box_h = 4, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 753, .adv_w = 78, .box_w = 5, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 783, .adv_w = 69, .box_w = 4, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 811, .adv_w = 133, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 875, .adv_w = 93, .box_w = 7, .box_h = 6, .ofs_x = -1, .ofs_y = 0},
    {.bitmap_index = 917, .adv_w = 96, .box_w = 6, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 953, .adv_w = 93, .box_w = 6, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 989, .adv_w = 101, .box_w = 6, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1025, .adv_w = 87, .box_w = 5, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1055, .adv_w = 83, .box_w = 5, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1085, .adv_w = 102, .box_w = 6, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1121, .adv_w = 107, .box_w = 6, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1157, .adv_w = 47, .box_w = 3, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1175, .adv_w = 81, .box_w = 5, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1205, .adv_w = 99, .box_w = 7, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1247, .adv_w = 82, .box_w = 5, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1277, .adv_w = 121, .box_w = 7, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1319, .adv_w = 105, .box_w = 6, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1355, .adv_w = 109, .box_w = 7, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1397, .adv_w = 95, .box_w = 6, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1433, .adv_w = 110, .box_w = 7, .box_h = 8, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 1489, .adv_w = 98, .box_w = 6, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1525, .adv_w = 89, .box_w = 6, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1561, .adv_w = 89, .box_w = 6, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1597, .adv_w = 105, .box_w = 6, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1633, .adv_w = 91, .box_w = 7, .box_h = 6, .ofs_x = -1, .ofs_y = 0},
    {.bitmap_index = 1675, .adv_w = 131, .box_w = 9, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1729, .adv_w = 92, .box_w = 6, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1765, .adv_w = 86, .box_w = 7, .box_h = 6, .ofs_x = -1, .ofs_y = 0},
    {.bitmap_index = 1807, .adv_w = 86, .box_w = 6, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1843, .adv_w = 51, .box_w = 3, .box_h = 9, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 1870, .adv_w = 49, .box_w = 3, .box_h = 9, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 1897, .adv_w = 51, .box_w = 3, .box_h = 9, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 1924, .adv_w = 78, .box_w = 5, .box_h = 4, .ofs_x = 0, .ofs_y = 3},
    {.bitmap_index = 1944, .adv_w = 73, .box_w = 5, .box_h = 1, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 1949, .adv_w = 82, .box_w = 4, .box_h = 4, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 1965, .adv_w = 84, .box_w = 5, .box_h = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1990, .adv_w = 91, .box_w = 6, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2032, .adv_w = 75, .box_w = 5, .box_h = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2057, .adv_w = 91, .box_w = 6, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2099, .adv_w = 83, .box_w = 5, .box_h = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2124, .adv_w = 56, .box_w = 4, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2152, .adv_w = 86, .box_w = 6, .box_h = 7, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 2194, .adv_w = 91, .box_w = 6, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2236, .adv_w = 44, .box_w = 3, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2257, .adv_w = 45, .box_w = 4, .box_h = 9, .ofs_x = -1, .ofs_y = -2},
    {.bitmap_index = 2293, .adv_w = 88, .box_w = 6, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2335, .adv_w = 46, .box_w = 3, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2356, .adv_w = 137, .box_w = 9, .box_h = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2401, .adv_w = 91, .box_w = 6, .box_h = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2431, .adv_w = 89, .box_w = 6, .box_h = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2461, .adv_w = 91, .box_w = 6, .box_h = 7, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 2503, .adv_w = 91, .box_w = 6, .box_h = 7, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 2545, .adv_w = 64, .box_w = 5, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2575, .adv_w = 71, .box_w = 5, .box_h = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2600, .adv_w = 62, .box_w = 4, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2628, .adv_w = 90, .box_w = 6, .box_h = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2658, .adv_w = 85, .box_w = 6, .box_h = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2688, .adv_w = 126, .box_w = 8, .box_h = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2728, .adv_w = 84, .box_w = 6, .box_h = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2758, .adv_w = 85, .box_w = 6, .box_h = 7, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 2800, .adv_w = 74, .box_w = 5, .box_h = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2825, .adv_w = 51, .box_w = 3, .box_h = 9, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 2852, .adv_w = 40, .box_w = 2, .box_h = 10, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 2872, .adv_w = 51, .box_w = 3, .box_h = 9, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 2899, .adv_w = 78, .box_w = 5, .box_h = 3, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 2914, .adv_w = 128, .box_w = 9, .box_h = 9, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 2995, .adv_w = 128, .box_w = 8, .box_h = 9, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 3067, .adv_w = 128, .box_w = 8, .box_h = 9, .ofs_x = 0, .ofs_y = -2}
};

/*---------------------
 *  CHARACTER MAPPING
 *--------------------*/

static const uint16_t unicode_list_1[] = {
    0x0, 0x2ce, 0x1c3d
};

/*Collect the unicode lists and glyph_id offsets*/
static const lv_font_fmt_txt_cmap_t cmaps[] =
{
    {
        .range_start = 32, .range_length = 95, .glyph_id_start = 1,
        .unicode_list = NULL, .glyph_id_ofs_list = NULL, .list_length = 0, .type = LV_FONT_FMT_TXT_CMAP_FORMAT0_TINY
    },
    {
        .range_start = 23478, .range_length = 7230, .glyph_id_start = 96,
        .unicode_list = unicode_list_1, .glyph_id_ofs_list = NULL, .list_length = 3, .type = LV_FONT_FMT_TXT_CMAP_SPARSE_TINY
    }
};



/*--------------------
 *  ALL CUSTOM DATA
 *--------------------*/

#if LV_VERSION_CHECK(8, 0, 0)
/*Store all the custom data of the font*/
static  lv_font_fmt_txt_glyph_cache_t cache;
static const lv_font_fmt_txt_dsc_t font_dsc = {
#else
static lv_font_fmt_txt_dsc_t font_dsc = {
#endif
    .glyph_bitmap = glyph_bitmap,
    .glyph_dsc = glyph_dsc,
    .cmaps = cmaps,
    .kern_dsc = NULL,
    .kern_scale = 0,
    .cmap_num = 2,
    .bpp = 8,
    .kern_classes = 0,
    .bitmap_format = 0,
#if LV_VERSION_CHECK(8, 0, 0)
    .cache = &cache
#endif
};


/*-----------------
 *  PUBLIC FONT
 *----------------*/

/*Initialize a public general font descriptor*/
#if LV_VERSION_CHECK(8, 0, 0)
const lv_font_t ui_font_jiangcheng8 = {
#else
lv_font_t ui_font_jiangcheng8 = {
#endif
    .get_glyph_dsc = lv_font_get_glyph_dsc_fmt_txt,    /*Function pointer to get glyph's data*/
    .get_glyph_bitmap = lv_font_get_bitmap_fmt_txt,    /*Function pointer to get glyph's bitmap*/
    .line_height = 12,          /*The maximum line height required by the font*/
    .base_line = 3,             /*Baseline measured from the bottom of the line*/
#if !(LVGL_VERSION_MAJOR == 6 && LVGL_VERSION_MINOR == 0)
    .subpx = LV_FONT_SUBPX_NONE,
#endif
#if LV_VERSION_CHECK(7, 4, 0) || LVGL_VERSION_MAJOR >= 8
    .underline_position = -1,
    .underline_thickness = 0,
#endif
    .dsc = &font_dsc           /*The custom font data. Will be accessed by `get_glyph_bitmap/dsc` */
};



#endif /*#if UI_FONT_JIANGCHENG8*/

