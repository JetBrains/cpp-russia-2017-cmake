cmake_minimum_required(VERSION 3.5)
project(findpkg2)

set(CMAKE_CXX_STANDARD 14)

# Boost
add_executable(boost main.cpp)
find_package(Boost REQUIRED COMPONENTS filesystem)
#target_include_directories(boost PRIVATE ${Boost_INCLUDE_DIR})
#target_link_libraries(boost ${Boost_LIBRARIES})
target_link_libraries(boost Boost::filesystem)

# Google test
set(BUILD_GTEST ON)
set(BUILD_GMOCK OFF)
add_subdirectory(${CMAKE_SOURCE_DIR}/3rdparty/googletest)
add_executable(findpkg2_test test.cpp)
target_link_libraries(findpkg2_test gtest_main)

# Qt
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_INCLUDE_CURRENT_DIR ON)
add_executable(widget widget.cpp widget.h)
find_package(Qt5Widgets)
target_link_libraries(widget Qt5::Widgets)

#if (WIN32)
#    add_custom_command(
#        TARGET widget POST_BUILD q
#        COMMAND ${CMAKE_COMMAND} -E copy_if_different
#            $<TARGET_FILE:Qt5::Widgets>
#            $<TARGET_FILE_DIR:widget>
#    )
#endif()
