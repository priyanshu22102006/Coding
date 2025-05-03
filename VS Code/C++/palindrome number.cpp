#include<iostream>
using namespace std;
int main()
{
	int num;
	cout<<"Enter a number to check it is palindrome or not : ";
	cin>>num;
	int temp=0;
	int key=num;
	for(int i=1;num!=0;i++){
		int lastDigit=num%10;
		temp=(10*temp)+lastDigit;
		num/=10;
	}
	
	if(temp==key){
		cout<<"THE NUMBER IS PALINDROME";
	} 
	else {
		cout<<"THE NUMBER IS NOT PALINDROME";	
	}
	return 0;
}
