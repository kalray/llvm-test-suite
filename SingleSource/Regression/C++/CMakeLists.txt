if(NOT ARCH STREQUAL "K1C")
  add_subdirectory(EH)
endif()

llvm_singlesource(PREFIX "Regression-C++-")
