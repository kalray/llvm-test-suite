if(NOT ARCH STREQUAL "K1C")
  add_subdirectory(floyd-warshall) # 1500s timeout
  add_subdirectory(reg_detect) # 1500s timeout
endif()
