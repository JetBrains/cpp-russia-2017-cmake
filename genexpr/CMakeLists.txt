cmake_minimum_required(VERSION 3.5)
project(genexpr)

add_executable(genexpr main.cpp other.c)

# CMake code is interpreted during configure phase, so
# most CMake variables are available here, like
message("${CMAKE_CURRENT_BINARY_DIR}")

# However, generator expression are expanded during generate phase, So you can't print them here, e.g.
message("$<TARGET_FILE:genexpr>")
message($<TARGET_FILE:genexpr>)
message(<TARGET_FILE:genexpr>)

# However, they will be available after generation phase (e.g. during the build)
add_custom_command(TARGET genexpr POST_BUILD
                   COMMAND ${CMAKE_COMMAND} -E
                   echo "Actual target file is $<TARGET_FILE:genexpr>")

# Note: this is not portable
target_compile_options(genexpr
  PRIVATE $<$<COMPILE_LANGUAGE:CXX>:-fno-exceptions>
)


