list(APPEND LDFLAGS -lm)
set(FP_ABSTOLERANCE 0.01)
set(HASH_PROGRAM_OUTPUT 1)

if(ARCH STREQUAL "K1C")
  file(GLOB Source RELATIVE ${CMAKE_CURRENT_SOURCE_DIR} *.cpp)
  list(REMOVE_ITEM Source
    sphereflake.cpp # error: redefinition of 'infinity' as different kind of symbol
    ray.cpp # error: redefinition of 'infinity' as different kind of symbol
  )
endif()

llvm_singlesource()
