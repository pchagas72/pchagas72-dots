static const char norm_fg[] = "#9ccbed";
static const char norm_bg[] = "#0B0312";
static const char norm_border[] = "#6d8ea5";

static const char sel_fg[] = "#9ccbed";
static const char sel_bg[] = "#214379";
static const char sel_border[] = "#9ccbed";

static const char *colors[][3]      = {
    /*               fg           bg         border                         */
    [SchemeNorm] = { norm_fg,     norm_bg,   norm_bg }, // unfocused wins
    [SchemeSel]  = { norm_bg,     norm_fg,    sel_border },  // the focused win
};
