cmake_minimum_required(VERSION 4.0)
project(TD1)

set(CMAKE_CXX_STANDARD 20)

add_executable(TD1 main.cpp
        lifo.cpp
        lifo.h
        lifoLinked.cpp
        lifoLinked.h
        fifo.cpp
        fifo.h
        fifoCirc.cpp
        fifoCirc.h)
