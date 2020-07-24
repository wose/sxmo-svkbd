#define KEYS 63
static Key keys_ru[] = {
	{ "ёЁ", XK_Cyrillic_io, 1 },
	{ "1!", XK_1, 1 },
	{ "2\"", XK_2, 1 },
	{ "3№", XK_3, 1 },
	{ "4;", XK_4, 1 },
	{ "5%", XK_5, 1 },
	{ "6:", XK_6, 1 },
	{ "7?", XK_7, 1 },
	{ "8*", XK_8, 1 },
	{ "9(", XK_9, 1 },
	{ "0)", XK_0, 1 },
	{ "-_", XK_minus, 1 },
	{ "=+", XK_plus, 1 },
	{ "<-", XK_BackSpace, 2 },
	{ "Del", XK_Delete, 1},
	{ 0 }, /* New row */
	{ "->|", XK_Tab, 1 },
	{ "йЙ", XK_Cyrillic_shorti, 1 },
	{ "цЦ", XK_Cyrillic_tse, 1 },
	{ "уУ", XK_Cyrillic_u, 1 },
	{ "кК", XK_Cyrillic_ka, 1 },
	{ "еЕ", XK_Cyrillic_ie, 1 },
	{ "нН", XK_Cyrillic_en, 1 },
	{ "гГ", XK_Cyrillic_ghe, 1 },
	{ "шШ", XK_Cyrillic_sha, 1 },
	{ "щЩ", XK_Cyrillic_shcha, 1 },
	{ "зЗ", XK_Cyrillic_ze, 1 },
	{ "хХ", XK_Cyrillic_ha, 1 },
	{ "ъЪ", XK_Cyrillic_hardsign, 1 },
	{ "Return", XK_Return, 3 },
	{ 0 }, /* New row */
	{ 0, XK_Caps_Lock, 2 },
	{ "фФ", XK_Cyrillic_ef, 1 },
	{ "ыЫ", XK_Cyrillic_yeru, 1 },
	{ "вВ", XK_Cyrillic_ve, 1 },
	{ "аА", XK_Cyrillic_a, 1 },
	{ "пП", XK_Cyrillic_pe, 1 },
	{ "рР", XK_Cyrillic_er, 1 },
	{ "оО", XK_Cyrillic_o, 1 },
	{ "лЛ", XK_Cyrillic_el, 1 },
	{ "дД", XK_Cyrillic_de, 1 },
	{ "жЖ", XK_Cyrillic_zhe, 1 },
	{ "эЭ", XK_Cyrillic_e, 1 },
	{ "\\/", XK_backslash, 1 },
	{ 0 }, /* New row */
	{ 0, XK_Shift_L, 3 },
	{ "яЯ", XK_Cyrillic_ya, 1 },
	{ "чЧ", XK_Cyrillic_che, 1 },
	{ "сС", XK_Cyrillic_es, 1 },
	{ "мМ", XK_Cyrillic_em, 1 },
	{ "иИ", XK_Cyrillic_i, 1 },
	{ "тТ", XK_Cyrillic_te, 1 },
	{ "ьЬ", XK_Cyrillic_softsign, 1 },
	{ "бБ", XK_Cyrillic_be, 1 },
	{ "юЮ", XK_Cyrillic_yu, 1 },
	{ ".,", XK_period, 1 },
	{ 0, XK_Shift_R, 2 },
	{ 0 }, /* New row */
	{ "Ctrl", XK_Control_L, 2 },
	{ "Alt", XK_Alt_L, 2 },
	{ "", XK_space, 5 },
	{ "Alt", XK_Alt_R, 2 },
	{ "Ctrl", XK_Control_R, 2 },
};

Buttonmod buttonmods[] = {
	{ XK_Shift_L, Button2 },
	{ XK_Alt_L, Button3 },
};

#define OVERLAYS 1
static Key overlay[OVERLAYS] = {
	{ 0, XK_Cancel },
};

#define LAYERS 1
static char* layer_names[LAYERS] = {
	"ru",
};

static Key* available_layers[LAYERS] = {
	keys_ru,
};
