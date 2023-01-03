cmake_minimum_required(VERSION 3.16)

project(Hello CXX)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

add_subdirectory(app)
add_subdirectory(lib)
