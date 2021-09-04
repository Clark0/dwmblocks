//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
    /*Icon*/    /*Command*/     /*Update Interval*/ /*Update Signal*/
    {"",    "sb-nettraf",       1,  7},
    {"",    "sb-internet",      60, 4},
    {"",    "sb-cpu",           15, 6},
    {"",    "sb-backlight",     0,  5},
    {"",    "sb-volume",        0,  3},
    {"",    "sb-battery",       60, 2},
    {"",    "sb-clock",         60, 1},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = " ";
static unsigned int delimLen = 5;
