cmake_minimum_required(VERSION 3.13)

set(FW_NAME workshop)
set(CMAKE_EXPORT_COMPILE_COMMANDS TRUE)

project(${FW_NAME}
  VERSION 0.1.0.0)

add_executable(${FW_NAME})

target_sources(${FW_NAME}
  PRIVATE src/workshop.c)

