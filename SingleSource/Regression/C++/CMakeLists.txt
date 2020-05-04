if(NOT ARCH STREQUAL "KVX")
  add_subdirectory(EH) # FIXME (KVX): requires exceptions
endif()

list(APPEND LDFLAGS -lstdc++)
llvm_singlesource(PREFIX "Regression-C++-")
