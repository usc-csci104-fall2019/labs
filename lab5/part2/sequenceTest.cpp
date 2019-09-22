#include "gtest/gtest.h"
#include "sequence.h"

using namespace std;

TEST(SequenceTest, 2_4_6) 
{
	int input [] = { 2, 4, 6 };
	EXPECT_EQ(2, isArithmeticSequence(input));
}

// TEST(SequenceTest, 2_3_7_9) 
// {
// 	vector<int> input = { 2, 3, 7, 9 };
// 	vector<int> expectedResult = { 1, 9, 7, 63, 3, 27, 21, 189, 2, 18, 14, 126, 6, 54, 42, 378 };
// 	vector<int> studentResult = AllProducts(input);
// 	EXPECT_TRUE(compareVectors(expectedResult, studentResult));
// }

// TEST(SequenceTest, 2_7_13) 
// {
// 	vector<int> input = {2, 7, 13};
// 	vector<int> expectedResult = { 1, 2, 7, 13, 14, 26, 91, 182 };
// 	vector<int> studentResult = AllProducts(input);
// 	EXPECT_TRUE(compareVectors(expectedResult, studentResult));
// }

// TEST(SequenceTest, 17_23_29) 
// {
// 	vector<int> input = { 17, 23, 29 };
// 	vector<int> expectedResult = { 1, 17, 23, 29, 391, 493, 667, 11339 };
// 	vector<int> studentResult = AllProducts(input);
// 	EXPECT_TRUE(compareVectors(expectedResult, studentResult));
// }