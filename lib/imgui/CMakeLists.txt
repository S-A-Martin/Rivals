add_library(imgui
    imgui.cpp
    imgui_draw.cpp
    imgui_demo.cpp
    imgui_tables.cpp
    imgui_widgets.cpp
    backends/imgui_impl_glfw.cpp
    backends/imgui_impl_opengl3.cpp
)

target_include_directories(imgui PUBLIC
    ${PROJECT_SOURCE_DIR}/lib/imgui/
    ${PROJECT_SOURCE_DIR}/lib/imgui/backends/
    ${PROJECT_SOURCE_DIR}/lib/imgui/misc/cpp/
    ${PROJECT_SOURCE_DIR}/lib/glad/include/
    ${PROJECT_SOURCE_DIR}/lib/glad/include/glad/
    ${PROJECT_SOURCE_DIR}/lib/glad/include/KHR/
    ${PROJECT_SOURCE_DIR}/lib/glfw/include/
    ${PROJECT_SOURCE_DIR}/lib/glfw/include/GLFW/
)

target_link_libraries(imgui PUBLIC
    glad 
    glfw
    opengl32
)