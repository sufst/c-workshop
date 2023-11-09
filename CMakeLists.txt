cmake_minimum_required(VERSION 3.13)

set(FW_NAME workshop)
set(CMAKE_EXPORT_COMPILE_COMMANDS TRUE)

project(${FW_NAME}
  VERSION 0.1.0.0)

add_executable(${FW_NAME})

include_directories(
  ${PROJECT_SOURCE_DIR}/inc
)

target_sources(${FW_NAME} PRIVATE
  src/gpio.c
  # List the .c files here, e.g. src/workshop.c
)

