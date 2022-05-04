cmake_minimum_required(VERSION 3.0.0)
project(heapSort VERSION 0.1.0)

add_library(
    SOURCE_FILES

    src/Heap.h
    src/Heap.cpp
)


add_executable(heapSort src/main.cpp)
target_link_libraries(${PROJECT_NAME} SOURCE_FILES)
