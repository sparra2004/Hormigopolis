cmake_minimum_required(VERSION 3.30)
project(Proyecto)

set(CMAKE_CXX_STANDARD 20)

add_executable(Proyecto main.cpp
        src/Personaje.cpp
        src/Personaje.h)
