add_subdirectory(inquir)

# Para el main

add_executable(cuqui main.cpp)
target_link_libraries(cuqui PUBLIC antlr4 inquir-compiler)
target_include_directories(cuqui PUBLIC
                          "${PROJECT_BINARY_DIR}"
                          )
