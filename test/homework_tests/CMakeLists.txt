include_directories(${gTest_SOURCE_DIR}/include ${gTest_SOURCE_DIR})

add_executable(runBasicTests
        game_tests.cpp xor_tests.cpp main.cpp unique_chars_tests.cpp stack_tests.cpp array_stuff_tests.cpp)

target_link_libraries(runBasicTests gtest gtest_main)
target_link_libraries(runBasicTests src.so)