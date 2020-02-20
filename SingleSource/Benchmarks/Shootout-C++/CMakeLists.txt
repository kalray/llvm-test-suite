add_subdirectory(EH)

list(APPEND CXXFLAGS -Wno-deprecated)
set(FP_TOLERANCE 0.00000001)
set(Source
  ackermann.cpp
  ary.cpp
  ary2.cpp
  ary3.cpp
  fibo.cpp
  hash.cpp
  hash2.cpp
  heapsort.cpp
  lists.cpp
  lists1.cpp
  matrix.cpp
  methcall.cpp
  moments.cpp
  nestedloop.cpp
  objinst.cpp
  random.cpp
  sieve.cpp
  strcat.cpp
)
if(NOT TEST_SUITE_BENCHMARKING_ONLY)
  list(APPEND Source
    hello.cpp
    reversefile.cpp
    spellcheck.cpp
    sumcol.cpp
    wc.cpp
    wordfreq.cpp
  )
endif()
list(APPEND LDFLAGS -lstdc++ -lm)
if(TARGET_OS STREQUAL "Darwin")
  # Necessary for ackermann on iOS
  list(APPEND LDFLAGS -Xlinker -stack_size -Xlinker 0x800000)
endif()
if(ARCH STREQUAL "K1C")
  list(REMOVE_ITEM Source
    wordfreq.cpp # clang-8: error: unable to execute command: Segmentation fault
    lists1.cpp # clang-8: error: unable to execute command: Segmentation fault
    ary.cpp # clang-8: error: unable to execute command: Segmentation fault
    hash2.cpp # clang-8: error: unable to execute command: Segmentation fault
    spellcheck.cpp # clang-8: error: unable to execute command: Segmentation fault
    sieve.cpp # clang-8: error: unable to execute command: Segmentation fault
    ary2.cpp # clang-8: error: unable to execute command: Segmentation fault
    reversefile.cpp # clang-8: error: unable to execute command: Segmentation fault
    ary3.cpp # clang-8: error: unable to execute command: Segmentation fault
    strcat.cpp # clang-8: error: unable to execute command: Segmentation fault
    hash.cpp # clang-8: error: unable to execute command: Segmentation fault
    lists.cpp # clang-8: error: unable to execute command: Segmentation fault
    moments.cpp # clang-8: error: unable to execute command: Segmentation fault
  )
  if(CMAKE_BUILD_TYPE STREQUAL "Debug")
    list(REMOVE_ITEM Source
      objinst.cpp
      methcall.cpp
    )
  endif()
endif()
llvm_singlesource(PREFIX Shootout-C++-)
