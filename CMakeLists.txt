cmake_minimum_required(VERSION 3.0.0)
project(heapSort VERSION 0.1.0)

add_library(
    SOURCE_FILES

    src/Heap.h
    src/Heap.cpp

    src/Person.h
    src/Person.cpp

    src/Commands.h
    src/Commands.cpp

    src/List.h
    src/List.cpp
)


add_executable(heapSort src/main.cpp)
target_link_libraries(${PROJECT_NAME} SOURCE_FILES)
