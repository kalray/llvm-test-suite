list(APPEND LDFLAGS -lm)
set(FP_TOLERANCE 0.001)
set(Source
  Oscar.c
  Quicksort.c
)
if(NOT TEST_SUITE_BENCHMARKING_ONLY)
  list(APPEND Source IntMM.c)
endif()
if(NOT ARCH STREQUAL "K1C")
  list(APPEND Source
    FloatMM.c # 1500s timeout
    Bubblesort.c # 1500s timeout
    Queens.c # 1500s timeout
    Towers.c # 1500s timeout
    Puzzle.c # 1500s timeout
    Perm.c # 1500s timeout
    Treesort.c # 1500s timeout
    RealMM.c # regression from [k1c] Initial load/store packing pre-register allocation pass
  )
endif()
llvm_singlesource()
