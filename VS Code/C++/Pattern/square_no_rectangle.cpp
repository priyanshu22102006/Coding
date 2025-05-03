#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"Enter the no of lines to be printed: ";  //since its a square no rectangle so...only one input is needed
	cin>>n;
	for(int i=1;i<=n;i++)   // i is generally considered to be no of rows
	{
		for(int j=1;j<=n;j++)  //it implies no of elements in 1st row & j usually indicates no of columns
		{ 
		cout<<j;
		}
	cout<<"\n";
	}
	
	return 0;	
}
