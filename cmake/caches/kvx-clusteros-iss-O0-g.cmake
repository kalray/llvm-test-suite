set(OPTFLAGS "${OPTFLAGS} -O0 -g")

set(CMAKE_C_FLAGS_DEBUG "${OPTFLAGS}" CACHE STRING "")
set(CMAKE_CXX_FLAGS_DEBUG "${OPTFLAGS}" CACHE STRING "")

string(CONCAT linkerflags
  "-Tmppadcos_ddr.ld "					# Use DDR
  "-Wl,--defsym=USER_STACK_SIZE=0x20000 "		# Set stack size to 128KB (SMEM)
  "-Wl,--defsym=MPPA_COS_NB_CC=1 "			# Use 1 Cluster (up to 5)
  "-Wl,--defsym=MPPA_COS_MASTER_CC=0 "	 		# Run on Cluster 0
  "-Wl,--defsym=MPPA_COS_NB_CORES_LOG2=0 "		# Use 1 Core (up to log2(16))
  "-Wl,--defsym=MPPA_COS_THREAD_PER_CORE_LOG2=0"	# Set 1 thread per Core (up to log2(4))
  )

set(CMAKE_EXE_LINKER_FLAGS "${linkerflags}" CACHE STRING "")

set(CMAKE_BUILD_TYPE "Debug" CACHE STRING "")

set(SMALL_PROBLEM_SIZE ON CACHE BOOL "")
