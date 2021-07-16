/* See LICENSE file for copyright and license details. */
/* Default settings; can be overriden by command line. */

static int topbar = 1;                      /* -b  option; if 0, dmenu appears at bottom     */
/* -fn option overrides fonts[0]; default X11 font or font set */
static const char *fonts[] = {
	"DejaVuSansMono-Bold:size=10"
	};
static const char *prompt      = NULL;      /* -p  option; prompt to the left of input field */
static const char color_location[] = "/home/jonathan/.config/colors/colors";
static char color0[] = "#151219";
static char color1[] = "#675F58";
static char color2[] = "#6E6F6C";
static char color3[] = "#8A7565";
static char color4[] = "#7D827E";
static char color5[] = "#968A76";
static char color6[] = "#C8A378";
static char color7[] = "#c5c3bc";
static char color8[] = "#898883";
static char color9[] = "#675F58";
static char color10[] = "#6E6F6C";
static char color11[] = "#8A7565";
static char color12[] = "#7D827E";
static char color13[] = "#968A76";
static char color14[] = "#C8A378";
static char color15[] = "#c5c3bc";

static char *colors[SchemeLast][2] = {
	/*     fg         bg       */
	[SchemeNorm] = { color7, color0 },
	[SchemeSel] = { "#000000", color2 },
	//[SchemeSel] = { "#000000", "#b5bd68" },
	[SchemeOut] = { "#000000", "#00ffff" },
};
/* -l option; if nonzero, dmenu uses vertical list with given number of lines */
static unsigned int lines      = 0;
/* -h option; minimum height of a menu line */
static unsigned int lineheight = 28;
static unsigned int min_lineheight = 8;

/*
 * Characters not considered part of a word while deleting words
 * for example: " /?\"&[]"
 */
static const char worddelimiters[] = " ";
