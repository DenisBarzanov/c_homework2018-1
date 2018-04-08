set(SOURCE_FILES
        game/game.c
        xor/xor.c
        xor/xor.h
        unique_chars/unique_chars.c
        unique_chars/unique_chars.h
        nextSmallestAndPrevBiggest/prevBiggestAndNextSmallest.c
        nextSmallestAndPrevBiggest/prevBiggestAndNextSmallest.h
        stack/stack.c
        stack/stack.h
        array_stuff/array_stuff.c
        array_stuff/array_stuff.h
        util/vector.c
        util/vector.h)

add_library(source ${SOURCE_FILES})

target_include_directories (source PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
