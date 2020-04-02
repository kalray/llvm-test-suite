if(NOT ARCH STREQUAL "KVX")
  add_subdirectory(EH)
endif()
if(ARCH STREQUAL "KVX" AND CMAKE_BUILD_TYPE STREQUAL "Debug")
  file(GLOB Source RELATIVE ${CMAKE_CURRENT_SOURCE_DIR} *.cpp)
  list(REMOVE_ITEM Source
    2003-09-29-NonPODsByValue.cpp
    2003-06-13-Crasher.cpp
    global_ctor.cpp
    short_circuit_dtor.cpp
    fixups.cpp
  )
endif()

list(APPEND LDFLAGS -lstdc++)
llvm_singlesource(PREFIX "Regression-C++-")
