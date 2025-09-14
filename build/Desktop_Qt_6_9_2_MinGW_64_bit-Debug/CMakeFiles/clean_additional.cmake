# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\CircuitoRLC_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\CircuitoRLC_autogen.dir\\ParseCache.txt"
  "CircuitoRLC_autogen"
  )
endif()
