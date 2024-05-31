cmake_minimum_required(VERSION 3.20)
project(Cuqui VERSION 0.1.0 LANGUAGE CXX)

# Adding C++11 standard as required
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_STANDARD 17)
message(STATUS "C++ version ${CXX_STANDARD} configured.")

if(CMAKE_INSTALL_PREFIX_INITIALIZED_TO_DEFAULT)
  set(CMAKE_INSTALL_PREFIX "$ENV{HOME}/.cuqui" CACHE PATH "default install path" FORCE)
endif()

message(STATUS "${BoldGreen}Installing Cuqui to ${CMAKE_INSTALL_PREFIX}. Override with -DCMAKE_INSTALL_PREFIX=...${ColorReset}")
set(CMAKE_INSTALL_LIBDIR "${CMAKE_INSTALL_PREFIX}/lib")


add_compile_flags_if_supported(-Wno-attributes)
add_compile_flags_if_supported(-Wno-deprecated-declarations)
add_compile_flags_if_supported(-Wno-maybe-uninitialized)

add_subdirectory(external)