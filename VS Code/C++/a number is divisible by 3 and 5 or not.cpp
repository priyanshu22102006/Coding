#include<iostream>
using namespace std;

int main()
{
	int a;
	cin>>a;
	if(a%5==0 || a%3==0)
	{
		cout<<"the number is both divisible by 3 and 5";
	}
	else{
		cout<<"the number is not divisible by 3";
	}
}
