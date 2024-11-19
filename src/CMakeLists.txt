set(TARGET_NAME "FunctionsUtil")
set(FUNCTIONS_UTIL_LIB_NAME "FunctionsUtilLib")
set(FUNCTIONS_UTIL_LIB_NAME ${FUNCTIONS_UTIL_LIB_NAME} PARENT_SCOPE)


list(APPEND SOURCES 
    "FunctionsUtil.cpp"
    "FunctionsUtil.h")

add_library( ${FUNCTIONS_UTIL_LIB_NAME} STATIC ${SOURCES})
add_executable(${TARGET_NAME} "main.cpp")
target_link_libraries(${TARGET_NAME} PRIVATE ${FUNCTIONS_UTIL_LIB_NAME})
