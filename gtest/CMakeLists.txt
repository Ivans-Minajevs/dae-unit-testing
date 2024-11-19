set(TARGET_NAME "FunctionsUtilGTest")

include(FetchContent)

FetchContent_Declare(
    googletest
    URL https://github.com/google/googletest/releases/download/v1.15.2/googletest-1.15.2.tar.gz
)
FetchContent_MakeAvailable(googletest)

list(APPEND TEST_SOURCES
    "FunctionsUtilTest.cpp")

add_executable(${TARGET_NAME} main.cpp ${TEST_SOURCES})

target_link_libraries(${TARGET_NAME} PRIVATE ${FUNCTIONS_UTIL_LIB_NAME} gtest)

include(GoogleTest)

enable_testing()
gtest_discover_tests(${TARGET_NAME})
