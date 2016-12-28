cmake_minimum_required(VERSION 3.0)
project(ulisp)

# Get all *.c source files in the src directory
file(GLOB SOURCES src/*.c)

# Add compilation target
add_executable(${PROJECT_NAME} ${SOURCES})

target_link_libraries(${PROJECT_NAME} readline)
