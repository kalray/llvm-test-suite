set(NO_REFERENCE_OUTPUT true)

file(GLOB Source RELATIVE ${CMAKE_CURRENT_SOURCE_DIR} *.c *.cpp)
llvm_singlesource()
