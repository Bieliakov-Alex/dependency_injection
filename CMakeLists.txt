cmake_minimum_required(VERSION 3.0.0)
project(dependency_injection)

set(CMAKE_CXX_STANDARD 11)
include_directories(${CMAKE_CURRENT_SOURCE_DIR}/include)
set(CMAKE_EXPORT_COMPILE_COMMANDS)
add_executable(${CMAKE_PROJECT_NAME} src/V8Engine.cpp
                                     src/Car.cpp)
