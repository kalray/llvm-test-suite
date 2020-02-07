list(APPEND LDFLAGS -lstdc++)

if(ARCH STREQUAL "KVX")
  file(GLOB Source RELATIVE ${CMAKE_CURRENT_SOURCE_DIR} *.cpp)
  list(REMOVE_ITEM Source
    except.cpp # clang-8: error: unable to execute command: Segmentation fault
  )
endif()

llvm_singlesource(PREFIX "Shootout-C++-")
