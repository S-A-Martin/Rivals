set(BINARY ${CMAKE_PROJECT_NAME}_tst)

# add_compile_options(-Wall -Wextra -pedantic -Wunused-parameter -Werror)

add_executable(${BINARY} 
    ${PROJECT_SOURCE_DIR}/src/rivals_server.cpp 
    main.cpp 
    tests.cpp
)

target_include_directories(${BINARY} PUBLIC
    ${PROJECT_SOURCE_DIR}/lib/googletest/googletest/include/gtest/
    ${PROJECT_SOURCE_DIR}/lib/googletest/googlemock/include/gmock/
    ${PROJECT_SOURCE_DIR}/src/
    ${PROJECT_SOURCE_DIR}/../NovaSockets/src/
)

target_link_libraries(${BINARY} gtest gmock NovaSocket WS2_32)

target_link_directories(${BINARY} PUBLIC
       ${PROJECT_SOURCE_DIR}/../NovaSockets/build/src
)