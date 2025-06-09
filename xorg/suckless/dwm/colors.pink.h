static const char norm_fg[] = "#dfcfde";
static const char norm_bg[] = "#050C1B";
static const char norm_border[] = "#9c909b";

static const char sel_fg[] = "#dfcfde";
static const char sel_bg[] = "#926489";
static const char sel_border[] = "#dfcfde";

static const char urg_fg[] = "#dfcfde";
static const char urg_bg[] = "#4C6BA9";
static const char urg_border[] = "#4C6BA9";

static const char *colors[][3]      = {
    /*               fg           bg         border                         */
    [SchemeNorm] = { norm_fg,     norm_bg,   norm_border }, // unfocused wins
    [SchemeSel]  = { sel_fg,      sel_bg,    sel_border },  // the focused win
};
