#include "gtest/gtest.h"
#include "../AllProducts.h"
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

void printVector(vector<int> input) {
	for(int i = 0; i < (int)input.size(); i++) {
		cout << input[i] << " ";
	}
	cout << endl;
}

void printError(vector<int> expected, vector<int> actual) {
	cout << "Expected: ";
	printVector(expected);
	cout << "But Found: ";
	printVector(actual);
}

bool compareVectors(vector<int> first, vector<int> second){
	if(first.size() != second.size()){
		printError(first, second);
		return false;
	}

	sort(first.begin(), first.end());
	sort(second.begin(), second.end());

	for(size_t i = 0; i < first.size(); i++) {
		if(first[i] != second[i])  {
			printError(first, second);
			return false;
		}
	}
	return true;
}

TEST(AllProductsTest, 2_3_7) 
{
	vector<int> input = { 2, 3, 7 };
	vector<int> expectedResult = { 1, 2, 3, 7, 6, 14, 21, 42 };
	vector<int> studentResult = AllProducts(input);
	EXPECT_TRUE(compareVectors(expectedResult, studentResult));
}

TEST(AllProductsTest, 2_3_7_9) 
{
	vector<int> input = { 2, 3, 7, 9 };
	vector<int> expectedResult = { 1, 9, 7, 63, 3, 27, 21, 189, 2, 18, 14, 126, 6, 54, 42, 378 };
	vector<int> studentResult = AllProducts(input);
	EXPECT_TRUE(compareVectors(expectedResult, studentResult));
}

TEST(AllProductsTest, 2_7_13) 
{
	vector<int> input = {2, 7, 13};
	vector<int> expectedResult = { 1, 2, 7, 13, 14, 26, 91, 182 };
	vector<int> studentResult = AllProducts(input);
	EXPECT_TRUE(compareVectors(expectedResult, studentResult));
}

TEST(AllProductsTest, 17_23_29) 
{
	vector<int> input = { 17, 23, 29 };
	vector<int> expectedResult = { 1, 17, 23, 29, 391, 493, 667, 11339 };
	vector<int> studentResult = AllProducts(input);
	EXPECT_TRUE(compareVectors(expectedResult, studentResult));
}