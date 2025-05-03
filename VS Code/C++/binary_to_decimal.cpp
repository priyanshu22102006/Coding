#include<iostream>
using namespace std;
int main()
{
	int num;
	cout<<"enter a binary no: ";
	cin>>num;
	int power=1;
	int ans=0;
	while(num>0)
	{
		int lastdigit = num % 10;
		ans=ans+ (lastdigit*power);
		power=power * 2;
		num=num/10;	
	}	
	cout<<ans<<endl;
	return 0;
}
