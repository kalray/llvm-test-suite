list(APPEND LDFLAGS -lm)

if(ARCH STREQUAL "KVX")
  file(GLOB Source RELATIVE ${CMAKE_CURRENT_SOURCE_DIR} *.cpp)
  list(REMOVE_ITEM Source
    fftbench.cpp # FIXME (KVX): requires exceptions + fails on T12929
  )
endif()

llvm_singlesource()
