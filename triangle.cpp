#include<iostream>
int triangle(int a,int b,int c)
{
	//dataa range
	if((a>1000)||(b>1000)||(c>1000))
	{
		std::cout<<"Length of triangle slide must not greater than 1000"<<std::endl;
		return 0;
	}
	//positive length of slide
	if((a<=0) || (b<=0) || (c<=0))
	{
		std::cout<<"Length of triangle slide must be positive"<<std::endl;
		return 0;
	}
	//requirment of triangle
	if((a+b<=c)||(a+c<=b)||(b+c<=a))
	{
		std::cout<<"Sum of two slide must bigger than third slide"<<std::endl;
		return 0;
	}
	//equilateral triangle
	if((a==b)&&(b==c))
	{
		std::cout<<"It is an equilateral triangle"<<std::endl;
		return 1;
	}
	//isosceles triangle
	if((a==b) && (a!=c))
	{
		std::cout<<"It is an isosceles triangle"<<std::endl;
		return 1;
	}
	if((b==c) && (b!=a))
	{
		std::cout<<"It is an isosceles triangle"<<std::endl;
		return 1;
	}
	if((a==c) && (a!=b))
	{
		std::cout<<"It is an isosceles triangle"<<std::endl;
		return 1;
	}
	//scalene triangle
	if((a!=b)&&(a!=c)&&(b!=c))
	{
		std::cout<<"It is a scalene triangle"<<std::endl;
		return 1;
	}
}
int main()
{
	int a,b,c;
	std::cout<<"Please enter three integer between 1 to 1000"<<std::endl;
	std::cin>>a>>b>>c;
	triangle(a,b,c);
	return 0;
}