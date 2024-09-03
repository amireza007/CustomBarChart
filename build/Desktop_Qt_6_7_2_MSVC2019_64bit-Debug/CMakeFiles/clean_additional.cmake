# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\appCustomBarChart_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\appCustomBarChart_autogen.dir\\ParseCache.txt"
  "appCustomBarChart_autogen"
  )
endif()
