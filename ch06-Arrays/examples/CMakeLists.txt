#cmake_minimum_required(VERSION 3.22)
#
#project(main VERSION 1.0)
#
#include_directories(${CMAKE_CURRENT_SOURCE_DIR}/inc)
#
#include_directories("${PROJECT_BINARY_DIR}")
#
#file(GLOB SOURCES "src/*.c")

#set(CMAKE_CXX_STANDARD 20)
#set(CMAKE_CXX_STANDARD_REQUIRED NO)
#set(CMAKE_BUILD_TYPE debug)
#set(CMAKE_CXX_EXTENSIONS NO)

#add_executable(${PROJECT_NAME} ${SOURCES})

cmake_minimum_required(VERSION 3.22)

set(program_title "fig06_05")

project(${program_title})

#include_directories("inc")

add_executable(${PROJECT_NAME} src/${program_title}.c)
