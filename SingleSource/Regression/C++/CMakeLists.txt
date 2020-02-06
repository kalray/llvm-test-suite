if(NOT ARCH STREQUAL "K1C")
  add_subdirectory(EH)
endif()

list(APPEND LDFLAGS -lstdc++)
llvm_singlesource(PREFIX "Regression-C++-")
