#include "error_handler.h"

void log_error_message(ErrorCode code) {
    switch (code) {
        case ERROR_MEMORY_ALLOCATION:
        Log_AddMsg(ERROR, "Memory allocation error.");
        break;
        case ERROR_BUFFER_OVERFLOW:
        Log_AddMsg(ERROR, "Buffer overflow error.");
        break;
        case ERROR_INVALID_TASK:
        Log_AddMsg(ERROR, "Invalid task.");
        break;
        case ERROR_TASK_NOT_FOUND:
        Log_AddMsg(ERROR, "Task not found.");
        break;
        case ERROR_FILE_OPEN:
        Log_AddMsg(ERROR, "Failed to open a file.");
        break;
         case ERROR_FILE_CLOSE:
            Log_AddMsg(ERROR, "Failed to close a file.");
            break;
        case ERROR_FILE_READ:
            Log_AddMsg(ERROR, "Failed to read from a file.");
            break;
        case ERROR_FILE_WRITE:
            Log_AddMsg(ERROR, "Failed to write to a file.");
            break;
        case ERROR_FILE_DELETE:
            Log_AddMsg(ERROR, "Failed to delete a file.");
            break;
        case ERROR_FILE_NOT_FOUND:
            Log_AddMsg(ERROR, "File not found.");
            break;
        case ERROR_INVALID_FILENAME:
            Log_AddMsg(ERROR, "Invalid filename provided.");
            break;
        case ERROR_INVALID_INPUT:
            Log_AddMsg(ERROR, "Invalid input from the user.");
            break;
        case ERROR_INVALID_COMMAND:
            Log_AddMsg(ERROR, "Invalid command entered.");
            break;
        case ERROR_FILE_ALREADY_EXISTS:
            Log_AddMsg(ERROR, "File already exists.");
            break;
        case ERROR_MAX_FILES_REACHED:
            Log_AddMsg(ERROR, "Maximum number of files reached.");
            break;
        default:
        Log_AddMsg(ERROR, "Unknown error.");
        break;
    }
}
