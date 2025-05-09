cmake_minimum_required(VERSION 3.30)
project(Proyecto)

set(CMAKE_CXX_STANDARD 20)

add_executable(Proyecto main.cpp
        src/Personaje.cpp
        src/Personaje.h
        src/Ray.cpp
        src/Ray.h
        src/ReyHongo.cpp
        src/ReyHongo.h
        src/Npc.cpp
        src/Npc.h
        src/CentroDeControl.cpp
        src/CentroDeControl.h)
