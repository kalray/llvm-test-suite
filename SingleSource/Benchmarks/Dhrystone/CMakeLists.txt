list(APPEND LDFLAGS -lm)

if(ARCH STREQUAL "K1C")
  file(GLOB Source RELATIVE ${CMAKE_CURRENT_SOURCE_DIR} *.c)
  list(REMOVE_ITEM Source
    fldry.c # 1500s timeout
    dry.c # 1500s timeout
  )
endif()

llvm_singlesource()
