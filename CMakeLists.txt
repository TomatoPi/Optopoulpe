

cmake_minimum_required(VERSION 3.10)
project(Optopoulpe VERSION 0.0.1)

enable_testing()

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_subdirectory(Controler)
add_subdirectory(TCP-Bridge)
add_subdirectory(Driver)