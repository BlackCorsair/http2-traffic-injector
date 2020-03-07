cmake_minimum_required(VERSION 3.15)

#Set package versions
set(GOOGLETEST_VERSION 1.8.0)

#Set compiler flags
set(CMAKE_CXX_STANDARD 17)

project(http2_traffic_injector CXX)

add_subdirectory(src)

include(cmake/googletest.cmake)
fetch_googletest(
        ${PROJECT_SOURCE_DIR}/cmake
        ${PROJECT_BINARY_DIR}/googletest
)

enable_testing()
add_subdirectory(test)
