cmake_minimum_required(VERSION 3.10)
project(c_homework)

set(CMAKE_C_STANDARD 11)
set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -Wall -std=c11")
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")
set(SOURCE_FILES
        main.c)

add_executable(homework_run ${SOURCE_FILES})

add_subdirectory(src)
add_subdirectory(test)

target_link_libraries(homework_run src.so)