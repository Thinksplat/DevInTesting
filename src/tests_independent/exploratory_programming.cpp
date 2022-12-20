#include <gtest/gtest.h>
#include <stdint.h>

// Exploratory programming is a technique where you write code to explore a problem space.
// It is a technique that is used in many fields, including science, engineering, and programming.
// It is critical to the scientific method, and is a key part of the scientific process.
// It is also a key part of the engineering process.

//
//  unit_tests/
//  ├── dependent_tests  // These tests depend on the system library that is millions of lines of code
//  │   ├── dependent_test_1.cpp   // Long compile times, long iteration cycles
//  │   ├── dependent_test_2.cpp
//  │   └── dependent_test_3.cpp
//  ├── independent_tests // These tests do not depend on the system library
//  │   ├── independent_test_1.cpp  // Short compile times, short iteration cycles
//  │   ├── independent_test_2.cpp
//  │   └── [ YOU ARE HERE ]

static int TestAdd(int a, int b) {
    return a + b;
}

TEST(ExplortatoryTests, BasicAssertions) {
   EXPECT_EQ(3, TestAdd(1, 2));
}

uint32_t AlignTo32BitBoundary(uint32_t offset) {
    return (offset + 3) & ~3;
}

TEST(ExplortatoryTests, WierdBitThing) {
    EXPECT_EQ(AlignTo32BitBoundary(0), 0);
    EXPECT_EQ(AlignTo32BitBoundary(1), 4);
    EXPECT_EQ(AlignTo32BitBoundary(2), 4);
    EXPECT_EQ(AlignTo32BitBoundary(3), 4);
    EXPECT_EQ(AlignTo32BitBoundary(4), 4);
    EXPECT_EQ(AlignTo32BitBoundary(5), 8);
}