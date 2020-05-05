cmake_minimum_required(VERSION 3.16)

project(parser LANGUAGES CXX)

set(CMAKE_C_COMPILER "/usr/bin/clang")
set(CMAKE_CXX_COMPILER "/usr/bin/clang++")
set(CMAKE_CXX_STANDARD 17)

include(FetchContent)
FetchContent_Declare(
  json
  GIT_REPOSITORY https://github.com/nlohmann/json.git
  GIT_TAG        v3.7.3
)
FetchContent_GetProperties(json)
FetchContent_Populate(json)

include_directories("${CMAKE_HOME_DIRECTORY}/_deps/json-src/include")
include_directories("${CMAKE_HOME_DIRECTORY}/config")
include_directories("${CMAKE_HOME_DIRECTORY}/parser")
include_directories("${CMAKE_HOME_DIRECTORY}/templates")

add_library(parser STATIC
    "${CMAKE_HOME_DIRECTORY}/parser/parser.hh"
    "${CMAKE_HOME_DIRECTORY}/parser/parser.cc"
)

add_executable(reader reader.cpp)

target_link_libraries(reader parser)