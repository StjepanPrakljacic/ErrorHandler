#ifndef ERROR_HANDLER_H
#define ERROR_HANDLER_H

/**
 * @file error_handler.h
 * @brief Header file for the Error Handler library in C.
 *
 * The Error Handler library provides functions and definitions for handling
 * and logging errors within a C program. It defines various error codes
 * and a function to log descriptive error messages.
 */

typedef enum {
    E_OK = 0,
    ERROR_MEMORY_ALLOCATION,
    ERROR_BUFFER_OVERFLOW,
    ERROR_INVALID_TASK,
    ERROR_TASK_NOT_FOUND,
    ERROR_FILE_OPEN,
    ERROR_FILE_CLOSE,
    ERROR_FILE_READ,
    ERROR_FILE_WRITE,
    ERROR_FILE_DELETE,
    ERROR_FILE_NOT_FOUND,
    ERROR_INVALID_FILENAME,
    ERROR_INVALID_INPUT,
    ERROR_INVALID_COMMAND,
    ERROR_FILE_ALREADY_EXISTS,
    ERROR_MAX_FILES_REACHED
} ErrorCode;

/**
 * @brief Function to log a descriptive error message.
 *
 * This function takes an error code and uses logging to log a descriptive
   error message.
 *
 * @param[in] code The error code.
 *
 * @return void
 */
void log_error_message(ErrorCode code);

#endif // ERROR_HANDLER_H
