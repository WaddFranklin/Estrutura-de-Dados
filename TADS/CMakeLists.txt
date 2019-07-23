cmake_minimum_required(VERSION 3.14)
project(TADS C)

set(CMAKE_C_STANDARD 99)

add_executable(TADS main.c tree.c tree.h graph.c graph.h stack.c stack.h queue.c queue.h)