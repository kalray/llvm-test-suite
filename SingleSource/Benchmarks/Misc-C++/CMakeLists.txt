add_subdirectory(Large)

list(APPEND LDFLAGS -lm)
set(FP_ABSTOLERANCE 0.01)

if(ARCH STREQUAL "KVX")
  file(GLOB Source RELATIVE ${CMAKE_CURRENT_SOURCE_DIR} *.cpp)
  list(REMOVE_ITEM Source
    bigfib.cpp # clang-8: error: unable to execute command: Segmentation fault
    stepanov_container.cpp # clang-8: error: unable to execute command: Segmentation fault
  )
endif()

llvm_singlesource()
