cmake_minimum_required(VERSION 3.5)
project(adapter)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp CRUDNative.h UserCRUDNative.cpp UserCRUDNative.h UserCRUDREST.cpp UserCRUDREST.h UserCRUDRESTAdapter.cpp UserCRUDRESTAdapter.h)
add_executable(adapter ${SOURCE_FILES})