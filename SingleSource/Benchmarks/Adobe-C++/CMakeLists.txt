list(APPEND LDFLAGS -lm -lstdc++)
set(FP_ABSTOLERANCE 0.01)

if(ARCH STREQUAL "KVX")
  file(GLOB Source RELATIVE ${CMAKE_CURRENT_SOURCE_DIR} *.cpp)
  list(REMOVE_ITEM Source
    stepanov_vector.cpp # clang-8: error: unable to execute command: Segmentation fault
  )
endif()

llvm_singlesource()
