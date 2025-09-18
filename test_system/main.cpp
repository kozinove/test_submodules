// In tests/my_tests.cpp
#include "gtest/gtest.h"

TEST(MyTestSuite, MyTest) {
    EXPECT_EQ(1 + 1, 2);
}

//Optional: main function for standalone execution if desired
int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}