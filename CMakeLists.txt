cmake_minimum_required(VERSION 3.8)
project(cpp_labb4)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp "Assignment 1/Sorting.cpp" "Assignment 1/Sorting.h" "Assignment 2/Sorting.cpp" "Assignment 2/Sorting.h" "Assignment 2/PersonReg.cpp" "Assignment 2/PersonReg.h" "Assignment 2/Person.cpp" "Assignment 2/Person.h")
add_executable(cpp_labb4 ${SOURCE_FILES})