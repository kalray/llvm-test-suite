if(ARCH MATCHES "x86" OR ARCH MATCHES "riscv" OR
   ARCH MATCHES "SystemZ" OR ARCH MATCHES "Mips" OR
   ARCH MATCHES "AArch64" OR ARCH MATCHES "ARM")
  add_subdirectory(gcc-c-torture)
endif()

list(APPEND LDFLAGS -lm)

if(ARCH STREQUAL "K1C")
  file(GLOB Source RELATIVE ${CMAKE_CURRENT_SOURCE_DIR} *.c)
  list(REMOVE_ITEM Source
    uint64_to_float.c # 1500s timeout
  )
endif()

llvm_singlesource(PREFIX "Regression-C-")
