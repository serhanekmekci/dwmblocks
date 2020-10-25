//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
	{"", "bar_windows", 60, 8},
	{"", "bar_os_x", 60, 7},
	{"", "bar_artix", 60, 6},
	{"", "bar_wifi", 10, 5},
	{"", "volume", 1, 4},
	{" ", "bar_kbdlayout", 3, 3},
	{" " , "bar_date", 1, 2},
	{" " , "bar_time", 1, 1},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = " ";
static unsigned int delimLen = 5;
