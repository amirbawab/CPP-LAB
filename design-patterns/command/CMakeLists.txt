cmake_minimum_required(VERSION 3.5)
project(command)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp Command.h Controller.cpp Controller.h Car.cpp Car.h LeftCommand.cpp LeftCommand.h RightCommand.cpp RightCommand.h BackwardCommand.cpp BackwardCommand.h ForwardCommand.cpp ForwardCommand.h)
add_executable(command ${SOURCE_FILES})
