#include<iostream>
using namespace std;
int main()
{
	int num1=5;
	int num2=9;
	cout<<num1+num2<<endl; //14
	cout<<num1-num2<<endl;//-4
	cout<<num1*num2<<endl;//45
	cout<<num2/num1<<endl;//1
	
	int a=6,b=5;
	cout<<(a++)<<endl;//6 in post increment at 1st the value is returned then it is increased 
	cout<<(--b)<<endl;//4
	int c;
	cout<<(c=a+b)<<endl;//11
	return 0;
}
