static const char norm_fg[] = "#9ccbed";
static const char norm_bg[] = "#0B0312";
static const char norm_border[] = "#6d8ea5";

static const char sel_fg[] = "#9ccbed";
static const char sel_bg[] = "#214379";
static const char sel_border[] = "#9ccbed";

static const char col_black[]       = "#000000";
static const char col_red[]         = "#ff0000";
static const char col_yellow[]      = "#ffff00";
static const char col_white[]       = "#ffffff";

static const char *colors[][3]      = {
	[SchemeNorm] =	 { norm_fg, norm_bg,  norm_bg },
	[SchemeSel]  =	 { norm_bg, norm_fg,   sel_border },
	[SchemeWarn] =	 { col_black, col_yellow, col_red },
	[SchemeUrgent]=	 { col_white, col_red,    col_red },
};
