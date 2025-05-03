#include<iostream>
using namespace std;
int main()
{
	int n;
	
	cout<<"enter no :";
	cin>>n;
	
	for(int j=1;j<=n;j++)
	{
		for(int i=1;i<=j;i++) 
		{ 
		cout<<i;
		}
	cout<<"\n";
	}
	
	return 0;
}
