//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
	{"", "mailbox", 1, 11},
	{"", "news", 3, 12},
	{"", "bar_windows", 60, 8},
	{"", "bar_os_x", 60, 7},
	{"", "bar_artix", 60, 6},
	{"", "forecast", 10800, 10},
	{"", "bar_wifi", 5, 5},
	{"", "volume", 0, 4},
	{" ", "bar_kbdlayout", 0, 3},
	{"", "bar_bluetooth", 0, 9},
	{" " , "bar_date", 0, 2},
	{" " , "bar_time", 1, 1},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = " ";
static unsigned int delimLen = 5;
