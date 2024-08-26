add_subdirectory(inquir)

# Para el main

add_executable(Tutorial main.cpp)
target_link_libraries(Tutorial PUBLIC antlr4 inquir-compiler)

# add the binary tree to the search path for include files
# so that we will find TutorialConfig.h
target_include_directories(Tutorial PUBLIC
                          "${PROJECT_BINARY_DIR}"
                          )
