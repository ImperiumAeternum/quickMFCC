cmake_minimum_required(VERSION 3.1)
project(mfccExample)
set(CMAKE_CXX_STANDARD 20)
add_executable(mfccExample example.cpp ../quickmfcc.cpp ../quickmfcc.h)
SET(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++20 -O3 -march=native")
