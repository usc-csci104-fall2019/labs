#include "validParen.h"
#include "gtest/gtest.h"

TEST(ValidParenTest, empty) 
{
	EXPECT_EQ(true, isValid(""));
}
