set(BINARY ${CMAKE_PROJECT_NAME})

# add_compile_options(-Wall -Wextra -pedantic -Wunused-parameter -Werror)

add_executable(${BINARY}
       server.cpp
       server_main.cpp
)

target_include_directories(${BINARY} PUBLIC
       ${PROJECT_SOURCE_DIR}/src/
)



target_link_libraries(${BINARY} PUBLIC
)
target_link_directories(${BINARY} PUBLIC
)

