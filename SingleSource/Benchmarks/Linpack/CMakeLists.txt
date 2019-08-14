list(APPEND LDFLAGS -lm)
set(FP_TOLERANCE 0.0001)

if(ARCH STREQUAL "K1C")
  file(GLOB Source RELATIVE ${CMAKE_CURRENT_SOURCE_DIR} *.c)
  list(REMOVE_ITEM Source
    linpack-pc.c # 1500s timeout
  )
endif()

llvm_singlesource()
