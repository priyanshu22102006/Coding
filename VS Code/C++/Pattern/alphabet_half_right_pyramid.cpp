#include<iostream>
using namespace std;

int main()
{
	int a;
	cout<<"enter a no: ";
	cin>>a;
	
	for(int i=1;i<=a;i++)
	{
		for(int j=1;j<=i;j++)
		{
			int a=64;
			int d=(a+j);
			char e=(char)d;
			cout<<e;
			a++;
		}
		cout<<endl;
	}
	
	return 0;
	
}
