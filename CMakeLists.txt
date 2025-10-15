cmake_minimum_required(VERSION 4.0)
project(TD1)

set(CMAKE_CXX_STANDARD 20)

add_executable(TD1 TD1/main.cpp
        TD1/lifo.cpp
        TD1/lifo.h
        TD1/lifoLinked.cpp
        TD1/lifoLinked.h
        TD1/fifo.cpp
        TD1/fifo.h
        TD1/fifoCirc.cpp
        TD1/fifoCirc.h
        TD1/fifoLinked.cpp
        TD1/fifoLinked.h
        TD1/tasMax.cpp
        TD1/tasMax.h)
