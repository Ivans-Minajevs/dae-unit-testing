#include <gtest/gtest.h>
#include <FunctionsUtil.h>

TEST(FunctionsUtilGTest, function1) {
    FunctionsUtil funcUtil;
    EXPECT_EQ(funcUtil.function1(10), 15);
    EXPECT_EQ(funcUtil.function1(5), 10);
    EXPECT_EQ(funcUtil.function1(-3), 0);
    EXPECT_EQ(funcUtil.function1(0), 5);
}

TEST(FunctionsUtilGTest, function2) {
    FunctionsUtil funcUtil;
    EXPECT_EQ(funcUtil.function2(15), 30);
    EXPECT_EQ(funcUtil.function2(8), 16);
    EXPECT_EQ(funcUtil.function2(6), 12);
    EXPECT_EQ(funcUtil.function2(0), 0);
}

TEST(FunctionsUtilGTest, function3) {
    FunctionsUtil funcUtil;
    EXPECT_EQ(funcUtil.function3(45), 40);
    EXPECT_EQ(funcUtil.function3(49), 44);
    EXPECT_THROW(funcUtil.function3(50), std::runtime_error);
    EXPECT_THROW(funcUtil.function3(51), std::runtime_error);
}

