cmake_minimum_required(VERSION 3.7)
project(commands)

set(CMAKE_CXX_STANDARD 14)
#-std=c++14

set(CMAKE_CXX_VISIBILITY_PRESET hidden)
# -fvisibility=hidden with GCC, none with cl.exe

add_compile_options(-Wall -Wextra)

add_definitions(DEF_1 DEF_2)
# -DDEF_1 -DDEF_2

add_executable(commands main.cpp)