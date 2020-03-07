#include <gtest/gtest.h>
#include "Adder.h"

class AdderTest: public ::testing::Test {
protected:
    Adder adder;
};

TEST_F(AdderTest, GivenTwoNumbers_WhenAdded_ResultIsCorrect) {
    ASSERT_EQ(7, adder.sum(3, 4));
}