#include "error_handler.h"

void log_error_message(ErrorCode code) {
    switch (code) {
        case ERROR_MEMORY_ALLOCATION:
            Log_AddMsg(LOG_ERROR, "Memory allocation error.");
            break;
        case ERROR_BUFFER_OVERFLOW:
            Log_AddMsg(LOG_ERROR, "Buffer overflow error.");
            break;
        case ERROR_INVALID_TASK:
            Log_AddMsg(LOG_ERROR, "Invalid task.");
            break;
        case ERROR_TASK_NOT_FOUND:
            Log_AddMsg(LOG_ERROR, "Task not found.");
            break;
        case ERROR_FILE_OPEN:
            Log_AddMsg(LOG_ERROR, "Failed to open a file.");
            break;
        case ERROR_FILE_CLOSE:
            Log_AddMsg(LOG_ERROR, "Failed to close a file.");
            break;
        case ERROR_FILE_READ:
            Log_AddMsg(LOG_ERROR, "Failed to read from a file.");
            break;
        case ERROR_FILE_WRITE:
            Log_AddMsg(LOG_ERROR, "Failed to write to a file.");
            break;
        case ERROR_FILE_DELETE:
            Log_AddMsg(LOG_ERROR, "Failed to delete a file.");
            break;
        case ERROR_FILE_NOT_FOUND:
            Log_AddMsg(LOG_ERROR, "File not found.");
            break;
        case ERROR_INVALID_FILENAME:
            Log_AddMsg(LOG_ERROR, "Invalid filename provided.");
            break;
        case ERROR_INVALID_INPUT:
            Log_AddMsg(LOG_ERROR, "Invalid input from the user.");
            break;
        case ERROR_INVALID_COMMAND:
            Log_AddMsg(LOG_ERROR, "Invalid command entered.");
            break;
        case ERROR_FILE_ALREADY_EXISTS:
            Log_AddMsg(LOG_ERROR, "File already exists.");
            break;
        case ERROR_MAX_FILES_REACHED:
            Log_AddMsg(LOG_ERROR, "Maximum number of files reached.");
            break;
        default:
            Log_AddMsg(LOG_ERROR, "Unknown error.");
            break;
    }
}
