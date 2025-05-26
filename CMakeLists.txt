cmake_minimum_required(VERSION 3.30)
project(str_copy C)

set(CMAKE_C_STANDARD 11)

add_library(str_copy STATIC include/fluent/str_copy/str_copy.c)
