cmake_minimum_required(VERSION 3.14)
project(template-c C)

set(CMAKE_C_STANDARD 23)
set(CMAKE_C_FLAGS "-Wno-unused-variable -Wno-maybe-uninitialized -Werror -Wall -Wextra -Wcast-align -Wunused -Wpedantic -Wconversion -Wsign-conversion -Wmisleading-indentation -Wduplicated-cond -Wduplicated-branches -Wlogical-op -Wnull-dereference -Wdouble-promotion")

add_executable(template-c src/main.c)
