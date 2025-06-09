static const char norm_fg[] = "#eab88a";
static const char norm_bg[] = "#1b1005";
static const char norm_border[] = "#a38060";

static const char sel_fg[] = "#eab88a";
static const char sel_bg[] = "#577250";
static const char sel_border[] = "#eab88a";

static const char urg_fg[] = "#eab88a";
static const char urg_bg[] = "#2F5349";
static const char urg_border[] = "#2F5349";

static const char *colors[][3]      = {
    /*               fg           bg         border                         */
    [SchemeNorm] = { norm_fg,     norm_bg,   norm_border }, // unfocused wins
    [SchemeSel]  = { sel_fg,      sel_bg,    sel_border },  // the focused win
};
