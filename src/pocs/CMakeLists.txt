cmake_minimum_required(VERSION 3.17.1)
include(FetchContent)
FetchContent_Declare(
  rapidjson
  GIT_REPOSITORY https://github.com/Tencent/rapidjson.git
  GIT_TAG        v1.1.0
)

FetchContent_GetProperties(rapidjson)
FetchContent_Populate(rapidjson)

project(POCs)

set(CMAKE_CXX_STANDARD 17)

include_directories(_deps/rapidjson-src/include)

add_library(Config
    parser.hh parser.cc
    config.hh
)

add_executable(reader reader.cpp)

target_link_libraries(reader Config)