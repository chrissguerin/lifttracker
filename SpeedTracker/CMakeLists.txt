cmake_minimum_required(VERSION 3.29)
project(SpeedTracker)

set(CMAKE_CXX_STANDARD 17)

include_directories(include)

add_executable(SpeedTracker
        src/SensorManager.cpp
        src/BLEManager.cpp
        src/DataProcessor.cpp
        src/main.cpp)
