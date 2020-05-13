# -Tmppadcos_ddr.ld                             -> Use DDR
# -Wl,--defsym=USER_STACK_SIZE=128000           -> Set stack size to 125Ko (SMEM)
# -Wl,--defsym=MPPA_COS_NB_CC=1                 -> Use 1 cluster
# -Wl,--defsym=MPPA_COS_NB_CORES_LOG2=0         -> Use 1 core
# -Wl,--defsym=MPPA_COS_MASTER_CC=0             -> Run on Cluster 0
# -Wl,--defsym=MPPA_COS_THREAD_PER_CORE_LOG2=0  -> Set 1 thread per core

set(OPTFLAGS "${OPTFLAGS} -O0 -g")

set(CMAKE_C_FLAGS_DEBUG "${OPTFLAGS}" CACHE STRING "")
set(CMAKE_CXX_FLAGS_DEBUG "${OPTFLAGS}" CACHE STRING "")
set(CMAKE_EXE_LINKER_FLAGS "-Tmppadcos_ddr.ld -Wl,--defsym=USER_STACK_SIZE=128000 -Wl,--defsym=MPPA_COS_NB_CC=1 -Wl,--defsym=MPPA_COS_NB_CORES_LOG2=0 -Wl,--defsym=MPPA_COS_MASTER_CC=0 -Wl,--defsym=MPPA_COS_THREAD_PER_CORE_LOG2=0" CACHE STRING "")

set(CMAKE_BUILD_TYPE "Debug" CACHE STRING "")
