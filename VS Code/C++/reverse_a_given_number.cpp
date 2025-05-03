#include<iostream>
using namespace std;
int main()
{
	int a; 
	cout<<"enter a no to reverse: ";
	cin>>a;
	int reverse=0;
	
	while(a>0)
	{
		int lastdigit=a%10;//a=1456  lastdigit=6
		reverse=(reverse*10)+lastdigit; //(0*10)+6
		a=a/10;//145
		
	}
	
	cout<<reverse;
	
	return 0;
}
