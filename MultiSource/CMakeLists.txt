add_subdirectory(Benchmarks)
if(NOT ARCH STREQUAL "K1C")
  add_subdirectory(Applications)
endif()

if(NOT TEST_SUITE_BENCHMARKING_ONLY)
  add_subdirectory(UnitTests)
endif()

file(COPY lit.local.cfg DESTINATION "${CMAKE_CURRENT_BINARY_DIR}")
