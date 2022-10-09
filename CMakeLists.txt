cmake_minimum_required(VERSION 3.23)
project(airport)

set(CMAKE_CXX_STANDARD 14)

add_executable(airport main.cpp Time/Time.cpp Time/Time.h TimeConverter/TimeConverter.cpp TimeConverter/TimeConverter.h)
