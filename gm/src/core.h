#include "ihdr.h"
#include "logfiles.h"

#define STRT ALSAMI_GAME_ENGINE_STRTR

void *ALSAMI_GAME_ENGINE_STRTR(void *ptr);

int err=0;

/*Core Function Prototypes*/
int YIN_CONJ_NCLC(int YIN_IDK_WHATEVER);

int main(int argc, char** argv) {

  pthread_t USR_GME;

  FileInit("Initializing Process...");
  
  // Entry point
  pthread_create(&USR_GME, NULL, &ALSAMI_GAME_ENGINE_STRTR, NULL);

  switch(err) {
    case 0:
      break;
    case 1:
      char GEN_ERR[] = "ERROR: Program had an undefined issue and needs to stop.";
      WRT_TO_FL(GEN_ERR);
      break;
  }

  pthread_join(USR_GME, NULL);

  // This part just frees memor
  //delete sbX;

  return EXIT_SUCCESS;
}

uchar YIN_CONJ_NCLC(int YIN_IDK_WHATEVER){
	int NUNXZ=YIN_IDK_WHATEVER;
	int YIN_CONJECT_CTR;
	for(;;){
		if(NUMXZ % 2 == 0){
			NUMXZ=NUMXZ/2;
		}else{
			NUMXZ=(NUMXZ*3)+1;
		}
		YIN_CONJECT_CTR++;
		if(NUMXZ==1) {
			break;
		} else if(NUMXZ==0) {LOG_TO_FL("Operation Failed!!!\n");return NULL;}
	
	}
	return YIN_CONJECT_CTR;
}