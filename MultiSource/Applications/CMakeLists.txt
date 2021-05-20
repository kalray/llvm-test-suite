if (NOT ARCH STREQUAL "KVX")
  add_subdirectory(JM) # FIXME (KVX): depends on netinet/in.h
endif()
add_subdirectory(SIBsim4)
add_subdirectory(aha)
if (NOT ARCH STREQUAL "KVX")
  add_subdirectory(d) # FIXME (KVX): depends on sys/mman.h
endif()
if(NOT ARCH STREQUAL "PowerPC")
# This test has problems running on powerpc starting with r295538 and should
# be restored when the issue is corrected.
  add_subdirectory(oggenc)
endif()
add_subdirectory(sgefa)
add_subdirectory(spiff)
add_subdirectory(viterbi)

add_subdirectory(ALAC)
add_subdirectory(hbd)
if (NOT ARCH STREQUAL "KVX")
  add_subdirectory(lambda-0.1.3) # FIXME (KVX): undefined reference to getcwd
  add_subdirectory(minisat) # FIXME (KVX): undefined reference to getrusage
endif()
if(NOT DEFINED SMALL_PROBLEM_SIZE AND (NOT ARCH STREQUAL "KVX"))
  add_subdirectory(lua) # FIXME (KVX): fail?
endif()
if(NOT TARGET_OS STREQUAL "SunOS" AND (NOT ARCH STREQUAL "KVX"))
  add_subdirectory(hexxagon) # FIXME (KVX): undefined reference to netinet/in.h
endif()
if((TARGET_OS STREQUAL "Linux" OR TARGET_OS STREQUAL "Darwin") AND (NOT ARCH STREQUAL "XCore") AND (NOT ARCH STREQUAL "KVX"))
  add_subdirectory(obsequi) # FIXME (KVX): multiple undefined references
endif()
if(NOT TARGET_OS STREQUAL "SunOS" AND (NOT ARCH STREQUAL "KVX"))
  add_subdirectory(kimwitu++) # FIXME (KVX): requires exceptions
endif()
if(NOT TARGET_OS STREQUAL "SunOS")
  add_subdirectory(SPASS)
endif()
if(NOT ARCH STREQUAL "XCore")
  if (NOT ARCH STREQUAL "KVX")
    add_subdirectory(ClamAV) # FIXME (KVX): requires sys/mman.h
  endif()
  add_subdirectory(lemon)
  if (NOT ARCH STREQUAL "KVX")
    add_subdirectory(siod) # FIXME (KVX): requires to be ported for ClusterOS
  endif()
endif()
if((NOT ARCH STREQUAL "PowerPC") AND (NOT ARCH STREQUAL "XCore") AND (NOT ARCH STREQUAL "KVX"))
  add_subdirectory(sqlite3) # FIXME (KVX): undefined reference to getrusage
endif()
if(NOT TEST_SUITE_BENCHMARKING_ONLY)
  add_subdirectory(Burg)
  add_subdirectory(treecc)
endif()
