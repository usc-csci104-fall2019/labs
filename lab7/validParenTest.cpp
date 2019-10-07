#include "validParen.h"
#include "gtest/gtest.h"

TEST(ValidParenTest, empty) 
{
	EXPECT_EQ(true, isValid(""));
}

TEST(ValidParenTest, simple_round) 
{
	EXPECT_EQ(true, isValid("()"));
}

TEST(ValidParenTest, simple_square) 
{
	EXPECT_EQ(true, isValid("[]"));
}

TEST(ValidParenTest, simple_curly) 
{
	EXPECT_EQ(true, isValid("{}"));
}

TEST(ValidParenTest, mixed) 
{
	EXPECT_EQ(true, isValid("()[]{}"));
	EXPECT_EQ(true, isValid("([{}])"));
	EXPECT_EQ(true, isValid("{[()]}"));
}

TEST(ValidParenTest, invalid_symmetric)
{
	EXPECT_EQ(false, isValid(")("));
	EXPECT_EQ(false, isValid("]["));
	EXPECT_EQ(false, isValid("}{"));
	EXPECT_EQ(false, isValid("}([]){"));
}

TEST(ValidParenTest, invalid_mixed)
{
	EXPECT_EQ(false, isValid("(]"));
	EXPECT_EQ(false, isValid("{)"));
	EXPECT_EQ(false, isValid("[}"));
	EXPECT_EQ(false, isValid("{{)}"));
	EXPECT_EQ(false, isValid("([{]])"));
}
