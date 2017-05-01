#include<iostream>
#include"gtest/gtest.h"
#include"triangle.h"

TEST(Triangle,DecisionTable)
{
EXPECT_EQ(3,triangle(4,1,2));
EXPECT_EQ(3,triangle(1,4,2));
EXPECT_EQ(3,triangle(1,2,4));
EXPECT_EQ(0,triangle(5,5,5));
EXPECT_EQ(1,triangle(2,2,3));
EXPECT_EQ(1,triangle(2,3,2));
EXPECT_EQ(1,triangle(3,2,2));
EXPECT_EQ(2,triangle(3,4,5));
}




int main(int argc, char** argv)
{
	testing::InitGoogleTest(&argc,argv);
	return RUN_ALL_TESTS();
}


