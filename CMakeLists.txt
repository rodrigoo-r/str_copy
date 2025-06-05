include(FetchContent)

cmake_minimum_required(VERSION 3.12)
project(str_copy C)

set(CMAKE_C_STANDARD 11)

add_library(str_copy STATIC str_copy.c)

if(NOT FLUENT_LIBC_RELEASE) # Manually add libraries only if not in release mode
    FetchContent_Declare(
            types
            GIT_REPOSITORY https://github.com/rodrigoo-r/types
            GIT_TAG        master
    )

    FetchContent_MakeAvailable(types)

    target_include_directories(str_copy PRIVATE ${CMAKE_BINARY_DIR}/_deps/types-src)
    target_link_libraries(str_copy PRIVATE types)
endif ()