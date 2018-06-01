cmake_minimum_required (VERSION 3.0)
project(Sort)

include_directories("${CMAKE_CURRENT_SOURCE_DIR}/include")

set(SOURCE_FILES
  lib/main.cpp
  )

add_executable(sort ${SOURCE_FILES})
