
static int wh = 30;
static int ww = 0;
static int wx = 0;
static int wy = -30;

static Key keys[] = {
	{ 0, XK_Shift_L, 2 },
	{ "←", XK_Left, 1 },
	{ "↓", XK_Down, 1 },
	{ "↑", XK_Up, 1 },
	{ "→", XK_Right, 1},
	{ "Alt", XK_Alt_L, 2 },
};

Buttonmod buttonmods[] = {
	{ XK_Shift_L, Button2 },
	{ XK_Alt_L, Button3 },
};

