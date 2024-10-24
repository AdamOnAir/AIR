cmake_minimum_required(VERSION 3.29)
project(AIR C)

set(CMAKE_C_STANDARD 23)

add_library(Airlib_old SHARED airlib/old.c
        airlib/old.h)

add_executable(AIR main.c
        add/pad.h
        add/pad.c
        add/pad.c)

target_link_libraries(AIR PRIVATE Airlib_old)