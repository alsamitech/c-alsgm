#ifndef ALSAMI_EVENT_SYSTEM_ALSGM
#define ALSAMI_EVENT_SYSTEM_ALSGM

/*
 *	Alsami Event System (AlsGM Version)
 *
 *	This is an event system that is not only efficient, but fully written in C.
 *
 *
 *
 *
 * */

typedef struct EVENT_STRUCT{
	enum{
		WindowClose,WindowFocus,WindowLostFocus,WindowMoved,AppTick,AppUpdate,AppRender,
		KeyPressed,KeyReleased,MouseButtonPressed,MouseButtonReleased,
		MouseMoved, MouseScrolled
	} category;

} event_T;

event_T* event_create(){
	event_T* event_i=calloc(1, sizeof(EVENT_STRUCT));	

	return event_i;
}

void event_destroy(event_T* event_i){
	free(event_i);
}



#endif				// ALSAMI_EVENT_SYSTEM_ALSGM
