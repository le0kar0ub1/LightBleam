#include "target/aarch64/raspi/raspi3/drivers/fb.h"
#include "target/aarch64/raspi/raspi3/drivers/colors-256.h"

struct colors256Xterm_t colors256Xterm[] =
{
    {"Black", 0, 0x000000},
    {"Maroon", 1, 0x800000},
    {"Green", 2, 0x008000},
    {"Olive", 3, 0x808000},
    {"Navy", 4, 0x000080},
    {"Purple", 5, 0x800080},
    {"Teal", 6, 0x008080},
    {"Silver", 7, 0xc0c0c0},
    {"Grey", 8, 0x808080},
    {"Red", 9, 0xff0000},
    {"Lime", 10, 0x00ff00},
    {"Yellow", 11, 0xffff00},
    {"Blue", 12, 0x0000ff},
    {"Fuchsia", 13, 0xff00ff},
    {"Aqua", 14, 0x00ffff},
    {"White", 15, 0xffffff},
    {"Grey0", 16, 0x000000},
    {"NavyBlue", 17, 0x00005f},
    {"DarkBlue", 18, 0x000087},
    {"Blue3", 19, 0x0000af},
    {"Blue3", 20, 0x0000d7},
    {"Blue1", 21, 0x0000ff},
    {"DarkGreen", 22, 0x005f00},
    {"DeepSkyBlue4", 23, 0x005f5f},
    {"DeepSkyBlue4", 24, 0x005f87},
    {"DeepSkyBlue4", 25, 0x005faf},
    {"DodgerBlue3", 26, 0x005fd7},
    {"DodgerBlue2", 27, 0x005fff},
    {"Green4", 28, 0x008700},
    {"SpringGreen4", 29, 0x00875f},
    {"Turquoise4", 30, 0x008787},
    {"DeepSkyBlue3", 31, 0x0087af},
    {"DeepSkyBlue3", 32, 0x0087d7},
    {"DodgerBlue1", 33, 0x0087ff},
    {"Green3", 34, 0x00af00},
    {"SpringGreen3", 35, 0x00af5f},
    {"DarkCyan", 36, 0x00af87},
    {"LightSeaGreen", 37, 0x00afaf},
    {"DeepSkyBlue2", 38, 0x00afd7},
    {"DeepSkyBlue1", 39, 0x00afff},
    {"Green3", 40, 0x00d700},
    {"SpringGreen3", 41, 0x00d75f},
    {"SpringGreen2", 42, 0x00d787},
    {"Cyan3", 43, 0x00d7af},
    {"DarkTurquoise", 44, 0x00d7d7},
    {"Turquoise2", 45, 0x00d7ff},
    {"Green1", 46, 0x00ff00},
    {"SpringGreen2", 47, 0x00ff5f},
    {"SpringGreen1", 48, 0x00ff87},
    {"MediumSpringGreen", 49, 0x00ffaf},
    {"Cyan2", 50, 0x00ffd7},
    {"Cyan1", 51, 0x00ffff},
    {"DarkRed", 52, 0x5f0000},
    {"DeepPink4", 53, 0x5f005f},
    {"Purple4", 54, 0x5f0087},
    {"Purple4", 55, 0x5f00af},
    {"Purple3", 56, 0x5f00d7},
    {"BlueViolet", 57, 0x5f00ff},
    {"Orange4", 58, 0x5f5f00},
    {"Grey37", 59, 0x5f5f5f},
    {"MediumPurple4", 60, 0x5f5f87},
    {"SlateBlue3", 61, 0x5f5faf},
    {"SlateBlue3", 62, 0x5f5fd7},
    {"RoyalBlue1", 63, 0x5f5fff},
    {"Chartreuse4", 64, 0x5f8700},
    {"DarkSeaGreen4", 65, 0x5f875f},
    {"PaleTurquoise4", 66, 0x5f8787},
    {"SteelBlue", 67, 0x5f87af},
    {"SteelBlue3", 68, 0x5f87d7},
    {"CornflowerBlue", 69, 0x5f87ff},
    {"Chartreuse3", 70, 0x5faf00},
    {"DarkSeaGreen4", 71, 0x5faf5f},
    {"CadetBlue", 72, 0x5faf87},
    {"CadetBlue", 73, 0x5fafaf},
    {"SkyBlue3", 74, 0x5fafd7},
    {"SteelBlue1", 75, 0x5fafff},
    {"Chartreuse3", 76, 0x5fd700},
    {"PaleGreen3", 77, 0x5fd75f},
    {"SeaGreen3", 78, 0x5fd787},
    {"Aquamarine3", 79, 0x5fd7af},
    {"MediumTurquoise", 80, 0x5fd7d7},
    {"SteelBlue1", 81, 0x5fd7ff},
    {"Chartreuse2", 82, 0x5fff00},
    {"SeaGreen2", 83, 0x5fff5f},
    {"SeaGreen1", 84, 0x5fff87},
    {"SeaGreen1", 85, 0x5fffaf},
    {"Aquamarine1", 86, 0x5fffd7},
    {"DarkSlateGray2", 87, 0x5fffff},
    {"DarkRed", 88, 0x870000},
    {"DeepPink4", 89, 0x87005f},
    {"DarkMagenta", 90, 0x870087},
    {"DarkMagenta", 91, 0x8700af},
    {"DarkViolet", 92, 0x8700d7},
    {"Purple", 93, 0x8700ff},
    {"Orange4", 94, 0x875f00},
    {"LightPink4", 95, 0x875f5f},
    {"Plum4", 96, 0x875f87},
    {"MediumPurple3", 97, 0x875faf},
    {"MediumPurple3", 98, 0x875fd7},
    {"SlateBlue1", 99, 0x875fff},
    {"Yellow4", 100, 0x878700},
    {"Wheat4", 101, 0x87875f},
    {"Grey53", 102, 0x878787},
    {"LightSlateGrey", 103, 0x8787af},
    {"MediumPurple", 104, 0x8787d7},
    {"LightSlateBlue", 105, 0x8787ff},
    {"Yellow4", 106, 0x87af00},
    {"DarkOliveGreen3", 107, 0x87af5f},
    {"DarkSeaGreen", 108, 0x87af87},
    {"LightSkyBlue3", 109, 0x87afaf},
    {"LightSkyBlue3", 110, 0x87afd7},
    {"SkyBlue2", 111, 0x87afff},
    {"Chartreuse2", 112, 0x87d700},
    {"DarkOliveGreen3", 113, 0x87d75f},
    {"PaleGreen3", 114, 0x87d787},
    {"DarkSeaGreen3", 115, 0x87d7af},
    {"DarkSlateGray3", 116, 0x87d7d7},
    {"SkyBlue1", 117, 0x87d7ff},
    {"Chartreuse1", 118, 0x87ff00},
    {"LightGreen", 119, 0x87ff5f},
    {"LightGreen", 120, 0x87ff87},
    {"PaleGreen1", 121, 0x87ffaf},
    {"Aquamarine1", 122, 0x87ffd7},
    {"DarkSlateGray1", 123, 0x87ffff},
    {"Red3", 124, 0xaf0000},
    {"DeepPink4", 125, 0xaf005f},
    {"MediumVioletRed", 126, 0xaf0087},
    {"Magenta3", 127, 0xaf00af},
    {"DarkViolet", 128, 0xaf00d7},
    {"Purple", 129, 0xaf00ff},
    {"DarkOrange3", 130, 0xaf5f00},
    {"IndianRed", 131, 0xaf5f5f},
    {"HotPink3", 132, 0xaf5f87},
    {"MediumOrchid3", 133, 0xaf5faf},
    {"MediumOrchid", 134, 0xaf5fd7},
    {"MediumPurple2", 135, 0xaf5fff},
    {"DarkGoldenrod", 136, 0xaf8700},
    {"LightSalmon3", 137, 0xaf875f},
    {"RosyBrown", 138, 0xaf8787},
    {"Grey63", 139, 0xaf87af},
    {"MediumPurple2", 140, 0xaf87d7},
    {"MediumPurple1", 141, 0xaf87ff},
    {"Gold3", 142, 0xafaf00},
    {"DarkKhaki", 143, 0xafaf5f},
    {"NavajoWhite3", 144, 0xafaf87},
    {"Grey69", 145, 0xafafaf},
    {"LightSteelBlue3", 146, 0xafafd7},
    {"LightSteelBlue", 147, 0xafafff},
    {"Yellow3", 148, 0xafd700},
    {"DarkOliveGreen3", 149, 0xafd75f},
    {"DarkSeaGreen3", 150, 0xafd787},
    {"DarkSeaGreen2", 151, 0xafd7af},
    {"LightCyan3", 152, 0xafd7d7},
    {"LightSkyBlue1", 153, 0xafd7ff},
    {"GreenYellow", 154, 0xafff00},
    {"DarkOliveGreen2", 155, 0xafff5f},
    {"PaleGreen1", 156, 0xafff87},
    {"DarkSeaGreen2", 157, 0xafffaf},
    {"DarkSeaGreen1", 158, 0xafffd7},
    {"PaleTurquoise1", 159, 0xafffff},
    {"Red3", 160, 0xd70000},
    {"DeepPink3", 161, 0xd7005f},
    {"DeepPink3", 162, 0xd70087},
    {"Magenta3", 163, 0xd700af},
    {"Magenta3", 164, 0xd700d7},
    {"Magenta2", 165, 0xd700ff},
    {"DarkOrange3", 166, 0xd75f00},
    {"IndianRed", 167, 0xd75f5f},
    {"HotPink3", 168, 0xd75f87},
    {"HotPink2", 169, 0xd75faf},
    {"Orchid", 170, 0xd75fd7},
    {"MediumOrchid1", 171, 0xd75fff},
    {"Orange3", 172, 0xd78700},
    {"LightSalmon3", 173, 0xd7875f},
    {"LightPink3", 174, 0xd78787},
    {"Pink3", 175, 0xd787af},
    {"Plum3", 176, 0xd787d7},
    {"Violet", 177, 0xd787ff},
    {"Gold3", 178, 0xd7af00},
    {"LightGoldenrod3", 179, 0xd7af5f},
    {"Tan", 180, 0xd7af87},
    {"MistyRose3", 181, 0xd7afaf},
    {"Thistle3", 182, 0xd7afd7},
    {"Plum2", 183, 0xd7afff},
    {"Yellow3", 184, 0xd7d700},
    {"Khaki3", 185, 0xd7d75f},
    {"LightGoldenrod2", 186, 0xd7d787},
    {"LightYellow3", 187, 0xd7d7af},
    {"Grey84", 188, 0xd7d7d7},
    {"LightSteelBlue1", 189, 0xd7d7ff},
    {"Yellow2", 190, 0xd7ff00},
    {"DarkOliveGreen1", 191, 0xd7ff5f},
    {"DarkOliveGreen1", 192, 0xd7ff87},
    {"DarkSeaGreen1", 193, 0xd7ffaf},
    {"Honeydew2", 194, 0xd7ffd7},
    {"LightCyan1", 195, 0xd7ffff},
    {"Red1", 196, 0xff0000},
    {"DeepPink2", 197, 0xff005f},
    {"DeepPink1", 198, 0xff0087},
    {"DeepPink1", 199, 0xff00af},
    {"Magenta2", 200, 0xff00d7},
    {"Magenta1", 201, 0xff00ff},
    {"OrangeRed1", 202, 0xff5f00},
    {"IndianRed1", 203, 0xff5f5f},
    {"IndianRed1", 204, 0xff5f87},
    {"HotPink", 205, 0xff5faf},
    {"HotPink", 206, 0xff5fd7},
    {"MediumOrchid1", 207, 0xff5fff},
    {"DarkOrange", 208, 0xff8700},
    {"Salmon1", 209, 0xff875f},
    {"LightCoral", 210, 0xff8787},
    {"PaleVioletRed1", 211, 0xff87af},
    {"Orchid2", 212, 0xff87d7},
    {"Orchid1", 213, 0xff87ff},
    {"Orange1", 214, 0xffaf00},
    {"SandyBrown", 215, 0xffaf5f},
    {"LightSalmon1", 216, 0xffaf87},
    {"LightPink1", 217, 0xffafaf},
    {"Pink1", 218, 0xffafd7},
    {"Plum1", 219, 0xffafff},
    {"Gold1", 220, 0xffd700},
    {"LightGoldenrod2", 221, 0xffd75f},
    {"LightGoldenrod2", 222, 0xffd787},
    {"NavajoWhite1", 223, 0xffd7af},
    {"MistyRose1", 224, 0xffd7d7},
    {"Thistle1", 225, 0xffd7ff},
    {"Yellow1", 226, 0xffff00},
    {"LightGoldenrod1", 227, 0xffff5f},
    {"Khaki1", 228, 0xffff87},
    {"Wheat1", 229, 0xffffaf},
    {"Cornsilk1", 230, 0xffffd7},
    {"Grey100", 231, 0xffffff},
    {"Grey3", 232, 0x080808},
    {"Grey7", 233, 0x121212},
    {"Grey11", 234, 0x1c1c1c},
    {"Grey15", 235, 0x262626},
    {"Grey19", 236, 0x303030},
    {"Grey23", 237, 0x3a3a3a},
    {"Grey27", 238, 0x444444},
    {"Grey30", 239, 0x4e4e4e},
    {"Grey35", 240, 0x585858},
    {"Grey39", 241, 0x626262},
    {"Grey42", 242, 0x6c6c6c},
    {"Grey46", 243, 0x767676},
    {"Grey50", 244, 0x808080},
    {"Grey54", 245, 0x8a8a8a},
    {"Grey58", 246, 0x949494},
    {"Grey62", 247, 0x9e9e9e},
    {"Grey66", 248, 0xa8a8a8},
    {"Grey70", 249, 0xb2b2b2},
    {"Grey74", 250, 0xbcbcbc},
    {"Grey78", 251, 0xc6c6c6},
    {"Grey82", 252, 0xd0d0d0},
    {"Grey85", 253, 0xdadada},
    {"Grey89", 254, 0xe4e4e4},
    {"Grey93", 255, 0xeeeeee},
    {NULL, 0x0, 0x0}
};