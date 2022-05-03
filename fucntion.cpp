//WAP to calculate area of circle using user
//defined function. A=pi *r*r;
/*function definition syntax:
	return_type function_name(arg1,arg2,..argn)
	{
		//function body statements
	}
*/
#include<iostream>
using namespace std;
//function prototype
void area(float);
int main(){
	float rad;
	cin>>rad;//input
	area(rad);           //function call
	//cout<<"answer is:"<<A;
	return 0;  	
}
//function code goes here
//function definition
void area(float r)
{
	float A=3.14*r*r;
	cout<< A;
}
