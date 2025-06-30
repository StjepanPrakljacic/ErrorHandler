cmake_minimum_required(VERSION 3.10)
project(ErrorHandler)

set(COMMON_CONFIG_PATH "" CACHE PATH "Path to common-config include directory")

include(FetchContent)

if(NOT COMMON_CONFIG_PATH OR COMMON_CONFIG_PATH STREQUAL "")
    message(STATUS "COMMON_CONFIG_PATH not set, fetching common-config from GitHub")
    FetchContent_Declare(
        common_config
        GIT_REPOSITORY https://github.com/StjepanPrakljacic/common-config.git
        GIT_TAG main
    )
    FetchContent_MakeAvailable(common_config)
    set(COMMON_CONFIG_PATH ${common_config_SOURCE_DIR}/inc CACHE PATH "Path to common-config includes" FORCE)
else()
    message(STATUS "Using provided COMMON_CONFIG_PATH: ${COMMON_CONFIG_PATH}")
endif()

message(STATUS "COMMON_CONFIG_PATH is set to: ${COMMON_CONFIG_PATH}")

FetchContent_Declare(
    googletest
    GIT_REPOSITORY https://github.com/google/googletest.git
    GIT_TAG release-1.11.0
)
FetchContent_MakeAvailable(googletest)

add_subdirectory(src)
add_subdirectory(test)
