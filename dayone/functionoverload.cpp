//function overloading
/*2 ways:
	1.number of argument
	2.type of argument
*/
/*WAP to calculate area of circle,
area of rectangle using function
overloading.*/
#include<iostream>
using namespace std;
float area(float);
float area(float,float);
int main()
	{float rad,l,b,a1;
	cout<<"enter rad";
	cin>>rad;
	cout<<"enter l and b";
	cin>>l>>b;
	a1=area(rad);
	cout<<"circle area is:"<<a1<<endl;//endline
	cout<<"area of rect:"<<area(l,b);//
	return 0;
	}
float area(float r)//area of circle
{
	return (3.14*r*r);
}
float area(float a,float b)
{
	return (a*b);
}

