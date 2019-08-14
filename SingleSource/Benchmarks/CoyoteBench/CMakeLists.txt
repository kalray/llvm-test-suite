list(APPEND LDFLAGS -lm -lstdc++)

if(ARCH STREQUAL "K1C")
  file(GLOB Source RELATIVE ${CMAKE_CURRENT_SOURCE_DIR} *.cpp)
  list(REMOVE_ITEM Source
    fftbench.cpp # clang-8: error: unable to execute command: Segmentation fault
  )
endif()

llvm_singlesource()
