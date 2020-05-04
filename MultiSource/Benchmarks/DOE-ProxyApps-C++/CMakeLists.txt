if(NOT "${ARCH}" STREQUAL "KVX")
  # FIXME (KVX): requires exceptions: list(APPEND CXXFLAGS -fexceptions)
  add_subdirectory(HPCCG) # FIXME (KVX): undefined symbol: getrusage

  # FIXME (KVX): PENNANT doesn't compile, here are the first issues:
  # - Assertion `R == 0 && "Already initialized this value register!"' (HydroBC.cc, WriteXY.cc, InputFile.cc, Hydro.cc) T12918
  # - Machine code sinking pass (PolyGas.cc, TTS.cc, QCS.cc, Driver.cc, ExportGOLD.cc, GenMesh.cc, Mesh.cc) T12929
  # - Live Variable Analysis pass (main.cc)
  add_subdirectory(PENNANT)

  # FIXME (KVX): miniFE doesn't compile, here are the first issues:
  # - Assertion `R == 0 && "Already initialized this value register!"' (YAML_Doc.cpp, YAML_Element.cpp) T12918
  add_subdirectory(miniFE)

  add_subdirectory(CLAMR) # FIXME (KVX): Missing includes (sys/sysctl.h, sys/mman.h)

  # FIXME (KVX): HACCKernels doesn't compile
  # - Machine code sinking pass (main.cpp) T12929
  add_subdirectory(HACCKernels)
endif()
