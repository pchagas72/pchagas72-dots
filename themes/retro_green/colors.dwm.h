static const char norm_fg[] = "#1FC742";
static const char norm_bg[] = "#010101";
static const char norm_border[] = "#023612";

static const char sel_fg[] = "#010101";
static const char sel_bg[] = "#1Fc742";
static const char sel_border[] = "#1FC742";

static const char urg_fg[] = "#c3c6ca";
static const char urg_bg[] = "#48546E";
static const char urg_border[] = "#48546E";

static const char *colors[][3]      = {
    /*               fg           bg         border                         */
    [SchemeNorm] = { norm_fg,     norm_bg,   norm_border }, // unfocused wins
    [SchemeSel]  = { sel_fg,      sel_bg,    sel_border },  // the focused win
//    [SchemeUrg] =  { urg_fg,      urg_bg,    urg_border },
};
