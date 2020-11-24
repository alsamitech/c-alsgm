
/*	AlsGM Internal Definition File
 *
 *	This file contains the definitions of return values of both app and AlsGM functions.
 *	
 *	L: Library Exceptions (returned when a library fails to a specific action)
 *	R: Standard App Exceptions
 *
 * */

// Techical Stuff
#define R_SUCSESS 0
#define R_UNDEFINED_ERR 1
#define R_MEMORY_ERR 2
#define R_GRAPHICS_ERR 3
#define R_X11_ERR 4
#define R_GM_ERR 5
// Game Stuff
#define R_ILLIGAL_BEHAVIOR 6
#define R_CHEAT 7
// More Specific techinical stuff
#define R_NETWORK_ERR 8
#define R_DISCONNECTED 9
#define R_DRAWING_ERR 10
#define R_CONDITIONAL_SUCSESS 11
// Internal Lib Exceptions
#define L_SUCSESS 0
#define L_UNDEFINED_ERR 1
#define L_MEMORY_ERROR 2
#define L_OUT_OF_MEMORY 3
#define L_OPENGL_NOT_INITALIZED 4
#define L_CANT_OPEN_DISPLAY 5
#define L_VULKAN_NOT_INITALIZED 10
#define L_FILE_NOT_FOUND 30
