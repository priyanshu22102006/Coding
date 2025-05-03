#include<iostream>
using namespace std;

int main()
{
	int num;
	cout<<"enter desired number: ";
	cin>>num;
	
	while(num>0)
	{
		if(num%5==0)
		{
			if(num%7==0)
			{
				cout<<"the number is a multiple of 5 and 7 ";
			}
			else
			{
				cout<<"the number is a multiple of 5 but not 7 ";	
			}		
		}
		else{
			cout<<"the number is not a multiple of 5 and 7";
		}
	break;	
	}
	
	return 0;
}
