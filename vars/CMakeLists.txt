cmake_minimum_required(VERSION 3.5)
project(vars)

set(VAR1 0)
set(VAR2 "Hello")
message("VAR1 = ${VAR1}, VAR2 = ${VAR2}")

message("PWD = $ENV{PWD}")
set(ENV{MYVAR} "ENV_VAR")
message("MYVAR = $ENV{MYVAR}")

if (VAR_FROM_PARAMS)
    message("VAR_FROM_PARAMS = ${VAR_FROM_PARAMS}")
endif()

set(INDIRECTION VAR_FROM_PARAMS)

if (${INDIRECTION})
    message("VAR_FROM_PARAMS again = ${VAR_FROM_PARAMS}")
endif()

set(CACHE_VAR1 "hello from cache" CACHE STRING "desc")
#set(CACHE_VAR1 "hello from cache" CACHE STRING "desc" FORCE)
message("CACHE_VAR0 = ${CACHE_VAR0}, CACHE_VAR1 = ${CACHE_VAR1}")

add_executable(vars main.cpp)