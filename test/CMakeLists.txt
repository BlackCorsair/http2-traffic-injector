add_executable(
    ut
    AdderTest.cpp
    )

include_directories(../src)

target_link_libraries(
    ut
    gtest_main
    ${PROJECT_NAME}-lib
    )

add_test(
  NAME
    unit
  COMMAND
    ${CMAKE_BINARY_DIR}/${CMAKE_INSTALL_BINDIR}/test/ut
  )