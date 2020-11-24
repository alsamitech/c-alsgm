#ifndef ALSGM_IHDR_H
#define ALSGM_IHDR_H

#include "def.h"
#include "gmtypes.h"

// links to extern object files for whatever processor architecture is defined in config.h
#ifdef AMD_64

#endif
#ifdef i386

#endif

// X11 Header Files (-lX11)

// Checks if GM_OPENGL is defined in the code
#ifdef GM_OPENGL

// OpenGL Header Files (-lGL)
#include <GL/gl.h>

// AlsGM lib Header Files (!)

#endif
#ifdef GM_VULK

#endif






#endif	// ALSGM_IHDR_H
