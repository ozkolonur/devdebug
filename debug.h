/*
* debug.h
* 
* 01/04/2008    Onur OZKOL	Initial Version
* 08/04/2008	Onur OZKOL	Add coloured message support
*/


//#ifndef ONUR_LOG_LEVEL
//#define ONUR_LOG_LEVEL 2
//#endif


//#define LOG_BOOT	1
//#define LOG_FIRAT	2
//#define LOG_HEYO	4

//#define LOG_LEVEL	(LOG_BOOT | LOG_FIRAT)

#define EMERG	7   
#define ALERT	6
#define CRIT	5
#define ERR	4
#define WARNING	3
#define NOTICE	2
#define INFO	1
#define DEBUG	0

#define DEFAULT_LEVEL DEBUG

#define printd(LEVEL, args...) do{ \
    if (LEVEL >= DEFAULT_LEVEL) \
	{ if (LEVEL == DEBUG){ printf(""WHITE"["LIGHT_GREEN"%s:%s:%d"WHITE"]:\t" , __FILE__, __func__, __LINE__, GRAY);printf(args); } \
	  else if(LEVEL == INFO) { printf(""WHITE"["GREEN"%s:%s:%d"WHITE"]:\t" , __FILE__, __func__, __LINE__, GRAY);printf(args); } \
	  else if(LEVEL == NOTICE) { printf(""WHITE"["GREEN"%s:%s:%d"WHITE"]:\t" , __FILE__, __func__, __LINE__, GRAY);printf(args); } \
	  else if(LEVEL == WARNING) { printf(""WHITE"["YELLOW"%s:%s:%d"WHITE"]:\t" , __FILE__, __func__, __LINE__, GRAY);printf(args); } \
	  else if(LEVEL == ERR) { printf(""WHITE"["LIGHT_RED"%s:%s:%d"WHITE"]:\t" , __FILE__, __func__, __LINE__, GRAY);printf(args); } \
	  else if(LEVEL == CRIT) { printf(""WHITE"["LIGHT_RED"%s:%s:%d"WHITE"]:\t" , __FILE__, __func__, __LINE__, GRAY);printf(args); } \
	  else if(LEVEL == ALERT) { printf(""WHITE"["LIGHT_RED"%s:%s:%d"WHITE"]:\t" , __FILE__, __func__, __LINE__, GRAY);printf(args); } \
	  else if(LEVEL == EMERG) { printf(""WHITE"["RED"%s:%s:%d"WHITE"]:\t" , __FILE__, __func__, __LINE__, GRAY);printf(args); } \
	  }} while(0)

//#define printd(LOGTYPE, args...) do { if ( LOG_LEVEL & LOGTYPE ) { printf("[" GREEN "%s" NORM ":%i:%i]", LIGHT_GREEN, __FILE__, __func__, __LINE__, GRAY);printf(args); }} while(0)


#define BLACK "\033[22;30m"
#define RED "\033[22;31m"
#define GREEN "\033[22;32m"
#define BLUE "\033[22;34m"
#define WHITE "\033[01;37m"
#define GRAY "\033[22;37m"
#define LIGHT_GREEN "\033[01;32m"
#define YELLOW "\033[01;33m"
#define LIGHT_RED "\033[01;31m"
/*
*
*  Use colours below where needed
*
*/
/*
\033[22;33m - brown
\033[22;35m - magenta
\033[22;36m - cyan
\033[01;30m - dark gray
\033[01;31m - light red
\033[01;32m - light green
\033[01;33m - yellow
\033[01;34m - light blue
\033[01;35m - light magenta
\033[01;36m - light cyan
*/
