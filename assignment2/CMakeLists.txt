cmake_minimum_required(VERSION 2.6)

# Locate GTest
find_package(GTest REQUIRED)
include_directories(${GTEST_INCLUDE_DIRS})

# Link runTests with what we want to test and the GTest and pthread library
add_executable(assignment2Tests test.cpp Problem1.h Problem1.cpp Problem2.h Problem2.cpp)
target_link_libraries(assignment2Tests ${GTEST_LIBRARIES} pthread)

