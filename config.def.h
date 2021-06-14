/* See LICENSE file for copyright and license details. */
/* Default settings; can be overriden by command line. */

static int topbar = 1;                      /* -b  option; if 0, dmenu appears at bottom     */
/* -fn option overrides fonts[0]; default X11 font or font set */
static const char *fonts[] = {
	"DejaVuSansMono-Bold:size=10"
	};
static const char *prompt      = NULL;      /* -p  option; prompt to the left of input field */
static const char color0[] = "#0b0f12";
static const char color1[] = "#835B3E";
static const char color2[] = "#8E7159";
static const char color3[] = "#7B837C";
static const char color4[] = "#A68A73";
static const char color5[] = "#AB9C93";
static const char color6[] = "#C7B3A5";
static const char color7[] = "#e1d9d5";
static const char color8[] = "#9d9795";
static const char color9[] = "#835B3E";
static const char color10[] = "#8E7159";
static const char color11[] = "#7B837C";
static const char color12[] = "#A68A73";
static const char color13[] = "#AB9C93";
static const char color14[] = "#C7B3A5";
static const char color15[] = "#e1d9d5";
static const char *colors[SchemeLast][2] = {
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
