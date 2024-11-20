cmake_minimum_required(VERSION 3.29)
project(SpeedTracker)

set(CMAKE_CXX_STANDARD 14)

include_directories(include)

add_executable(SpeedTracker
    include/SpeedTracker.h
    src/LiftTracker.cpp
    src/main.cpp)
