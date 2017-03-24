cmake_minimum_required(VERSION 3.5)
project(factory_method)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp Computer.h ComputerBuilder.h SuperComputerBuilder.h Director.h)
add_executable(builder_method ${SOURCE_FILES})