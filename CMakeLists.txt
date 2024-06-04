cmake_minimum_required(VERSION 3.20)
project(Prueba VERSION 0.1.0 LANGUAGES CXX)

# Adding C++11 standard as required
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_STANDARD 17)
message(STATUS "C++ version ${CXX_STANDARD} configured.")

if(CMAKE_INSTALL_PREFIX_INITIALIZED_TO_DEFAULT)
  set(CMAKE_INSTALL_PREFIX "$ENV{HOME}/.prueba" CACHE PATH "default install path" FORCE)
endif()

message(STATUS "${BoldGreen}Installing Cuqui to ${CMAKE_INSTALL_PREFIX}. Override with -DCMAKE_INSTALL_PREFIX=...${ColorReset}")
set(CMAKE_INSTALL_LIBDIR "${CMAKE_INSTALL_PREFIX}/lib")

set(CMAKE_MODULE_PATH ${CMAKE_MODULE_PATH} "${CMAKE_SOURCE_DIR}/cmake")
include(cxxFlags)

add_compile_flags_if_supported(-Wno-attributes)
add_compile_flags_if_supported(-Wno-deprecated-declarations)
add_compile_flags_if_supported(-Wno-maybe-uninitialized)

add_subdirectory(extern)
add_subdirectory(cuqui)

# Para el main

add_executable(Tutorial main_antlr.cpp)
target_link_libraries(Tutorial PUBLIC antlr4 inquir-compiler)

# add the binary tree to the search path for include files
# so that we will find TutorialConfig.h
target_include_directories(Tutorial PUBLIC
                          "${PROJECT_BINARY_DIR}"
                          )

