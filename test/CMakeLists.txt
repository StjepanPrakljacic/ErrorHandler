enable_testing()

add_executable(runTests ErrorHandler_test.cpp)

target_link_libraries(runTests PRIVATE gtest gtest_main ErrorHandler_lib)

target_include_directories(runTests PUBLIC
    ${PROJECT_SOURCE_DIR}/api
    ${COMMON_CONFIG_PATH}
)
