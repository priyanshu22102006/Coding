#include<iostream>
using namespace std;
int main()
{
	int a;
	cout<<"Enter no: ";
	cin>>a;
	
	int digit=0;
	while(a>0)
	{
		a=a/10;
		digit++;
		
	}
	cout<<digit;
	
	return 0;
}
