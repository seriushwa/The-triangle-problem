#include<iostream>
#include"gtest/gtest.h"
int triangle(int a,int b,int c)
{
	if((a<1)||(b<1)||(c<1))return 4;//input too small
	if((a>200)||(b>200)||(c>200))return 4;//input too large
	if((a+b<=c)||(a+c<=b)||(b+c<=a))return 3;//cannot form a triangle
	if(a==b)
	{
		if(a!=c)return 1;//Isosceles
		else return 0;//Equilateral
	}
	if(a==c)
	{
	
		if(a!=b)return 1;//Isosceles
		else return 0;//Equilateral
	}
	if(b==c)
	{
	
		if(b!=a)return 1;//Isosceles
		else return 0;//Equilateral
	}
	return 2;//Scalene
}

TEST(Triangle,BoundaryRW)//robust worst-case
{
EXPECT_EQ(4,triangle(0	,0	,0	));
EXPECT_EQ(4,triangle(0	,0	,1	));
EXPECT_EQ(4,triangle(0	,0	,2	));
EXPECT_EQ(4,triangle(0	,0	,100	));
EXPECT_EQ(4,triangle(0	,0	,199	));
EXPECT_EQ(4,triangle(0	,0	,200	));
EXPECT_EQ(4,triangle(0	,0	,201	));
EXPECT_EQ(4,triangle(0	,1	,0	));
EXPECT_EQ(4,triangle(0	,1	,1	));
EXPECT_EQ(4,triangle(0	,1	,2	));
EXPECT_EQ(4,triangle(0	,1	,100	));
EXPECT_EQ(4,triangle(0	,1	,199	));
EXPECT_EQ(4,triangle(0	,1	,200	));
EXPECT_EQ(4,triangle(0	,1	,201	));
EXPECT_EQ(4,triangle(0	,2	,0	));
EXPECT_EQ(4,triangle(0	,2	,1	));
EXPECT_EQ(4,triangle(0	,2	,2	));
EXPECT_EQ(4,triangle(0	,2	,100	));
EXPECT_EQ(4,triangle(0	,2	,199	));
EXPECT_EQ(4,triangle(0	,2	,200	));
EXPECT_EQ(4,triangle(0	,2	,201	));
EXPECT_EQ(4,triangle(0	,100	,0	));
EXPECT_EQ(4,triangle(0	,100	,1	));
EXPECT_EQ(4,triangle(0	,100	,2	));
EXPECT_EQ(4,triangle(0	,100	,100	));
EXPECT_EQ(4,triangle(0	,100	,199	));
EXPECT_EQ(4,triangle(0	,100	,200	));
EXPECT_EQ(4,triangle(0	,100	,201	));
EXPECT_EQ(4,triangle(0	,199	,0	));
EXPECT_EQ(4,triangle(0	,199	,1	));
EXPECT_EQ(4,triangle(0	,199	,2	));
EXPECT_EQ(4,triangle(0	,199	,100	));
EXPECT_EQ(4,triangle(0	,199	,199	));
EXPECT_EQ(4,triangle(0	,199	,200	));
EXPECT_EQ(4,triangle(0	,199	,201	));
EXPECT_EQ(4,triangle(0	,200	,0	));
EXPECT_EQ(4,triangle(0	,200	,1	));
EXPECT_EQ(4,triangle(0	,200	,2	));
EXPECT_EQ(4,triangle(0	,200	,100	));
EXPECT_EQ(4,triangle(0	,200	,199	));
EXPECT_EQ(4,triangle(0	,200	,200	));
EXPECT_EQ(4,triangle(0	,200	,201	));
EXPECT_EQ(4,triangle(0	,201	,0	));
EXPECT_EQ(4,triangle(0	,201	,1	));
EXPECT_EQ(4,triangle(0	,201	,2	));
EXPECT_EQ(4,triangle(0	,201	,100	));
EXPECT_EQ(4,triangle(0	,201	,199	));
EXPECT_EQ(4,triangle(0	,201	,200	));
EXPECT_EQ(4,triangle(0	,201	,201	));

EXPECT_EQ(4,triangle(1	,0	,0	));
EXPECT_EQ(4,triangle(1	,0	,1	));
EXPECT_EQ(4,triangle(1	,0	,2	));
EXPECT_EQ(4,triangle(1	,0	,100	));
EXPECT_EQ(4,triangle(1	,0	,199	));
EXPECT_EQ(4,triangle(1	,0	,200	));
EXPECT_EQ(4,triangle(1	,0	,201	));
EXPECT_EQ(4,triangle(1	,1	,0	));
EXPECT_EQ(0,triangle(1	,1	,1	));
EXPECT_EQ(3,triangle(1	,1	,2	));
EXPECT_EQ(3,triangle(1	,1	,100	));
EXPECT_EQ(3,triangle(1	,1	,199	));
EXPECT_EQ(3,triangle(1	,1	,200	));
EXPECT_EQ(4,triangle(1	,1	,201	));
EXPECT_EQ(4,triangle(1	,2	,0	));
EXPECT_EQ(3,triangle(1	,2	,1	));
EXPECT_EQ(1,triangle(1	,2	,2	));
EXPECT_EQ(3,triangle(1	,2	,100	));
EXPECT_EQ(3,triangle(1	,2	,199	));
EXPECT_EQ(3,triangle(1	,2	,200	));
EXPECT_EQ(4,triangle(1	,2	,201	));
EXPECT_EQ(4,triangle(1	,100	,0	));
EXPECT_EQ(3,triangle(1	,100	,1	));
EXPECT_EQ(3,triangle(1	,100	,2	));
EXPECT_EQ(1,triangle(1	,100	,100	));
EXPECT_EQ(3,triangle(1	,100	,199	));
EXPECT_EQ(3,triangle(1	,100	,200	));
EXPECT_EQ(4,triangle(1	,100	,201	));
EXPECT_EQ(4,triangle(1	,199	,0	));
EXPECT_EQ(3,triangle(1	,199	,1	));
EXPECT_EQ(3,triangle(1	,199	,2	));
EXPECT_EQ(3,triangle(1	,199	,100	));
EXPECT_EQ(1,triangle(1	,199	,199	));
EXPECT_EQ(3,triangle(1	,199	,200	));
EXPECT_EQ(4,triangle(1	,199	,201	));
EXPECT_EQ(4,triangle(1	,200	,0	));
EXPECT_EQ(3,triangle(1	,200	,1	));
EXPECT_EQ(3,triangle(1	,200	,2	));
EXPECT_EQ(3,triangle(1	,200	,100	));
EXPECT_EQ(3,triangle(1	,200	,199	));
EXPECT_EQ(1,triangle(1	,200	,200	));
EXPECT_EQ(4,triangle(1	,200	,201	));
EXPECT_EQ(4,triangle(1	,201	,0	));
EXPECT_EQ(4,triangle(1	,201	,1	));
EXPECT_EQ(4,triangle(1	,201	,2	));
EXPECT_EQ(4,triangle(1	,201	,100	));
EXPECT_EQ(4,triangle(1	,201	,199	));
EXPECT_EQ(4,triangle(1	,201	,200	));
EXPECT_EQ(4,triangle(1	,201	,201	));

EXPECT_EQ(4,triangle(2	,0	,0	));
EXPECT_EQ(4,triangle(2	,0	,1	));
EXPECT_EQ(4,triangle(2	,0	,2	));
EXPECT_EQ(4,triangle(2	,0	,100	));
EXPECT_EQ(4,triangle(2	,0	,199	));
EXPECT_EQ(4,triangle(2	,0	,200	));
EXPECT_EQ(4,triangle(2	,0	,201	));
EXPECT_EQ(4,triangle(2	,1	,0	));
EXPECT_EQ(3,triangle(2	,1	,1	));
EXPECT_EQ(1,triangle(2	,1	,2	));
EXPECT_EQ(3,triangle(2	,1	,100	));
EXPECT_EQ(3,triangle(2	,1	,199	));
EXPECT_EQ(3,triangle(2	,1	,200	));
EXPECT_EQ(4,triangle(2	,1	,201	));
EXPECT_EQ(4,triangle(2	,2	,0	));
EXPECT_EQ(1,triangle(2	,2	,1	));
EXPECT_EQ(0,triangle(2	,2	,2	));
EXPECT_EQ(3,triangle(2	,2	,100	));
EXPECT_EQ(3,triangle(2	,2	,199	));
EXPECT_EQ(3,triangle(2	,2	,200	));
EXPECT_EQ(4,triangle(2	,2	,201	));
EXPECT_EQ(4,triangle(2	,100	,0	));
EXPECT_EQ(3,triangle(2	,100	,1	));
EXPECT_EQ(3,triangle(2	,100	,2	));
EXPECT_EQ(1,triangle(2	,100	,100	));
EXPECT_EQ(3,triangle(2	,100	,199	));
EXPECT_EQ(3,triangle(2	,100	,200	));
EXPECT_EQ(4,triangle(2	,100	,201	));
EXPECT_EQ(4,triangle(2	,199	,0	));
EXPECT_EQ(3,triangle(2	,199	,1	));
EXPECT_EQ(3,triangle(2	,199	,2	));
EXPECT_EQ(3,triangle(2	,199	,100	));
EXPECT_EQ(1,triangle(2	,199	,199	));
EXPECT_EQ(2,triangle(2	,199	,200	));
EXPECT_EQ(4,triangle(2	,199	,201	));
EXPECT_EQ(4,triangle(2	,200	,0	));
EXPECT_EQ(3,triangle(2	,200	,1	));
EXPECT_EQ(3,triangle(2	,200	,2	));
EXPECT_EQ(3,triangle(2	,200	,100	));
EXPECT_EQ(2,triangle(2	,200	,199	));
EXPECT_EQ(1,triangle(2	,200	,200	));
EXPECT_EQ(4,triangle(2	,200	,201	));
EXPECT_EQ(4,triangle(2	,201	,0	));
EXPECT_EQ(4,triangle(2	,201	,1	));
EXPECT_EQ(4,triangle(2	,201	,2	));
EXPECT_EQ(4,triangle(2	,201	,100	));
EXPECT_EQ(4,triangle(2	,201	,199	));
EXPECT_EQ(4,triangle(2	,201	,200	));
EXPECT_EQ(4,triangle(2	,201	,201	));

EXPECT_EQ(4,triangle(100	,0	,0	));
EXPECT_EQ(4,triangle(100	,0	,1	));
EXPECT_EQ(4,triangle(100	,0	,2	));
EXPECT_EQ(4,triangle(100	,0	,100	));
EXPECT_EQ(4,triangle(100	,0	,199	));
EXPECT_EQ(4,triangle(100	,0	,200	));
EXPECT_EQ(4,triangle(100	,0	,201	));
EXPECT_EQ(4,triangle(100	,1	,0	));
EXPECT_EQ(3,triangle(100	,1	,1	));
EXPECT_EQ(3,triangle(100	,1	,2	));
EXPECT_EQ(1,triangle(100	,1	,100	));
EXPECT_EQ(3,triangle(100	,1	,199	));
EXPECT_EQ(3,triangle(100	,1	,200	));
EXPECT_EQ(4,triangle(100	,1	,201	));
EXPECT_EQ(4,triangle(100	,2	,0	));
EXPECT_EQ(3,triangle(100	,2	,1	));
EXPECT_EQ(3,triangle(100	,2	,2	));
EXPECT_EQ(1,triangle(100	,2	,100	));
EXPECT_EQ(3,triangle(100	,2	,199	));
EXPECT_EQ(3,triangle(100	,2	,200	));
EXPECT_EQ(4,triangle(100	,2	,201	));
EXPECT_EQ(4,triangle(100	,100	,0	));
EXPECT_EQ(1,triangle(100	,100	,1	));
EXPECT_EQ(1,triangle(100	,100	,2	));
EXPECT_EQ(0,triangle(100	,100	,100	));
EXPECT_EQ(1,triangle(100	,100	,199	));
EXPECT_EQ(3,triangle(100	,100	,200	));
EXPECT_EQ(4,triangle(100	,100	,201	));
EXPECT_EQ(4,triangle(100	,199	,0	));
EXPECT_EQ(3,triangle(100	,199	,1	));
EXPECT_EQ(3,triangle(100	,199	,2	));
EXPECT_EQ(1,triangle(100	,199	,100	));
EXPECT_EQ(1,triangle(100	,199	,199	));
EXPECT_EQ(2,triangle(100	,199	,200	));
EXPECT_EQ(4,triangle(100	,199	,201	));
EXPECT_EQ(4,triangle(100	,200	,0	));
EXPECT_EQ(3,triangle(100	,200	,1	));
EXPECT_EQ(3,triangle(100	,200	,2	));
EXPECT_EQ(3,triangle(100	,200	,100	));
EXPECT_EQ(2,triangle(100	,200	,199	));
EXPECT_EQ(1,triangle(100	,200	,200	));
EXPECT_EQ(4,triangle(100	,200	,201	));
EXPECT_EQ(4,triangle(100	,201	,0	));
EXPECT_EQ(4,triangle(100	,201	,1	));
EXPECT_EQ(4,triangle(100	,201	,2	));
EXPECT_EQ(4,triangle(100	,201	,100	));
EXPECT_EQ(4,triangle(100	,201	,199	));
EXPECT_EQ(4,triangle(100	,201	,200	));
EXPECT_EQ(4,triangle(100	,201	,201	));

EXPECT_EQ(4,triangle(199	,0	,0	));
EXPECT_EQ(4,triangle(199	,0	,1	));
EXPECT_EQ(4,triangle(199	,0	,2	));
EXPECT_EQ(4,triangle(199	,0	,100	));
EXPECT_EQ(4,triangle(199	,0	,199	));
EXPECT_EQ(4,triangle(199	,0	,200	));
EXPECT_EQ(4,triangle(199	,0	,201	));
EXPECT_EQ(4,triangle(199	,1	,0	));
EXPECT_EQ(3,triangle(199	,1	,1	));
EXPECT_EQ(3,triangle(199	,1	,2	));
EXPECT_EQ(3,triangle(199	,1	,100	));
EXPECT_EQ(1,triangle(199	,1	,199	));
EXPECT_EQ(3,triangle(199	,1	,200	));
EXPECT_EQ(4,triangle(199	,1	,201	));
EXPECT_EQ(4,triangle(199	,2	,0	));
EXPECT_EQ(3,triangle(199	,2	,1	));
EXPECT_EQ(3,triangle(199	,2	,2	));
EXPECT_EQ(3,triangle(199	,2	,100	));
EXPECT_EQ(1,triangle(199	,2	,199	));
EXPECT_EQ(2,triangle(199	,2	,200	));
EXPECT_EQ(4,triangle(199	,2	,201	));
EXPECT_EQ(4,triangle(199	,100	,0	));
EXPECT_EQ(3,triangle(199	,100	,1	));
EXPECT_EQ(3,triangle(199	,100	,2	));
EXPECT_EQ(1,triangle(199	,100	,100	));
EXPECT_EQ(1,triangle(199	,100	,199	));
EXPECT_EQ(2,triangle(199	,100	,200	));
EXPECT_EQ(4,triangle(199	,100	,201	));
EXPECT_EQ(4,triangle(199	,199	,0	));
EXPECT_EQ(1,triangle(199	,199	,1	));
EXPECT_EQ(1,triangle(199	,199	,2	));
EXPECT_EQ(1,triangle(199	,199	,100	));
EXPECT_EQ(0,triangle(199	,199	,199	));
EXPECT_EQ(1,triangle(199	,199	,200	));
EXPECT_EQ(4,triangle(199	,199	,201	));
EXPECT_EQ(4,triangle(199	,200	,0	));
EXPECT_EQ(3,triangle(199	,200	,1	));
EXPECT_EQ(2,triangle(199	,200	,2	));
EXPECT_EQ(2,triangle(199	,200	,100	));
EXPECT_EQ(1,triangle(199	,200	,199	));
EXPECT_EQ(1,triangle(199	,200	,200	));
EXPECT_EQ(4,triangle(199	,200	,201	));
EXPECT_EQ(4,triangle(199	,201	,0	));
EXPECT_EQ(4,triangle(199	,201	,1	));
EXPECT_EQ(4,triangle(199	,201	,2	));
EXPECT_EQ(4,triangle(199	,201	,100	));
EXPECT_EQ(4,triangle(199	,201	,199	));
EXPECT_EQ(4,triangle(199	,201	,200	));
EXPECT_EQ(4,triangle(199	,201	,201	));

EXPECT_EQ(4,triangle(200	,0	,0	));
EXPECT_EQ(4,triangle(200	,0	,1	));
EXPECT_EQ(4,triangle(200	,0	,2	));
EXPECT_EQ(4,triangle(200	,0	,100	));
EXPECT_EQ(4,triangle(200	,0	,199	));
EXPECT_EQ(4,triangle(200	,0	,200	));
EXPECT_EQ(4,triangle(200	,0	,201	));
EXPECT_EQ(4,triangle(200	,1	,0	));
EXPECT_EQ(3,triangle(200	,1	,1	));
EXPECT_EQ(3,triangle(200	,1	,2	));
EXPECT_EQ(3,triangle(200	,1	,100	));
EXPECT_EQ(3,triangle(200	,1	,199	));
EXPECT_EQ(1,triangle(200	,1	,200	));
EXPECT_EQ(4,triangle(200	,1	,201	));
EXPECT_EQ(4,triangle(200	,2	,0	));
EXPECT_EQ(3,triangle(200	,2	,1	));
EXPECT_EQ(3,triangle(200	,2	,2	));
EXPECT_EQ(3,triangle(200	,2	,100	));
EXPECT_EQ(2,triangle(200	,2	,199	));
EXPECT_EQ(1,triangle(200	,2	,200	));
EXPECT_EQ(4,triangle(200	,2	,201	));
EXPECT_EQ(4,triangle(200	,100	,0	));
EXPECT_EQ(3,triangle(200	,100	,1	));
EXPECT_EQ(3,triangle(200	,100	,2	));
EXPECT_EQ(3,triangle(200	,100	,100	));
EXPECT_EQ(2,triangle(200	,100	,199	));
EXPECT_EQ(1,triangle(200	,100	,200	));
EXPECT_EQ(4,triangle(200	,100	,201	));
EXPECT_EQ(4,triangle(200	,199	,0	));
EXPECT_EQ(3,triangle(200	,199	,1	));
EXPECT_EQ(2,triangle(200	,199	,2	));
EXPECT_EQ(2,triangle(200	,199	,100	));
EXPECT_EQ(1,triangle(200	,199	,199	));
EXPECT_EQ(1,triangle(200	,199	,200	));
EXPECT_EQ(4,triangle(200	,199	,201	));
EXPECT_EQ(4,triangle(200	,200	,0	));
EXPECT_EQ(1,triangle(200	,200	,1	));
EXPECT_EQ(1,triangle(200	,200	,2	));
EXPECT_EQ(1,triangle(200	,200	,100	));
EXPECT_EQ(1,triangle(200	,200	,199	));
EXPECT_EQ(0,triangle(200	,200	,200	));
EXPECT_EQ(4,triangle(200	,200	,201	));
EXPECT_EQ(4,triangle(200	,201	,0	));
EXPECT_EQ(4,triangle(200	,201	,1	));
EXPECT_EQ(4,triangle(200	,201	,2	));
EXPECT_EQ(4,triangle(200	,201	,100	));
EXPECT_EQ(4,triangle(200	,201	,199	));
EXPECT_EQ(4,triangle(200	,201	,200	));
EXPECT_EQ(4,triangle(200	,201	,201	));

EXPECT_EQ(4,triangle(201	,0	,0	));
EXPECT_EQ(4,triangle(201	,0	,1	));
EXPECT_EQ(4,triangle(201	,0	,2	));
EXPECT_EQ(4,triangle(201	,0	,100	));
EXPECT_EQ(4,triangle(201	,0	,199	));
EXPECT_EQ(4,triangle(201	,0	,200	));
EXPECT_EQ(4,triangle(201	,0	,201	));
EXPECT_EQ(4,triangle(201	,1	,0	));
EXPECT_EQ(4,triangle(201	,1	,1	));
EXPECT_EQ(4,triangle(201	,1	,2	));
EXPECT_EQ(4,triangle(201	,1	,100	));
EXPECT_EQ(4,triangle(201	,1	,199	));
EXPECT_EQ(4,triangle(201	,1	,200	));
EXPECT_EQ(4,triangle(201	,1	,201	));
EXPECT_EQ(4,triangle(201	,2	,0	));
EXPECT_EQ(4,triangle(201	,2	,1	));
EXPECT_EQ(4,triangle(201	,2	,2	));
EXPECT_EQ(4,triangle(201	,2	,100	));
EXPECT_EQ(4,triangle(201	,2	,199	));
EXPECT_EQ(4,triangle(201	,2	,200	));
EXPECT_EQ(4,triangle(201	,2	,201	));
EXPECT_EQ(4,triangle(201	,100	,0	));
EXPECT_EQ(4,triangle(201	,100	,1	));
EXPECT_EQ(4,triangle(201	,100	,2	));
EXPECT_EQ(4,triangle(201	,100	,100	));
EXPECT_EQ(4,triangle(201	,100	,199	));
EXPECT_EQ(4,triangle(201	,100	,200	));
EXPECT_EQ(4,triangle(201	,100	,201	));
EXPECT_EQ(4,triangle(201	,199	,0	));
EXPECT_EQ(4,triangle(201	,199	,1	));
EXPECT_EQ(4,triangle(201	,199	,2	));
EXPECT_EQ(4,triangle(201	,199	,100	));
EXPECT_EQ(4,triangle(201	,199	,199	));
EXPECT_EQ(4,triangle(201	,199	,200	));
EXPECT_EQ(4,triangle(201	,199	,201	));
EXPECT_EQ(4,triangle(201	,200	,0	));
EXPECT_EQ(4,triangle(201	,200	,1	));
EXPECT_EQ(4,triangle(201	,200	,2	));
EXPECT_EQ(4,triangle(201	,200	,100	));
EXPECT_EQ(4,triangle(201	,200	,199	));
EXPECT_EQ(4,triangle(201	,200	,200	));
EXPECT_EQ(4,triangle(201	,200	,201	));
EXPECT_EQ(4,triangle(201	,201	,0	));
EXPECT_EQ(4,triangle(201	,201	,1	));
EXPECT_EQ(4,triangle(201	,201	,2	));
EXPECT_EQ(4,triangle(201	,201	,100	));
EXPECT_EQ(4,triangle(201	,201	,199	));
EXPECT_EQ(4,triangle(201	,201	,200	));
EXPECT_EQ(4,triangle(201	,201	,201	));
}

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

int main(int argc,char** argv)
{
	testing::InitGoogleTest(&argc,argv);
	return RUN_ALL_TESTS();
}	
