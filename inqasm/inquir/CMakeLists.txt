set(LIBRARY_NAME inquir-compiler)

file(GLOB SRC
          *.cpp
          generated/*.cpp)

#usfunctiongetresourcesource(TARGET ${LIBRARY_NAME} OUT SRC)
#usfunctiongeneratebundleinit(TARGET ${LIBRARY_NAME} OUT SRC)

add_library(${LIBRARY_NAME} SHARED ${SRC})

target_include_directories(${LIBRARY_NAME}
                            PUBLIC generated ${CMAKE_CURRENT_SOURCE_DIR})
                                  
target_link_libraries(${LIBRARY_NAME}
                      PUBLIC antlr4)

#[=[
set(_bundle_name inquir_compiler)
set_target_properties(${LIBRARY_NAME}
                      PROPERTIES COMPILE_DEFINITIONS
                                 US_BUNDLE_NAME=${_bundle_name}
                                 US_BUNDLE_NAME
                                 ${_bundle_name})

usfunctionembedresources(TARGET
                         ${LIBRARY_NAME}
                         WORKING_DIRECTORY
                         ${CMAKE_CURRENT_SOURCE_DIR}
                         FILES
                         manifest.json)


if(APPLE)
  set_target_properties(${LIBRARY_NAME}
                        PROPERTIES INSTALL_RPATH "@loader_path/../lib")
  set_target_properties(${LIBRARY_NAME}
                        PROPERTIES LINK_FLAGS "-undefined dynamic_lookup")
else()
  set_target_properties(${LIBRARY_NAME}
                        PROPERTIES INSTALL_RPATH "$ORIGIN/../lib")
  set_target_properties(${LIBRARY_NAME} PROPERTIES LINK_FLAGS "-shared")
endif()

if(XACC_BUILD_TESTS)
  add_subdirectory(tests)
  add_subdirectory(accelerator/json/tests)
endif()
]=]

install(TARGETS ${LIBRARY_NAME} DESTINATION lib)

install(DIRECTORY "" 
        DESTINATION "include/inquir"
        COMPONENT dev 
        FILES_MATCHING PATTERN "*.h"
        )