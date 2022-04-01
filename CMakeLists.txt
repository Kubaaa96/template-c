cmake_minimum_required(VERSION 3.14)
project(template-c VERSION 0.0.1 LANGUAGES C)
set(CMAKE_C_STANDARD 23)

set(CONAN_SYSTEM_INCLUDES ON)
include(${CMAKE_SOURCE_DIR}/cmake/CMakeUtils.cmake)

initialize_conan()

set(CMAKE_C_FLAGS "-Wno-unused-variable -Wno-maybe-uninitialized -Werror -Wall -Wextra -Wcast-align -Wunused -Wpedantic -Wconversion -Wsign-conversion -Wmisleading-indentation -Wduplicated-cond -Wduplicated-branches -Wlogical-op -Wnull-dereference -Wdouble-promotion")

add_executable(template-c src/main.c)


if (NOT CMAKE_BUILD_TYPE STREQUAL "Release")
    message("Not Release mode - testing enables")
    enable_testing()
    add_subdirectory(tests)
else ()
    message(STATUS "Release mode- testing disables")
endif ()