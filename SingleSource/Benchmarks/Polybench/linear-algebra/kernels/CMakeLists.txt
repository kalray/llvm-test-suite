if(NOT ARCH STREQUAL "K1C")
  if(NOT TEST_SUITE_BENCHMARKING_ONLY)
    add_subdirectory(3mm) # 1500s timeout
    add_subdirectory(gemm) # 1500s timeout
    add_subdirectory(2mm) # 1500s timeout
  endif()
  add_subdirectory(atax) # 1500s timeout
  add_subdirectory(trmm) # 1500s timeout
  add_subdirectory(syr2k) # 1500s timeout
  add_subdirectory(gesummv) # 1500s timeout
  add_subdirectory(trisolv) # 1500s timeout
  add_subdirectory(syrk) # 1500s timeout
  add_subdirectory(doitgen) # 1500s timeout
  add_subdirectory(symm) # 1500s timeout
  add_subdirectory(mvt) # 1500s timeout
  add_subdirectory(cholesky) # 1500s timeout
  add_subdirectory(bicg) # 1500s timeout
  add_subdirectory(gemver) # 1500s timeout
endif()
