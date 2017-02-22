cmake_minimum_required(VERSION 3.5)
project(basic)

if (UNIX)
    set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++14 -Wall")
endif()

add_subdirectory(lib)

add_executable(basic main.cpp)
target_link_libraries(basic lib)
