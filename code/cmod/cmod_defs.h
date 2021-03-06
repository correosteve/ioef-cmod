/* ******************************************************************************** */
// Core Features
/* ******************************************************************************** */

// Core EF Defines
#define ELITEFORCE

// Core cMod defines
#define CMOD_COMMON

// New filesystem
#define NEW_FILESYSTEM

// Mp3 Support
#define USE_CODEC_MP3

// New cvar and command handling. Requires NEW_FILESYSTEM for a few things.
#define CMOD_CVAR_HANDLING
#define CMOD_COMMAND_INTERPRETER

// Requires CMOD_COMMAND_INTERPRETER
#define CMOD_RESTRICT_CFG_FILES

// Requires NEW_FILESYSTEM and CMOD_CVAR_HANDLING
#define CMOD_SETTINGS

// Requires NEW_FILESYSTEM and CMOD_CVAR_HANDLING
#ifndef DEDICATED
	#define CMOD_CROSSHAIR
#endif

/* ******************************************************************************** */
// Graphics
/* ******************************************************************************** */

#define CMOD_BRIGHTNESS_SHIFT
#define CMOD_GAMMA_SHIFT
#define CMOD_FULLSCREEN
#define CMOD_IGNORE_RESIZE_MESSAGES		// Avoids issues with CMOD_FULLSCREEN on some platforms/situations
#define CMOD_OVERBRIGHT
#define CMOD_FRAMEBUFFER	// Requires CMOD_OVERBRIGHT
#define CMOD_LOADINGSCREEN_FIX
#define CMOD_LIGHTMAPSTAGE_FIX
#define CMOD_GLIMP_SHUTDOWN_FIX

/* ******************************************************************************** */
// Version Identification
/* ******************************************************************************** */

#define CMOD_VERSION_STRING
#define CMOD_CONSOLE_COLOR
#define CMOD_USERINFO

/* ******************************************************************************** */
// Server
/* ******************************************************************************** */

#define CMOD_GETSTATUS_FIXES
#define CMOD_BOT_TWEAKS

/* ******************************************************************************** */
// Misc
/* ******************************************************************************** */

#define CMOD_VMFLOATCAST
#define CMOD_REDUCE_WARNINGS
#define CMOD_EVENT_QUEUE_SIZE
#define CMOD_VM_STRNCPY_FIX
