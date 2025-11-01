cmake_minimum_required(VERSION 3.22)
project(algobox C)

set(CMAKE_C_STANDARD 11)
set(CMAKE_C_EXTENSIONS OFF)

if (MSVC)
    add_compile_options(/W4)
else()
    add_compile_options(-Wall -Wextra -Wpedantic)
endif()

# библиотека
add_library(algobox STATIC
        src/mathx.c
        src/sort.c
        src/search.c
)
target_include_directories(algobox PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include)

# демо-прога (main.c)
add_executable(algobox_demo src/main.c)
target_link_libraries(algobox_demo PRIVATE algobox)

# --- тесты ---
enable_testing()

add_executable(test_math tests/test_math.c)
target_link_libraries(test_math PRIVATE algobox)
add_test(NAME test_math COMMAND test_math)

add_executable(test_sort tests/test_sort.c)
target_link_libraries(test_sort PRIVATE algobox)
add_test(NAME test_sort COMMAND test_sort)

add_executable(test_search tests/test_search.c)   # <-- только этот файл
target_link_libraries(test_search PRIVATE algobox)
add_test(NAME test_search COMMAND test_search)
