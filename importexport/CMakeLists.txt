cmake_minimum_required(VERSION 3.7)
project(importexport)

set(CMAKE_CXX_STANDARD 14)

add_subdirectory(coollib)

#set(INSTALL_LOCATION "${CMAKE_SOURCE_DIR}/out/usr/local")

#include(${INSTALL_LOCATION}/lib/cmake/coollib/coollib_export.cmake)


#add_library(coollib STATIC IMPORTED)
#set_target_properties(coollib PROPERTIES
#        INTERFACE_INCLUDE_DIRECTORIES "${INSTALL_LOCATION}/include"
#        IMPORTED_LOCATION "${INSTALL_LOCATION}/lib/libcoollib.a")

add_executable(importexport main.cpp)
target_link_libraries(importexport coollib)