#include_directories(include/)
add_library(lib src/lib.cpp)
target_include_directories(lib PUBLIC include/)