cmake_minimum_required(VERSION 3.24)
project(UnitTesting_Exercise)

set(CMAKE_CXX_STANDARD 17)

include_directories("src/")

add_subdirectory(src)

enable_testing()
add_subdirectory(gtest)
