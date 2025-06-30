/******************************************************************************
 * @file main.c
 * @brief Entry point of the program.
 *****************************************************************************/

#include <stdio.h>
#include "ErrorHandler.h"

/******************************************************************************
 * Main Function
 *****************************************************************************/

int main(void) {
    Std_ReturnType retVal = E_NOT_OK;
    if ((Std_ReturnType) E_OK != ErrorHandler_init()) {
        printf("Initialization failed\n");
        return retVal;
    }
    printf("Initialization successful\n");
    retVal = E_OK;
    return 0;
}
