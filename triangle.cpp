#include<iostream>
#include"gtest/gtest.h"
#include"triangle.h"
int triangle(int a,int b,int c){
	if((a<1)||(b<1)||(c<1))
		return 4;//input too small
	if((a>200)||(b>200)||(c>200))
		return 4;//input too large
	if((a+b<=c)||(a+c<=b)||(b+c<=a))
		return 3;//cannot form a triangle
	if(a==b)
	{
		if(a!=c)
			return 1;//Isosceles
		else 
			return 0;//Equilateral
	}
	else
	{
		if((a==c) || (b==c))
			return 1;//Isosceles
	}
	return 2;//Scalene
}
