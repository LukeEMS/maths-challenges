cmake_minimum_required(VERSION 3.14)
project(CircleProject)

set(CMAKE_CXX_STANDARD 17)

include_directories(include)

add_executable(main
    src/main.cpp
    src/Circle.cpp
)

find_package(GTest REQUIRED)

add_executable(runTests
    tests/Circle.Tests.cpp
    src/Circle.cpp
)

target_link_libraries(runTests GTest::gtest GTest::gtest_main)