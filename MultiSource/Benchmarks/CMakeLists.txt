add_subdirectory(ASCI_Purple)
add_subdirectory(ASC_Sequoia)
add_subdirectory(BitBench)
add_subdirectory(Fhourstones)
add_subdirectory(Fhourstones-3.1)
add_subdirectory(FreeBench)
add_subdirectory(McCat)
add_subdirectory(NPB-serial)
add_subdirectory(Olden)
add_subdirectory(Ptrdist)
add_subdirectory(SciMark2-C)
add_subdirectory(VersaBench)
add_subdirectory(llubenchmark)
add_subdirectory(nbench)
add_subdirectory(Rodinia)

# FIXME (KVX): The following benchs are not supported on KVX architecture
# because of software limitations.
if(NOT ARCH STREQUAL "KVX")
  add_subdirectory(MallocBench) # Doesn't link because of undefined symbols.
  add_subdirectory(Prolangs-C)  # Include file sys/utsname.h not found.
  add_subdirectory(Trimaran)    # Include file sys/socket.h not found.
  add_subdirectory(mediabench)  # Undefined references to utime/fchmod/fchown.
  add_subdirectory(sim)         # Undefined refefence to getrusage.
endif()
if((NOT "${TARGET_OS}" STREQUAL "Darwin") OR (NOT "${ARCH}" STREQUAL "ARM"))
  add_subdirectory(TSVC)
endif()
add_subdirectory(Prolangs-C++)
add_subdirectory(Bullet)
add_subdirectory(tramp3d-v4)
if(NOT "${ARCH}" STREQUAL "Hexagon")
  add_subdirectory(DOE-ProxyApps-C++)
  add_subdirectory(DOE-ProxyApps-C)
  if(NOT ARCH STREQUAL "KVX")
    add_subdirectory(MiBench) # Include file err.h not found.
  endif()
endif()
if((NOT "${ARCH}" STREQUAL "XCore") AND (NOT "${ARCH}" STREQUAL "KVX"))
  add_subdirectory(7zip) # FIXME (KVX): requires dirent.h support
  # FIXME (KVX): PAQ8p compiles with exceptions enabled but fails with
  #   Assertion `MRI->getVRegDef(reg) && "Register use before def!"' (paq8p.cpp)
  # See T12919.
  # list(APPEND CXXFLAGS -fexceptions)
  add_subdirectory(PAQ8p)
endif()
if(NOT DEFINED SMALL_PROBLEM_SIZE)
  add_subdirectory(mafft)
endif()
