cmake_minimum_required(VERSION 3.5)
project(file_glob)

set(CMAKE_CXX_STANDARD 14)

set(SOURCE_FILES main.cpp file.cpp)
#file(GLOB SOURCE_FILES *.cpp)

#set(HEADER_FILES file.h)
file(GLOB HEADER_FILES *.h)

#add_executable(file_glob ${SOURCE_FILES})
add_executable(file_glob ${HEADER_FILES} ${SOURCE_FILES})