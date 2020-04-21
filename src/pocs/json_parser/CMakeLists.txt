cmake_minimum_required(VERSION 3.16)

project(parser LANGUAGES CXX)

set(CMAKE_C_COMPILER "/usr/bin/clang")
set(CMAKE_CXX_COMPILER "/usr/bin/clang++")
set(CMAKE_CXX_STANDARD 17)

include(FetchContent)
FetchContent_Declare(
  rapidjson
  GIT_REPOSITORY https://github.com/Tencent/rapidjson.git
  GIT_TAG        v1.1.0
)
FetchContent_GetProperties(rapidjson)
FetchContent_Populate(rapidjson)

include_directories("${CMAKE_HOME_DIRECTORY}/_deps/rapidjson-src/include")
include_directories("${CMAKE_HOME_DIRECTORY}/config")
include_directories("${CMAKE_HOME_DIRECTORY}/parser")
include_directories("${CMAKE_HOME_DIRECTORY}/templates")

add_library(parser STATIC
    "${CMAKE_HOME_DIRECTORY}/parser/parser.hh"
    "${CMAKE_HOME_DIRECTORY}/parser/parser.cc"
)

add_executable(reader reader.cpp)

target_link_libraries(reader parser)