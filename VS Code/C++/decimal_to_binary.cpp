#include<iostream>
using namespace std;

int main()
{
	int num;
	cout<<"enter a number : ";
	cin>>num;
	
	int sum=0;
	int power=1;
	while(num>0)
	{
		int lastdigit=num%2;
		sum=sum+(lastdigit*power);
		power=power*10;
		num=num/2;
	}
	
	cout<<sum<<endl;
	return 0;
}
