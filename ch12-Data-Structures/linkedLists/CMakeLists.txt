cmake_minimum_required(VERSION 3.23)

project(main)

include_directories(include)

file(GLOB SOURCES "src/*.c")

add_executable(${PROJECT_NAME} ${SOURCES})
