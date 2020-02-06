list(APPEND CXXFLAGS -std=c++11)

if(NOT MIPS_IS_MIPS16_ENABLED)
  if(NOT ARCH STREQUAL "K1C")
    add_subdirectory(frame_layout)
  endif()
endif()
