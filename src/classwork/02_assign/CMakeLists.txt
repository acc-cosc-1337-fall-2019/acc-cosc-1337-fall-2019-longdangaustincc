cmake_minimum_required (VERSION 3.8)
project(cw_02_library)

add_library(cw_02_library "calculations.cpp" "calculations.h")
add_executable(cw_02_exe "main.cpp" "calculations.cpp")




