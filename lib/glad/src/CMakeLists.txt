add_library(glad glad.c)

target_include_directories(glad SYSTEM PUBLIC
    ../include/
    ../include/glad/
    ../include/KHR/
)