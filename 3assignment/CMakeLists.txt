cmake_minimum_required(VERSION 2.6)

# Locate GTest
find_package(GTest REQUIRED)
include_directories(${GTEST_INCLUDE_DIRS})

# Link runTests with what we want to test and the GTest and pthread library
add_executable(assignment3Tests test.cpp BankAccount.h BankAccount.cpp)
target_link_libraries(assignment3Tests ${GTEST_LIBRARIES} pthread)

