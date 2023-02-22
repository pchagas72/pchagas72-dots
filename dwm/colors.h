static const char norm_fg[] = "#cdbcd2";
static const char norm_bg[] = "#0d0c17";
static const char norm_border[] = "#8f8393";

//static const char sel_fg[] = "#cdbcd2";
//static const char sel_bg[] = "#4D4D72";
static const char sel_border[] = "#cdbcd2";

static const char urg_fg[] = "#cdbcd2";
static const char urg_bg[] = "#5C4D69";
static const char urg_border[] = "#5C4D69";

static const char *colors[][3]      = {
    /*               fg           bg         border                         */
    [SchemeNorm] = { norm_fg,     norm_bg,   norm_bg }, // unfocused wins
    [SchemeSel]  = { norm_bg,     norm_fg,   sel_border },  // the focused win
};
