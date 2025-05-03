#include<iostream>
using namespace std;

int main()
{
	int a;
	cout<<"enter the no of rows: ";
	cin>>a;
	int i;
	int j;
	int k=1;
		for(i=1;i<=a;i++)
		{
			for(j=1;j<=i;j++)
			{
				cout<<k++<<" ";
			}
 		cout<<endl;
		}
	
	return 0;
 } 
