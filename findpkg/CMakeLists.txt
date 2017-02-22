cmake_minimum_required(VERSION 3.5)
project(findpkg)

set(CMAKE_CXX_STANDARD 14)

list(APPEND CMAKE_MODULE_PATH "${CMAKE_SOURCE_DIR}/cmake/modules/")

find_package(Curses REQUIRED)
find_package(LibXML++ REQUIRED)

include_directories(${LibXML++_INCLUDE_DIRS} ${CURSES_INCLUDE_PATH})
add_executable(findpkg main.cpp)
target_link_libraries(findpkg ${CURSES_LIBRARIES} ${LibXML++_LIBRARIES})
