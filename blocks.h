static const Block blocks[] = {
        /*Icon*/        /*Command*/             /*Update Interval*/     /*Update Signal*/
        {" ",   "cat /tmp/recordingicon 2>/dev/null",   0,                      9},
        {"  ", "~/.local/bin/blevel",      0,                      11},
        {" ",   "~/.local/bin/volume",        0,                      10},
        {" ",  "~/.local/bin/battery",       5,                      0},
        {" ",   "~/.local/bin/clock",         1,                     0},
	{" 🖥️ ", "~/.local/bin/cpuperc",		1, 			0},
	{" ", "~/.local/bin/sb-memory",	1, 			0},
 	{" 🌡 ", "~/.local/bin/cpu",           5,                      0},
        {" ",   "~/.local/bin/internet",      5,                      0},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = "|";
static unsigned int delimLen = 5;
