cmake_minimum_required(VERSION 3.5)
project(coollib)

add_library(coollib STATIC include/coollib/coollib.h src/coollib.cpp)

target_include_directories(coollib PUBLIC
        $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
        $<INSTALL_INTERFACE:include>)

install(TARGETS coollib EXPORT coollib_export
        RUNTIME DESTINATION bin
        ARCHIVE DESTINATION lib
        LIBRARY DESTINATION lib
        INCLUDES DESTINATION include)

install(FILES
        include/coollib/coollib.h
        DESTINATION include/coollib)


install(EXPORT coollib_export
        DESTINATION lib/cmake/coollib)

