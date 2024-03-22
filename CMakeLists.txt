cmake_minimum_required(VERSION 3.28)
project(RedOS C)

set(CMAKE_C_STANDARD 23)

add_executable(RedOS src/main.c
        inc/DataStructure.h)
