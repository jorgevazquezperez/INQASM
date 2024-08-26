include_directories(
  .
  atn
  dfa
  misc
  internal
  support
  tree
  tree/pattern
  tree/xpath
)


file(GLOB libantlrcpp_SRC
  "*.cpp"
  "atn/*.cpp"
  "dfa/*.cpp"
  "misc/*.cpp"
  "internal/*.cpp"
  "support/*.cpp"
  "tree/*.cpp"
  "tree/pattern/*.cpp"
  "tree/xpath/*.cpp"
)

add_library(antlr4 SHARED ${libantlrcpp_SRC})

target_include_directories(antlr4 INTERFACE ${CMAKE_CURRENT_SOURCE_DIR})

if(CMAKE_SYSTEM_NAME MATCHES "Linux")
  target_link_libraries(antlr4 ${UUID_LIBRARIES})
elseif(APPLE)
  target_link_libraries(antlr4 ${COREFOUNDATION_LIBRARY})
endif()

if (CMAKE_CXX_COMPILER_ID MATCHES "MSVC")
  set(disabled_compile_warnings "/wd4251")
else()
  set(disabled_compile_warnings "-Wno-overloaded-virtual")
endif ()


if ("${CMAKE_CXX_COMPILER_ID}" MATCHES "Clang")
  set(disabled_compile_warnings "${disabled_compile_warnings} -Wno-dollar-in-identifier-extension -Wno-four-char-constants")
elseif("${CMAKE_CXX_COMPILER_ID}" MATCHES "GNU" OR "${CMAKE_CXX_COMPILER_ID}" MATCHES "Intel")
  set(disabled_compile_warnings "${disabled_compile_warnings} -Wno-multichar")
endif()

set(extra_share_compile_flags "")
if (WIN32)
  set(extra_share_compile_flags "-DANTLR4CPP_EXPORTS")
endif(WIN32)
if (CMAKE_CXX_COMPILER_ID MATCHES "MSVC")
  target_compile_options(antlr4 PRIVATE "/MD$<$<CONFIG:Debug>:d>")
endif()

set(static_lib_suffix "")
if (CMAKE_CXX_COMPILER_ID MATCHES "MSVC")
  set(static_lib_suffix "-static")
endif()

if (CMAKE_CXX_COMPILER_ID MATCHES "MSVC")
  set(extra_share_compile_flags "-DANTLR4CPP_EXPORTS -MP /wd4251")
endif()

set_target_properties(antlr4
                      PROPERTIES VERSION   ${ANTLR_VERSION}
                                 SOVERSION ${ANTLR_VERSION}
                                 OUTPUT_NAME antlr4-runtime
                                 COMPILE_FLAGS "${disabled_compile_warnings} ${extra_share_compile_flags}")

install(TARGETS antlr4
        DESTINATION lib)

install(DIRECTORY "" 
        DESTINATION "include/antlr4-runtime"
        COMPONENT dev 
        FILES_MATCHING PATTERN "*.h"
        )