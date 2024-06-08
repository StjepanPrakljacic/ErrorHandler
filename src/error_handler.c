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
        default:
        Log_AddMsg(ERROR, "Unknown error.");
        break;
    }
}
