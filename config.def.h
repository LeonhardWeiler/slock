/* user and group to drop privileges to */
static const char *user  = "leo";
static const char *group = "wheel";

static const char *colorname[NUMCOLS] = {
	[INIT] =   "black",     /* after initialization */
	[INPUT] =  "black",   /* during input */
	[FAILED] = "red",   /* wrong password */
};

/* treat a cleared input like a wrong password (color) */
static const int failonclear = 1;
