#include "Literature.h"
#include "gtest/gtest.h"
#include <vector>
#include <algorithm>

TEST(changeNumValue, TestChangeMultipleValues) 
{
	std::vector <int> v1 {1, 2, 3, 6, 2, 7, 3, 2, 6, 1, 2, 6};
	int numberOf2 = std::count(v1.begin(), v1.end(), 2);
	numberOf2 += std::count(v1.begin(), v1.end(), 15);
	dntp::myLib::changeNumValue(v1, 2, 15);
	EXPECT_EQ(0, std::count(v1.begin(), v1.end(), 2));
	EXPECT_EQ(numberOf2, std::count(v1.begin(), v1.end(), 15));
}

TEST(changeNumValue, TestChangeEmptyValues) 
{
  	std::vector <int> v1;
	dntp::myLib::changeNumValue(v1, 2, 15);
	
    EXPECT_EQ(0, std::count(v1.begin(), v1.end(), 15));
}
