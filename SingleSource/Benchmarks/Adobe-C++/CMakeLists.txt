list(APPEND LDFLAGS -lm -lstdc++)
set(FP_ABSTOLERANCE 0.01)

if(ARCH STREQUAL "K1C")
  file(GLOB Source RELATIVE ${CMAKE_CURRENT_SOURCE_DIR} *.cpp)
  list(REMOVE_ITEM Source
    stepanov_vector.cpp # clang-8: error: unable to execute command: Segmentation fault
    functionobjects.cpp # 1500s timeout
    loop_unroll.cpp # 1500s timeout
    simple_types_loop_invariant.cpp # 1500s timeout
    simple_types_constant_folding.cpp # 1500s timeout
    stepanov_abstraction.cpp # 1500s timeout
  )
endif()

llvm_singlesource()
