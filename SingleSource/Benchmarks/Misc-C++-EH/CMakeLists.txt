list(APPEND CXXFLAGS -pthread)
list(APPEND LDFLAGS -lm -pthread)

if(ARCH STREQUAL "KVX")
  file(GLOB Source RELATIVE ${CMAKE_CURRENT_SOURCE_DIR} *.cpp)
  list(REMOVE_ITEM Source
    spirit.cpp # error: redefinition of 'infinity' as different kind of symbol
  )
endif()

llvm_singlesource()
