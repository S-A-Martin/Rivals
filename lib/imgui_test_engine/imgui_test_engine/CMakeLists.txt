
add_library(imgui_test_engine
    imgui_capture_tool.cpp 
    imgui_te_context.cpp 
    imgui_te_coroutine.cpp 
    imgui_te_engine.cpp 
    imgui_te_exporters.cpp 
    imgui_te_perftool.cpp 
    imgui_te_ui.cpp 
    imgui_te_utils.cpp 
)

# target_compile_definitions(imgui_test_engine PUBLIC 
#     IMGUI_ENABLE_TEST_ENGINE=1
#     IMGUI_TEST_ENGINE_ENABLE_IMPLOT=1
#     IMGUI_TEST_ENGINE_ENABLE_CAPTURE=1
#     IMGUI_TEST_ENGINE_ENABLE_STD_FUNCION=1
#     IMGUI_TEST_ENGINE_ENABLE_COROUTINE_STDTHREAD_IMPL=1
# )

target_include_directories(imgui_test_engine PUBLIC
    ${PROJECT_SOURCE_DIR}/lib/imgui/
    ${PROJECT_SOURCE_DIR}/lib/imgui/backends/
    ${PROJECT_SOURCE_DIR}/lib/imgui/misc/cpp/
    ${PROJECT_SOURCE_DIR}/lib/implot/
    ${PROJECT_SOURCE_DIR}/lib/imgui_test_engine/
    ${PROJECT_SOURCE_DIR}/lib/imgui_test_engine/imgui_test_engine/
)

target_link_libraries(imgui_test_engine PUBLIC
       implot
)
target_link_directories(imgui_test_engine PUBLIC
       ${PROJECT_SOURCE_DIR}/lib/implot/
)

