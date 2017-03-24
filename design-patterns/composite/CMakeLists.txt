cmake_minimum_required(VERSION 3.5)
project(factory_method)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp Matryoshka.h Composite.h)
add_executable(composite ${SOURCE_FILES})