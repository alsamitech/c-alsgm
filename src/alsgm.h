#ifndef ALSGM_ALSGM_H 
#define ALSGM_ALSGM_H

// Includes
#include "gmtypes.h"
#include "ihdr.h"


// Frontend defines
#ifdef DO_CON
#define GMGO void STRT(void *Yin)
#else
#define GMGO int START(int arc, char** argv)
#endif


int main(int argc, char** argv){

	// Initalize Logger
// If the user pre-processor defines DO_CON (do concurrency), AlsGM will operate with the game engine being one process, and the game iteself being another one.
// Otherwise, AlsGM will operate lib-style
#ifdef DO_CON
	pthread_T USR_GM;
	
	FileInit("Starting AlsGM");

	pthread_create(&USR_GME,NULL,&STRT,NULL);
#else
#endif 

	return 0;
}

#endif      //ALSGM_ALSGM_H
