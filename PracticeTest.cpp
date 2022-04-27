/**
 * Unit Tests for Practice class
**/

#include <gtest/gtest.h>
#include "Practice.h"

class PracticeTest : public ::testing::Test
{
	protected:
		PracticeTest(){} //constructor runs before each test
		virtual ~PracticeTest(){} //destructor cleans up after tests
		virtual void SetUp(){} //sets up before each test (after constructor)
		virtual void TearDown(){} //clean up after each test, (before destructor)
};

TEST(PracticeTest, smoke_test)
{
    ASSERT_TRUE(true);
}
TEST(PracticeTest,zzz_repeats){
	Practice testObject1;
	ASSERT_EQ(testObject1.count_starting_repeats("zzz"),3);
}
TEST(PracticeTest,zzz_empty){
	Practice testObject1;
	ASSERT_EQ(testObject1.count_starting_repeats(""),0);
}
TEST(PracticeTest,jjt_repeats){
	Practice testObject1;
	ASSERT_EQ(testObject1.count_starting_repeats("jjt"),2);
}
TEST(PracticeTest,abc_repeats){
	Practice testObject1;
	ASSERT_EQ(testObject1.count_starting_repeats("abc"),1);
}
TEST(PracticeTest,pal){
	Practice testObject2;
	ASSERT_EQ(testObject2.isPalindrome("racecar"),true);
}
TEST(PracticeTest,pal_t){
	Practice testObject2;
	ASSERT_EQ(testObject2.isPalindrome("tttt"),true);
}
TEST(PracticeTest,pal_cars){
	Practice testObject2;
	ASSERT_EQ(testObject2.isPalindrome("cars"),false);
}
TEST(PracticeTest,pal_empty){
	Practice testObject2;
	ASSERT_EQ(testObject2.isPalindrome(""),true);
}
TEST(PracticeTest,accending){
	Practice testObject3;
	int a = 1;
	int b = 2;
	int c = 3;
	testObject3.sortDescending(a,b,c);
	ASSERT_EQ(a,3);
	ASSERT_EQ(b,2);
	ASSERT_EQ(c,1);
}
TEST(PracticeTest,three_same){
	Practice testObject4;
	int a = 5;
	int b = 5;
	int c = 5;
	testObject4.sortDescending(a,b,c);
	ASSERT_EQ(a,5);
	ASSERT_EQ(b,5);
	ASSERT_EQ(c,5);
}
TEST(PracticeTest,two_same){
	Practice testObject4;
	int a = 1;
	int b = 5;
	int c = 5;
	testObject4.sortDescending(a,b,c);
	ASSERT_EQ(a,5);
	ASSERT_EQ(b,5);
	ASSERT_EQ(c,1);
}
TEST(PracticeTest,middle){
	Practice testObject4;
	int a = 1;
	int b = 5;
	int c = 3;
	testObject4.sortDescending(a,b,c);
	ASSERT_EQ(a,5);
	ASSERT_EQ(b,3);
	ASSERT_EQ(c,1);
}

