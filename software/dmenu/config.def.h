/* See LICENSE file for copyright and license details. */
/* kieran fork thing that i stole from suckless */

static int colorprompt 			= 1; 			/* i forgot what this does, but im keeping it on */    
static int topbar 			= 1; 			/* -b  option; if 0, dmenu appears at bottom     */
static int centered 			= 1; 			/* -c option; centers dmenu on screen */
static int min_width 			= 500; 			/* minimum width when centered */
static const unsigned int alpha 	= 0xBB;     		/* Amount of opacity. 0xff is opaque */
static unsigned int lines      		= 12;			/* default number of lines shown when ran */
static const char worddelimiters[] 	= " ";			/* i forgot what this does */
static unsigned int border_width 	= 1;			/* defines border width */

/* colors, fonts, and words */
static const char *fonts[] 		= {"monospace:size=10"};/* font, font size */
static const char *prompt      		= "apps:";		/* default label */
static const char col_a[] 		= "#ffffff";		/* color 1, i made it white */
static const char col_b[] 		= "#000000";		/* color 2, i made it black */
static const char *colors[SchemeLast][2] = {
	/* typ          fg     bg     */
	[SchemeNorm] ={ col_a, col_b },
	[SchemeSel] = { col_b, col_a },
	[SchemeOut] = { col_b, col_a },
};
static const unsigned int alphas[SchemeLast][2] = {
	[SchemeNorm] = { OPAQUE, alpha },
	[SchemeSel] = { OPAQUE, alpha },
	[SchemeOut] = { OPAQUE, alpha },
};
