/* See LICENSE file for copyright and license details. */
/* Default settings; can be overriden by command line. */

static int topbar = 0;                      /* -b  option; if 0, dmenu appears at bottom     */
/* -fn option overrides fonts[0]; default X11 font or font set */
static const char *fonts[] = {
	"DejaVuSansMono-Bold:size=12"
	};
static const char *prompt      = NULL;      /* -p  option; prompt to the left of input field */
static const char color0[] = "#12101c";
static const char color1[] = "#503989";
static const char color2[] = "#6D52A1";
static const char color3[] = "#7D66C0";
static const char color4[] = "#9866A6";
static const char color5[] = "#D37692";
static const char color6[] = "#9375C5";
static const char color7[] = "#ebc1cc";
static const char color8[] = "#a4878e";
static const char color9[] = "#503989";
static const char color10[] = "#6D52A1";
static const char color11[] = "#7D66C0";
static const char color12[] = "#9866A6";
static const char color13[] = "#D37692";
static const char color14[] = "#9375C5";
static const char color15[] = "#ebc1cc";
static const char *colors[SchemeLast][2] = {
	/*     fg         bg       */
	[SchemeNorm] = { color7, color0 },
	[SchemeSel] = { "#000000", color2 },
	//[SchemeSel] = { "#000000", "#b5bd68" },
	[SchemeOut] = { "#000000", "#00ffff" },
};
/* -l option; if nonzero, dmenu uses vertical list with given number of lines */
static unsigned int lines      = 0;

/*
 * Characters not considered part of a word while deleting words
 * for example: " /?\"&[]"
 */
static const char worddelimiters[] = " ";
