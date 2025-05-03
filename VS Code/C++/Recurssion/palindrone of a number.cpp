#include<iostream>
using namespace std;
bool palindrome(int num,int *temp){
	//base case
	if(num>=0 and num<=9){
		int lastDigitOfTemp=(*temp%10);
		(*temp)/=10;
		return (num=lastDigitOfTemp);
	}
	bool result=(palindrome(num/10,temp) and (num%10)==((*temp)%10));
	(*temp)/=10;
	return result;
}
int main(){
	int num;
	cout<<"Enter any number :";
	cin>>num;
	int key=num;
	int *temp=&key;
	cout<<palindrome(num,temp);
	return 0;
}
