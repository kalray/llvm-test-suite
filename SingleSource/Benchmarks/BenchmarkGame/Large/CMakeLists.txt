list(APPEND LDFLAGS -lm)
set(HASH_PROGRAM_OUTPUT 1)

if(ARCH STREQUAL "K1C")
  file(GLOB Source RELATIVE ${CMAKE_CURRENT_SOURCE_DIR} *.c)
  list(REMOVE_ITEM Source
    fasta.c # fatal error: 'err.h' file not found
  )
endif()

llvm_singlesource()
