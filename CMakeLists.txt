cmake_minimum_required(VERSION 3.9)
project(goodao C)

set(CMAKE_C_STANDARD 11)

add_executable(goodao main.c common/type.h common/serialize.h common/serialize.c)