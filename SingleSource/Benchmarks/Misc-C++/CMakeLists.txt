add_subdirectory(Large)

list(APPEND LDFLAGS -lm)
set(FP_ABSTOLERANCE 0.01)

if(ARCH STREQUAL "K1C")
  file(GLOB Source RELATIVE ${CMAKE_CURRENT_SOURCE_DIR} *.cpp)
  list(REMOVE_ITEM Source
    bigfib.cpp # clang-8: error: unable to execute command: Segmentation fault
    stepanov_container.cpp # clang-8: error: unable to execute command: Segmentation fault
    oopack_v1p8.cpp # 1500s timeout
    mandel-text.cpp # 1500s timeout
    stepanov_v1p2.cpp # 1500s timeout
  )
endif()

llvm_singlesource()
