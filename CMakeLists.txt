cmake_minimum_required(VERSION 3.2)
project(Rivals)

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED true)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

set(GLFW_BUILD_DOCS OFF CACHE BOOL "" FORCE)
set(GLFW_BUILD_TESTS OFF CACHE BOOL "" FORCE)
set(GLFW_BUILD_EXAMPLES OFF CACHE BOOL "" FORCE)
# set(CMAKE_VERBOSE_MAKEFILE ON)

add_subdirectory(src)
add_subdirectory(tst)
add_subdirectory(lib/googletest)

