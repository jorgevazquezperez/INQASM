add_subdirectory(inquir)

# Para el main

add_executable(inqasm main.cpp)
target_link_libraries(inqasm PUBLIC antlr4 inquir-compiler)
target_include_directories(inqasm PUBLIC
                          "${PROJECT_BINARY_DIR}"
                          )
