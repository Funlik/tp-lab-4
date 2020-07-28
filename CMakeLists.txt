cmake_minimum_required(VERSION 2.8)

# Make PROJECT_SOURCE_DIR, PROJECT_BINARY_DIR, and PROJECT_NAME available.
set(PROJECT_NAME task1)
set(PROJECT_NAME task1)
project(${PROJECT_NAME})

set(CMAKE_CXX_FLAGS "-g -Wall")


set(SRC_FILES ${PROJECT_SOURCE_DIR}/src/main.cpp
${PROJECT_SOURCE_DIR}/src/automata.cpp)
${PROJECT_SOURCE_DIR}/src/Automata.cpp)

set(CMAKE_CXX_STANDARD 11)

add_library(task_lib ${SRC_FILES})
add_executable(task ${SRC_FILES})
target_link_libraries(task task_lib)
add_library(task1_lib ${SRC_FILES})
add_executable(task1 ${PROJECT_SOURCE_DIR}/src/main.cpp)
target_link_libraries(task1 task1_lib)


################################