file(COPY lit.local.cfg DESTINATION ${CMAKE_CURRENT_BINARY_DIR})

add_subdirectory(Builtins)
if(NOT ARCH STREQUAL "K1C")
  add_subdirectory(libs)
  add_subdirectory(XRay)
  add_subdirectory(LCALS)
  add_subdirectory(harris)
  add_subdirectory(ImageProcessing)
  add_subdirectory(LoopInterchange)
endif()
>>>>>>> [k1c] Initial testsuite settings
add_subdirectory(MemFunctions)
