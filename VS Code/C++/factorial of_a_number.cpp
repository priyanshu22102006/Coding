#include<iostream>
using namespace std;
int main()
{
	int num=5;

	int fact=1;
//	cout<<"Enter the number whose factorial is needed: ";
//	cin>>num;
	
	for (int i=1;i<=num;i++)
	{
		fact=fact*i;
	}
	cout<<fact;
	return 0;
}
