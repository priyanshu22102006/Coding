#include<iostream>
using namespace std;

int main()
{
	int a,b;
	cout<<"Enter your age:";
	cin>>a;
	
	if(a<12)
	{
		cout<<"child";
	}
	
	else if(a>18) {
		cout<<"adult";
	}
	else 
	{
		cout<<"teenager";
	}
	return 0;
}
	

