list(APPEND LDFLAGS -lm )
set(FP_TOLERANCE 0.001)
set(Source
  lowercase.c
  mandel.c
  oourafft.c
)
if(NOT ARCH STREQUAL "K1C")
  if(NOT ARCH STREQUAL "PowerPC" OR NOT TARGET_OS STREQUAL "Darwin")
    list(APPEND Source dt.c)
  endif()
  list(APPEND Source
    revertBits.c # 1500s timeout
    perlin.c # 1500s timeout
    flops-4.c # 1500s timeout
    flops-5.c # 1500s timeout
    richards_benchmark.c # 1500s timeout
    evalloop.c # 1500s timeout
    pi.c # 1500s timeout
    flops-1.c # 1500s timeout
    flops-2.c # 1500s timeout
    flops-7.c # 1500s timeout
    mandel-2.c # 1500s timeout
    matmul_f64_4x4.c # 1500s timeout
    himenobmtxpa.c # 1500s timeout
    salsa20.c # 1500s timeout
    flops-3.c # 1500s timeout
    flops-6.c # 1500s timeout
    flops.c # 1500s timeout
    flops-8.c # 1500s timeout
    whetstone.c # 1500s timeout
    fp-convert.c # 1500s timeout
    ffbench.c # 1500s timeout
    ReedSolomon.c # 1500s timeout
    fbench.c # 1500s timeout
)
endif()
if(ARCH STREQUAL "K1C")
  list(REMOVE_ITEM Source
    mandel.c # error: '__builtin_choose_expr' requires a constant expression
  )
endif()

llvm_singlesource()
