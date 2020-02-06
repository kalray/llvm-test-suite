list(APPEND LDFLAGS -lm)
set(FP_ABSTOLERANCE 0.01)

if(ARCH STREQUAL "K1C")
  file(GLOB Source RELATIVE ${CMAKE_CURRENT_SOURCE_DIR} *.cpp)
  list(REMOVE_ITEM Source
    stepanov_vector.cpp # clang-8: error: unable to execute command: Segmentation fault
  )
endif()

llvm_singlesource()
