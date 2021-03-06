//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
	{"Mem: ", "free -h | awk '/^Mem/ { print $3\"/\"$2 }' | sed s/i//g",	60,	0},

  {"Cpu: ", "sensors | grep 'Package id 0' | sed 's/.*:  //;s/  (.*//'", 60, 0},

  {"Bat: ", "upower -i $(upower -e | grep 'BAT') | grep -E 'to\\ full|percentage' | sed 's/.*percentage:\\s*//'", 60, 0},

	{"", "date '+%b %d (%a) %I:%M%p'",					5,		0},

};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = " | ";
static unsigned int delimLen = 5;
