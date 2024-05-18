static const char norm_fg[] = "#aabccc";
static const char norm_bg[] = "#08050C";
static const char norm_border[] = "#76838e";

static const char sel_fg[] = "#aabccc";
static const char sel_bg[] = "#274083";
static const char sel_border[] = "#aabccc";

static const char urg_fg[] = "#aabccc";
static const char urg_bg[] = "#4C616F";
static const char urg_border[] = "#4C616F";

static const char *colors[][3]      = {
    /*               fg           bg         border                         */
    [SchemeNorm] = { norm_fg,     norm_bg,   norm_border }, // unfocused wins
    [SchemeSel]  = { sel_fg,      sel_bg,    sel_border },  // the focused win
};
