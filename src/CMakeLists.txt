set(BINARY ${CMAKE_PROJECT_NAME})

# add_compile_options(-Wall -Wextra -pedantic -Wunused-parameter -Werror)

add_executable(${BINARY}
       rivals_server.cpp
       rivals_server_main.cpp
)

target_include_directories(${BINARY} PUBLIC
       ${PROJECT_SOURCE_DIR}/src/
       ${PROJECT_SOURCE_DIR}/../NovaSockets/src/
)



target_link_libraries(${BINARY} gtest gmock NovaSocket WS2_32)

target_link_directories(${BINARY} PUBLIC
       ${PROJECT_SOURCE_DIR}/../NovaSockets/build/src
)
