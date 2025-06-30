# Build the main library from your source code
add_library(ErrorHandler_lib STATIC ErrorHandler.c)

target_include_directories(ErrorHandler_lib PUBLIC
    ${CMAKE_SOURCE_DIR}/api
    ${CMAKE_SOURCE_DIR}/srvc-api
    ${CMAKE_SOURCE_DIR}/inc
    ${COMMON_CONFIG_PATH}
)
