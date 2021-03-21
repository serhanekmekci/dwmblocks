//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
	{"", "bar_music", 0, 14},
	{"", "bar_news", 600, 12},
	{"", "bar_mailbox", 300, 11},
	{"", "bar_checkwg", 5, 13},
	//{"", "bar_windows", 300, 8},
	//{"", "bar_artix", 300, 6},
	{"", "forecast", 10800, 10},
	{"", "bar_wifi", 3, 5},
	{"", "bar_volume", 1, 4},
	{"", "bar_kbdlayout", 0, 3},
	{"", "bar_bluetooth", 0, 9},
	{"" , "bar_date", 0, 2},
	{"" , "bar_time", 0, 1},
	{"", "bar_powermenu", 0, 15},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = " ";
static unsigned int delimLen = 5;
