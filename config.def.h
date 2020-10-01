static const Bool wmborder = True;
static int fontsize = 20;
static double overlay_delay = 1.0;
static int heightfactor = 16; //one row of keys takes up 1/x of the screen height
static const char *fonts[] = {
	"Hurmit Nerd Font:bold:size=20"
};
static const char *colors[SchemeLast][2] = {
	/*     fg         bg       */
	[SchemeNorm] = { "#eaeaea", "#161616" },
	[SchemePress] = { "#eaeaea", "#666666" },
	[SchemeHighlight] = { "#161616", "#e6c547" },
	[SchemeBorder] = { "#70c0ba", "#70c0ba" },
};

