// We have to print the following series sum-> 1-2+3-4+5.....n 

#include<iostream>
using namespace std;
int main()
{
	int num;
	cout<<"enter a number: ";
	cin>>num;
	int sum1=0;
	int sum2=0;
	
	for(int i=1;i<=num;i++)
	{
		if(i%2==0) //even=sum1
		{
			sum1 = sum1+i;
		}
		else  //odd =sum2
		{
			sum2 = sum2+i;
		}
	}
	
	int sum3 = sum2 - sum1;
	
	cout<<sum3<<endl;
	return 0;
}
