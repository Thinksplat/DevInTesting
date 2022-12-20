
#include <gtest/gtest.h>
#include "DemoObject.h"

TEST(DemoObjectTests, BasicAssertions) {
    DemoObject demoObject(1, 2);
    EXPECT_EQ(3, demoObject.AddXY());
}

TEST(DemoObjectTest, OnlyUsesXAndY) {
    DemoObject demoObject(1, 2, 3);

    auto result = demoObject.AddXY();
    EXPECT_EQ(result,3);
}