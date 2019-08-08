if(ARCH STREQUAL "K1C")
#  if(NOT "${CMAKE_CXX_COMPILER_ID}" STREQUAL "K1COSGCC")
#    add_subdirectory(Benchmarks)
#  endif()
else()
  add_subdirectory(Benchmarks)
endif()

if(NOT TEST_SUITE_BENCHMARKING_ONLY)
  add_subdirectory(UnitTests)
  add_subdirectory(Regression)
endif()

file(COPY lit.local.cfg DESTINATION "${CMAKE_CURRENT_BINARY_DIR}")
