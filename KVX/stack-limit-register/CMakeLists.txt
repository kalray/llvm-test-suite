file(GLOB Source RELATIVE ${CMAKE_CURRENT_SOURCE_DIR} *.c)
list(APPEND CFLAGS -O0 -fstack-limit-register=sr)
list(APPEND LDFLAGS -Wl,--defsym=USER_STACK_SIZE=1024)
set(RUN_OPTIONS 100)

llvm_singlesource()

file(COPY lit.local.cfg DESTINATION "${CMAKE_CURRENT_BINARY_DIR}")
