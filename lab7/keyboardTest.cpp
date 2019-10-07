#include "gtest/gtest.h"
#include "keyboard.h"

using namespace std;

TEST(KeyboardTest, basic) 
{
	EXPECT_EQ(0, calculateTime("abcdefghijklmnopqrstuvwxyz", "a"));
}

