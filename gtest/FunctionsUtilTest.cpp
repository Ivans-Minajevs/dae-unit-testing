#include <gtest/gtest.h>
#include <FunctionsUtil.h>

TEST(FunctionsUtilGTest, function1) {
    FunctionsUtil funcUtil;
    EXPECT_EQ(funcUtil.function1(10), 15);
    EXPECT_EQ(funcUtil.function1(5), 10);
    EXPECT_EQ(funcUtil.function1(-3), 0);
    EXPECT_EQ(funcUtil.function1(0), 5);
}