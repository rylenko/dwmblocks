static const Block blocks[] = {
	/* Icon, command, update interval and update signal */
	{"", "smpc-block", 1, 0},
	{"", "wttr-block", 60, 0},
	{"", "pkg-info-cnt-block", 15, 0},
	{"", "ram-block", 5, 0},
	{"", "apm-block", 5, 0},
	{"", "sndio-block", 5, 1},
	{"", "dt-block", 20, 0},
};

static char delim[] = " ";
static unsigned int delimLen = 5;
