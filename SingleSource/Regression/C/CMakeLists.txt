list(APPEND LDFLAGS -lm)

if(ARCH STREQUAL "K1C")
  file(GLOB Source RELATIVE ${CMAKE_CURRENT_SOURCE_DIR} *.c)
  list(REMOVE_ITEM Source
    uint64_to_float.c # 1500s timeout
    2003-05-21-BitfieldHandling.c # fatal error: error in backend: Cannot select: t204: i64 = sign_extend_inreg t283, ValueType:ch:i1
  )
endif()

llvm_singlesource(PREFIX "Regression-C-")
