cmake_minimum_required(VERSION 3.29)
project(cpplearning_experimentsrepo)

set(CMAKE_CXX_STANDARD 20)

add_executable(cpplearning_experimentsrepo main.cpp experiments/Calculator.cpp
        experiments/algorythms.cpp)
