#include<iostream>
using namespace std;

int main()
{
	int a;
	cout<<"enter the no of rows: ";
	cin>>a;
	int i;
	int j;
	if(a%2==0) cout<"error ";
	else 
	{
		for(i=1;i<=a;i++)
		{
			for(j=1;j<=a;j++)
			{
				if(i==(a/2)+1 || j==(a/2)+1) 
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
	}
	return 0;
 } 
