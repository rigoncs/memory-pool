cmake_minimum_required(VERSION 3.15)

project(RigonMemoryPool)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(RigonMemoryPool main.cpp
        main.cpp
        include/ThreadCache.h
        src/ThreadCache.cpp)
