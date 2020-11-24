#ifndef ALSGM_LOGGER_H
#define ALSGM_LOGGER_H

#define 0x01 FDUMP_PLAIN		// 0b001
#define 0x02 FUMP_CONTEXT		// 0b002
#define 0x03 FDUMP_ADVANCED		// 0b003

FILE* FileInit(char* contents, char* filename){
	// boilerplate, if you can make this more efficient, a pull request would be greatly appreciated
	FILE* fp;
	fp=fopen(filename, "w+");
	if(fp=NULL){return NULL;}
	return fp;
}

uint8_t fdump(FILE* fp,char* contents,uint8_t flags){
		
}

#endif
