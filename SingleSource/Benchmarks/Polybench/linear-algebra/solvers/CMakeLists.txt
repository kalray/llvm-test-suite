if(NOT ARCH STREQUAL "K1C")
  add_subdirectory(dynprog)
  add_subdirectory(durbin)
  add_subdirectory(gramschmidt)
endif()
add_subdirectory(lu)

