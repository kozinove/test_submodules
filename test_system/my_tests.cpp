// In tests/my_tests.cpp
#include "gtest/gtest.h"
#include "func.h"


TEST(MyTestSuite, MyTest2) {
    EXPECT_EQ(1 + 3, 2);
}

TEST(MyTestSuite, MyTest3) {
    EXPECT_EQ(add(1,1), 2);
}
