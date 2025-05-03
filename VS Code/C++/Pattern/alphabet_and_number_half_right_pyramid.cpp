#include<iostream>
using namespace std;

int main()
{
	int a;
	cout<<"enter a no: ";
	cin>>a;
	
	for(int i = 1;i<=a;i++)
	{
		if (i%2==0)
		{
			for(int j = 1;j<=i;j++)
			{
				int n=64;
				int d=n+j;
				char e=(char)d;
				cout<<e;
			}
			cout<<endl;
		}
		
		else
		{	 
		for(int j = 1;j<=i;j++)
			{
				cout<<j;
			}
			cout<<endl;
		}
	}
		
	return 0;
}
