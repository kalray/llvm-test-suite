if(NOT ARCH STREQUAL "KVX")
  add_subdirectory(EH) # FIXME (KVX): requires exceptions
endif()

llvm_singlesource(PREFIX "Regression-C++-")
