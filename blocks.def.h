//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
	{"",	"packages.sh",	0,	1},
        {"",    "wifi.sh",  0,  2},
        {"",    "battery.sh", 5, 3},
        {"",    "datetime.sh", 5, 4},
        {";",    "", 0, NULL},
        {"",    "volume.sh", 0, 5},
        {"",    "memory.sh", 10, 6},
        {"",    "email.sh", 60, 7},
        {"",    "mpd.sh", 1, 8},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = " ";
static unsigned int delimLen = 1;
