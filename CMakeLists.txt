cmake_minimum_required(VERSION 3.17)
project(CPP_04)

set(CMAKE_CXX_STANDARD 98)

add_executable(ex00 ex00/main.cpp ex00/Animal.cpp ex00/Cat.cpp ex00/Dog.cpp)
add_executable(ex01 ex01/main.cpp ex01/Animal.cpp ex01/Cat.cpp ex01/Dog.cpp ex01/Brain.cpp)
add_executable(ex02 ex02/main.cpp ex02/Animal.cpp ex02/Cat.cpp ex02/Dog.cpp ex02/Brain.cpp)