#include<iostream>
using namespace std;
int main()
{
	int a;
	int b;
	cout<<"enter no of rows:";
	cin>>a;
	
	cout<<"enter no of column:";
	cin>>b;
	
	for (int i=1;i<=a;i++)
	{
		for(int j=1;j<=b;j++)
		{
			if(j==1 || j==b || i==1 || i==a)
			{
				cout<<"*";
			}
			else
			{
				cout<<" ";
			}
		}
	cout<<endl;
	}
	
	
	return 0;
}
