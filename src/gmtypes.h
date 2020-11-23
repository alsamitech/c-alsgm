#ifndef ALSGM_TYPES_H
#define ALSGM_TYPES_H

typedef struct ALSGM_INSTANCE_STRUCT{
	char* inst_title;
	double inst_version;

} alsgm_T;

alsgm_T* alsgm_instance_create(char* apptitle, double appversion){
	alsgm_T* alsgm_i=(alsgm_T*)calloc(1, sizeof(alsgm_T));

	alsgm_i->inst_version=appversion;
	
	alsgm_i->inst_title=(char*)malloc(strlen(apptitle)*sizeof(char))	

	alsgm_i->inst_title=apptitle;

	return alsgm_i;
}




#endif
