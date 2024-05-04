cmake_minimum_required(VERSION 3.28)
project(stack_basics)

set(CMAKE_CXX_STANDARD 17)

add_executable(stack_basics main.cpp
        SortingNode.cpp
        SortingNode.h
        railway.h)
