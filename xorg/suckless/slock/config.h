/* user and group to drop privileges to */
static const char *user  = "nobody";
static const char *group = "wheel";

static const char *colorname[NUMCOLS] = {
	[INIT] =   "#050C1B",     /* after initialization */
	[INPUT] =  "#6E9BD6",   /* during input */
	[FAILED] = "#4C6BA9",   /* wrong password */
};

/* treat a cleared input like a wrong password (color) */
static const int failonclear = 1;

/* default message */
static const char * message = "The screen is locked.";

/* text color */
static const char * text_color = "#dfcfde";

/* text size (must be a valid size) */
static const char * font_name = "6x13";
