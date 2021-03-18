cmake_minimum_required(VERSION 3.1)
project(multiple_files_with_cmake)

include_directories(include)

add_executable(main src/main.c src/arithmetic.c src/user_interface.c)