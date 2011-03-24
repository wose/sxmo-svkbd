static int wh = 200;
static int ww = 0;
static int wx = 0;
static int wy = -200;

static Key keys[] = {
	{ "^°′", XK_dead_circumflex, 1},
	{ "1!¹", XK_1, 1 },
	{ "2\"²", XK_2, 1 },
	{ "3§³", XK_3, 1 },
	{ "4$¼", XK_4, 1 },
	{ "5%½", XK_5, 1 },
	{ "6&¬", XK_6, 1 },
	{ "7/{", XK_7, 1 },
	{ "8([", XK_8, 1 },
	{ "9)]", XK_9, 1 },
	{ "0=}", XK_0, 1 },
	{ "ß?\\", XK_ssharp, 1 },
	{ "´`¸", XK_dead_acute, 1 },
	{ "<-", XK_BackSpace, 2 },
	{ 0 }, /* New row */
	{ "->|", XK_Tab, 1 },
	{ "qQ@", XK_q, 1 },
	{ "wWł", XK_w, 1 },
	{ "eE€", XK_e, 1 },
	{ "rR¶", XK_r, 1 },
	{ "tTŧ", XK_t, 1 },
	{ "zZ←", XK_z, 1 },
	{ "uU↓", XK_u, 1 },
	{ "iI→", XK_i, 1 },
	{ "oOø", XK_o, 1 },
	{ "pPþ", XK_p, 1 },
	{ "üÜ¨", 0xfc, 1 },
	{ "+*~", XK_plus, 1 },
	{ "Return", XK_Return, 3 },
	{ 0 }, /* New row */
	{ 0, XK_Caps_Lock, 2 },
	{ "aAæ", XK_a, 1 },
	{ "sSſ", XK_s, 1 },
	{ "dDð", XK_d, 1 },
	{ "fFđ", XK_f, 1 },
	{ "gGŋ", XK_g, 1 },
	{ "hHħ", XK_h, 1 },
	{ "jJ̣̣", XK_j, 1 },
	{ "kKĸ", XK_k, 1 },
	{ "lLł", XK_l, 1 },
	{ "öÖ˝", 0xf6, 1 },
	{ "äÄ^", 0xe4, 1 },
	{ "#'’", XK_numbersign, 1 },
	{ 0 }, /* New row */
	{ 0, XK_Shift_L, 2 },
	{ "<>|", XK_less, 1 },
	{ "yY»", XK_y, 1 },
	{ "xX«", XK_x, 1 },
	{ "cC¢", XK_c, 1 },
	{ "vV„", XK_v, 1 },
	{ "bB“", XK_b, 1 },
	{ "nN”", XK_n, 1 },
	{ "mMµ", XK_m, 1 },
	{ ",;·", XK_comma, 1 },
	{ ".:…", XK_period, 1 },
	{ "-_–", XK_minus, 1 },
	{ 0, XK_Shift_R, 2 },
	{ 0 }, /* New row */
	{ "Ctrl", XK_Control_L, 2 },
	{ "Win", XK_Super_L, 2 },
	{ "Alt", XK_Alt_L, 2 },
	{ "", XK_space, 5 },
	{ "Alt Gr", XK_ISO_Level3_Shift, 2 },
	{ "Menu", XK_Menu, 2 },
	{ "Ctrl", XK_Control_R, 2 },
};

Buttonmod buttonmods[] = {
	{ XK_Shift_L, Button2 },
	{ XK_Alt_L, Button3 },
};

