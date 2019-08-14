if(NOT ARCH STREQUAL "K1C")
  add_subdirectory(covariance)
  add_subdirectory(correlation)
endif()
