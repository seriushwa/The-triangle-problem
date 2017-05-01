#include<iostream>
#include"gtest/gtest.h"
#include"triangle.h"


TEST(Triangle,Equivalence)
{
EXPECT_EQ(0,triangle(5,5,5));//SN
EXPECT_EQ(1,triangle(2,2,3));//SN
EXPECT_EQ(2,triangle(3,4,5));//SN
EXPECT_EQ(3,triangle(4,2,2));//SN
EXPECT_EQ(4,triangle(-1,5,5));//WR
EXPECT_EQ(4,triangle(5,-1,5));//WR
EXPECT_EQ(4,triangle(5,5,-1));//WR
EXPECT_EQ(4,triangle(201,5,5));//WR
EXPECT_EQ(4,triangle(5,201,5));//WR
EXPECT_EQ(4,triangle(5,5,201));//WR
EXPECT_EQ(4,triangle(-1,5,5));//SR
EXPECT_EQ(4,triangle(5,-1,5));//SR
EXPECT_EQ(4,triangle(5,5,-1));//SR
EXPECT_EQ(4,triangle(-1,-1,5));//SR
EXPECT_EQ(4,triangle(5,-1,-1));//SR
EXPECT_EQ(4,triangle(-1,5,-1));//SR
EXPECT_EQ(4,triangle(-1,-1,-1));//SR
}

int main(int argc,char** argv)
{
	testing::InitGoogleTest(&argc,argv);
	return RUN_ALL_TESTS();
}
