/* See LICENSE file for copyright and license details. */
/* Default settings; can be overriden by command line. */

static int topbar = 1;                      /* -b  option; if 0, instantmenu appears at bottom     */
static int centered = 0;                    /* -c option; centers dmenu on screen */
static int followcursor = 0;                    /* -c option; centers dmenu on screen */
static int min_width = 500;                    /* minimum width when centered */

static int instant = 0;
static int spaceconfirm = 0;
static int fuzzy = 1;
static int prematch = 0;
static int smartcase = 0;
static int exact = 0;
static int sely = 0;
static int animated = 0;
static int framecount = 7;
static int fullheight = 0;
static unsigned int lineheight = 0;         /* -h option; minimum height of a menu line     */

/* -fn option overrides fonts[0]; default X11 font or font set */
static const char *fonts[] = {
	"Ubuntu:size=12:style=Light",
	"Fira Code Nerd Font:size=14",
	"JoyPixels:pixelsize=20:antialias=true:autohint=true",
};

static const char *prompt      = NULL;      /* -p  option; prompt to the left of input field */
static const char *searchtext      = NULL;      /* -p  option; prompt to the left of input field */
static const char *leftcmd      = NULL;      /* -p  option; prompt to the left of input field */
static const char *rightcmd      = NULL;      /* -p  option; prompt to the left of input field */
static const char *colors[SchemeLast][9] = {
	/*     fg         bg     darker      */
	[SchemeNorm] = { "#B7BCD4", "#161923", "#2C334D" },
	[SchemeFade] = { "#7F8CB8", "#161923", "#2C334D" },
	[SchemeHighlight] = { "#B7BCD4", "#2C334D", "#1F2437" },
	[SchemeHover] = { "#B7BCD4", "#2C334D", "#1F2437" },
	[SchemeSel] = { "#000000", "#F1739A", "#D84572" },
	[SchemeOut] = { "#000000", "#D84572", "#D84572" },
	[SchemeGreen] = { "#000000", "#B882C2", "#995FA4" },
	[SchemeRed] = { "#000000", "#FF7965", "#E84C34" },
	[SchemeYellow] = { "#000000", "#8A8BBE", "#67689F" },
};

/* -l option; if nonzero, instantmenu uses vertical list with given number of lines */
/* -g option; controls columns in grid if nonzero and lines is nonzero */
static unsigned int lines      = 0;
static unsigned int columns    = 1;

/*
 * Characters not considered part of a word while deleting words
 * for example: " /?\"&[]"
 */
static const char worddelimiters[] = " ";

/* -ps option; preselected item starting from 0 */
static unsigned int preselected = 0;

/* Size of the window border */
static unsigned int border_width = 0;
