#include<iostream>
using namespace std;
int main()
{
	int a,b,m;
	cout<<"A:";
	cin>>a;
	cout<<"B:";
	cin>>b;
	m=b;
	b=a;
	a=m;
	cout<<"swapped no of a="<<a<<"and b is:"<<b;
	return 0;
}
