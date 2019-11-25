cmake_minimum_required(VERSION 2.6)

# Locate GTest
find_package(GTest REQUIRED)
include_directories(${GTEST_INCLUDE_DIRS})

# Link runTests with what we want to test and the GTest and pthread library
add_executable(assignment5Tests.o test.cpp Item.h Item.cpp Sale.h Sale.cpp)
target_link_libraries(assignment5Tests.o ${GTEST_LIBRARIES} pthread)

