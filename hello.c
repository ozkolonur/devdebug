#include <stdio.h>
#include "debug.h"

int main(int argc, char *argv[])
{

    printd(DEBUG, "hello world!\n");
    printd(INFO, "hello world!\n");
    printd(NOTICE, "hello world!\n");
    printd(WARNING, "hello world!\n");
    printd(ERR, "hello world!\n");
    printd(CRIT, "hello world!\n");
    printd(ALERT, "hello world!\n");
    printd(EMERG, "hello world!\n");


    
    return 0;
}


