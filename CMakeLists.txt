include(FetchContent)

cmake_minimum_required(VERSION 3.30)
project(str_copy C)

set(CMAKE_C_STANDARD 11)

add_library(str_copy STATIC str_copy.c)

if(NOT FLUENT_LIBC_RELEASE) # Manually add libraries only if not in release mode
    FetchContent_Declare(
            stdbool
            GIT_REPOSITORY https://github.com/rodrigoo-r/std_bool
            GIT_TAG        master
    )

    FetchContent_Declare(
            types
            GIT_REPOSITORY https://github.com/rodrigoo-r/types
            GIT_TAG        master
    )

    FetchContent_MakeAvailable(types)
    FetchContent_MakeAvailable(stdbool)

    target_include_directories(str_copy PRIVATE ${CMAKE_BINARY_DIR}/_deps/stdbool-src)
    target_link_libraries(str_copy PRIVATE stdbool)
    target_include_directories(str_copy PRIVATE ${CMAKE_BINARY_DIR}/_deps/types-src)
    target_link_libraries(str_copy PRIVATE types)
endif ()