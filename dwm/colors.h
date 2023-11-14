static const char norm_fg[] = "#c3c6ca";
static const char norm_bg[] = "#08090C";
static const char norm_border[] = "#888a8d";

static const char sel_fg[] = "#c3c6ca";
static const char sel_bg[] = "#596274";
static const char sel_border[] = "#c3c6ca";

static const char urg_fg[] = "#c3c6ca";
static const char urg_bg[] = "#48546E";
static const char urg_border[] = "#48546E";

static const char *colors[][3]      = {
    /*               fg           bg         border                         */
    [SchemeNorm] = { norm_fg,     norm_bg,   norm_border }, // unfocused wins
    [SchemeSel]  = { sel_fg,      sel_bg,    sel_border },  // the focused win
//    [SchemeUrg] =  { urg_fg,      urg_bg,    urg_border },
};
