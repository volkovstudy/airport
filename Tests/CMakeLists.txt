cmake_minimum_required(VERSION 3.23)
project(airport-tests)

set(CMAKE_CXX_STANDARD 14)

add_executable(Tests tests.cpp ../Time/Time.cpp ../Time/Time.h tests.cpp TimeTests.cpp ../TimeConverter/TimeConverter.cpp ../TimeConverter/TimeConverter.h TimeConverterTests.cpp ../TimeAdder/TimeAdder.h ../TimeAdder/TimeAdder.cpp TimeAdderTests.cpp)