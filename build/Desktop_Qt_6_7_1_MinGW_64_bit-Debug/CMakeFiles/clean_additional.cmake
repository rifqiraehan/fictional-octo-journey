# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\PenghitungIPS_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\PenghitungIPS_autogen.dir\\ParseCache.txt"
  "PenghitungIPS_autogen"
  )
endif()
