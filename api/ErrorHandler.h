/******************************************************************************
 * @file ErrorHandler.h
 * @brief Header file for the ErrorHandler in api.
 *
 * This file contains the declarations of functions and data structures
 * used for managing the ErrorHandler project in the api directory.
 *
 * The functions declared here are used for initializing and managing
 * the various modules within the ErrorHandler project.
 *****************************************************************************/

#ifndef ERRORHANDLER_H
#define ERRORHANDLER_H

/******************************************************************************
 * Includes
 *****************************************************************************/

#include <Std_Types.h>

/******************************************************************************
 * Macros
 *****************************************************************************/

//#ifndef ERRORHANDLER_EXAMPLE
//#define ERRORHANDLER_EXAMPLE 1024
//#endif

/******************************************************************************
 * Typedefs
 *****************************************************************************/

/******************************************************************************
 * Enumerations
 *****************************************************************************/

/******************************************************************************
 * Structures
 *****************************************************************************/

/******************************************************************************
 * Global Variables (extern declarations)
 *****************************************************************************/

/******************************************************************************
 * Function Prototypes
 *****************************************************************************/

/**
 * @brief Initializes the ErrorHandler project.
 *
 * @details   This function initializes the ErrorHandler project by setting up necessary
 *            configurations and allocating resources required for its operation.
 *
 * @param[in] None
 *
 * @return Std_ReturnType
 * @retval E_OK       Initialization succeeded.
 * @retval E_NOT_OK   Initialization failed.
 */
Std_ReturnType ErrorHandler_init(void);

/******************************************************************************
 * Constants
 *****************************************************************************/

//#ifndef ERRORHANDLER_MAX_RETRIES
//#define ERRORHANDLER_MAX_RETRIES 3
//#endif

#endif // ERRORHANDLER_H
