#include<iostream>
using namespace std;

int main()
{
	int num=1;
	//cout<<"Enter number: ";
	//cin>>num;
	int i=50;
	for(num;num<=i;num++)
	{
		if(num%3==0)
		{
			continue;
		}
		else
		{
			cout<<num<<endl;
		}
	}
	return 0;
}
