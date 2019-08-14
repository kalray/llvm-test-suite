list(APPEND LDFLAGS -lm)
set(Source
  ackermann.c
  nestedloop.c
  objinst.c
)
if(NOT TEST_SUITE_BENCHMARKING_ONLY)
  list(APPEND Source hello.c)
endif()
if(NOT ARCH STREQUAL "K1C")
  list(APPEND Source
    hash.c # 1500s timeout
    ary3.c # 1500s timeout
    sieve.c # 1500s timeout
    fib2.c # 1500s timeout
    lists.c # 1500s timeout
    random.c # 1500s timeout
    matrix.c # 1500s timeout
    strcat.c # 1500s timeout
    heapsort.c # 1500s timeout
    methcall.c # 1500s timeout
  )
endif()
llvm_singlesource(PREFIX Shootout-)
