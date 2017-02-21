cmake_minimum_required(VERSION 3.6)
project(primes)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp Prime.cpp)
add_executable(primes ${SOURCE_FILES})
