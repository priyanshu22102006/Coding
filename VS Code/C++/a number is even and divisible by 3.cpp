#include<iostream>
using namespace std;

int main()
{
	int a;
	cin>>a;
	if(a%2==0 && a%3==0)
	{
		cout<<"the number is both even and divisible by 3";
	}
	else{
		cout<<"the number is not even and divisible by 3";
	}
}
