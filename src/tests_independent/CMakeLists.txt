cmake_minimum_required(VERSION 3.14)
project(tests_independent)

FILE(GLOB SOURCES *.cpp)

add_executable(
  tests_independent
  ${SOURCES}
)
target_link_libraries(
  tests_independent
  GTest::gtest_main
)

include(GoogleTest)
gtest_discover_tests(tests_independent)
