//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
    /*Icon*/    /*Command*/     /*Update Interval*/ /*Update Signal*/
    {"",    "sb-cpu",           5,  6},
    {"",    "sb-backlight",     0,  5},
    {"",    "sb-volume",        0,  3},
    {"",    "sb-battery",       30, 2},
    {"",    "sb-clock",         1,  1},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = "  ";
static unsigned int delimLen = 2;
