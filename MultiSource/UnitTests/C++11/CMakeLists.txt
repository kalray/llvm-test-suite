list(APPEND CXXFLAGS -std=c++11)

if(NOT MIPS_IS_MIPS16_ENABLED)
  if(NOT ARCH STREQUAL "KVX")
    # FIXME (KVX): requires exceptions + fails on T12929
  # list(APPEND CXXFLAGS -fexceptions)
  add_subdirectory(frame_layout)
  endif()
endif()
