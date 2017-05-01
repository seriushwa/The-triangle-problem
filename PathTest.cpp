#include<iostream>
#include"gtest/gtest.h"
#include"triangle.h"

TEST(Triangle,C0)
{
	EXPECT_EQ(4,triangle(0,0,0));
	EXPECT_EQ(4,triangle(201,0,0));
	EXPECT_EQ(3,triangle(1,1,3));
	EXPECT_EQ(1,triangle(2,2,3));
	EXPECT_EQ(0,triangle(2,2,2));
	EXPECT_EQ(1,triangle(2,3,2));
	EXPECT_EQ(2,triangle(2,3,4));
}
TEST(Triangle,C1)
{
	EXPECT_EQ(4,triangle(0,0,0));
	EXPECT_EQ(4,triangle(201,0,0));
	EXPECT_EQ(3,triangle(1,1,3));
	EXPECT_EQ(1,triangle(2,2,3));
	EXPECT_EQ(0,triangle(2,2,2));
	EXPECT_EQ(1,triangle(2,3,2));
	EXPECT_EQ(2,triangle(2,3,4));

}
TEST(Triangle,C2)
{
	EXPECT_EQ(4,triangle(0,0,0));
	EXPECT_EQ(4,triangle(201,0,0));
	EXPECT_EQ(3,triangle(1,1,3));
	EXPECT_EQ(1,triangle(2,2,3));
	EXPECT_EQ(0,triangle(2,2,2));
	EXPECT_EQ(1,triangle(2,3,2));
	EXPECT_EQ(2,triangle(2,3,4));

}
TEST(Triangle,MCDC)
{
	//Go through all statement
	//Go through all exit point
	//All branch taken
	EXPECT_EQ(4,triangle(0,0,0));
	EXPECT_EQ(4,triangle(201,0,0));
	EXPECT_EQ(3,triangle(1,1,3));
	EXPECT_EQ(1,triangle(2,2,3));
	EXPECT_EQ(0,triangle(2,2,2));
	EXPECT_EQ(1,triangle(2,3,2));
	EXPECT_EQ(2,triangle(2,3,4));

	//Boolean statement has been evaluated with true and false
	//if variables are less than 1
	EXPECT_EQ(0,triangle(2,2,2));//false
	EXPECT_EQ(4,triangle(0,2,2));//true
	EXPECT_EQ(4,triangle(2,0,2));//true
	EXPECT_EQ(4,triangle(2,2,0));//true
	EXPECT_EQ(4,triangle(0,0,2));//true
	EXPECT_EQ(4,triangle(0,2,0));//true
	EXPECT_EQ(4,triangle(2,0,0));//true
	EXPECT_EQ(4,triangle(0,0,0));//true
	//if variables are larger than 200
	EXPECT_EQ(0,triangle(200,200,200));//false
	EXPECT_EQ(4,triangle(201,200,200));//true
	EXPECT_EQ(4,triangle(200,201,200));//true
	EXPECT_EQ(4,triangle(200,200,201));//true
	EXPECT_EQ(4,triangle(201,201,200));//true
	EXPECT_EQ(4,triangle(201,200,201));//true
	EXPECT_EQ(4,triangle(200,201,201));//true
	EXPECT_EQ(4,triangle(201,201,201));//true
	//sum of two eges must be larger than third one
	//there is at most one true condition
	EXPECT_EQ(0,triangle(150,150,150));//false
	EXPECT_EQ(3,triangle(2,2,150));//true
	EXPECT_EQ(3,triangle(2,150,2));//true
	EXPECT_EQ(3,triangle(150,2,2));//true
	//a==b
	//a!=c
	EXPECT_EQ(1,triangle(2,2,1));
	//a==c
	EXPECT_EQ(0,triangle(2,2,2));
	//a!=b
	//if(a==c||b==c)
	EXPECT_EQ(1,triangle(2,1,2));//true
	EXPECT_EQ(1,triangle(1,2,2));//true
	EXPECT_EQ(2,triangle(2,3,4));//false
}

int main(int argc,char** argv)
{
	testing::InitGoogleTest(&argc,argv);
	return RUN_ALL_TESTS();
}
