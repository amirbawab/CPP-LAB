cmake_minimum_required(VERSION 3.5)
project(factory_method)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp Frame.h SolidFrame.cpp SolidFrame.h DashedFrame.cpp DashedFrame.h DottedFrame.cpp DottedFrame.h SolidFrameFactory.h DottedFrameFactory.h DashedFrameFactory.h)
add_executable(abstract_factory_method ${SOURCE_FILES})