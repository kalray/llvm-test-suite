if(ARCH MATCHES "x86" OR ARCH MATCHES "riscv" OR
   ARCH MATCHES "SystemZ" OR ARCH MATCHES "Mips")
  add_subdirectory(gcc-c-torture)
endif()
if(ARCH STREQUAL "KVX")
  # matrixTranspose.c is failing because of hardware loops. Disable
  # them until they are fixed. Ref T12797.
  list(APPEND CFLAGS -mllvm -disable-kvx-hwloops)
endif()

list(APPEND LDFLAGS -lm)
llvm_singlesource(PREFIX "Regression-C-")
