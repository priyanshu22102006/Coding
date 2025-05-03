#include<iostream>
using namespace std;
int main()
{
	int a;
	int sum=0;
	cout<<"enter a no: ";
	cin>>a;
	
	while(a>0)
	{
		int lastdigit=a%10;

		sum+=lastdigit;
		a/=10;
		
	}
	
	cout<<sum<<endl;
	return 0;
}
