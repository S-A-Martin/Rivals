set(BINARY ${CMAKE_PROJECT_NAME}_bmrk)

add_compile_options(-Wall -Wextra -pedantic -Wunused-parameter -Werror)

add_executable(${BINARY} benchmark.cpp)


target_include_directories(${BINARY} PUBLIC
    ${PROJECT_SOURCE_DIR}/lib/benchmark/include/benchmark/

)

target_link_libraries(${BINARY} benchmark)