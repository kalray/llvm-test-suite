list(APPEND LDFLAGS -lm )
set(FP_TOLERANCE 0.001)
if(NOT ARCH STREQUAL "K1C")
  set(Source
    chomp.c # 1500s timeout
    queens.c # 1500s timeout
    misr.c # 1500s timeout
  )
endif()
if(NOT TEST_SUITE_BENCHMARKING_ONLY)
  list(APPEND Source exptree.c)
endif()
llvm_singlesource()
