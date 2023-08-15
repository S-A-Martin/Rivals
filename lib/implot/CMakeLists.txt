add_library(implot 
    implot_demo.cpp 
    implot_items.cpp 
    implot.cpp
)

target_include_directories(implot PUBLIC
    ${PROJECT_SOURCE_DIR}/lib/implot/
    ${PROJECT_SOURCE_DIR}/lib/imgui/
)