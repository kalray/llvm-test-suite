add_subdirectory(Large)

list(APPEND LDFLAGS -lm)

if(ARCH STREQUAL "K1C")
  file(GLOB Source RELATIVE ${CMAKE_CURRENT_SOURCE_DIR} *.c)
  list(REMOVE_ITEM Source
    spectral-norm.c # 1500s timeout
    nsieve-bits.c # 1500s timeout
    recursive.c # 1500s timeout
    fannkuch.c # 1500s timeout
    partialsums.c # 1500s timeout
    n-body.c # 1500s timeout
    puzzle.c # 1500s timeout
  )
endif()

llvm_singlesource()
