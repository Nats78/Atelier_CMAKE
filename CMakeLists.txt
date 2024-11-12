cmake_minimum_required(VERSION 3.10)

project(calculator)

set(CMAKE_C_STANDARD 99)

add_executable(calculator src/main.c src/lib/calculator.c)

find_package(CMocka REQUIRED)

add_executable(test_calculator tests/test_calculator.c)
target_link_libraries(test_calculator PRIVATE CMocka)
add_test(NAME test_square COMMAND test_calculator)
