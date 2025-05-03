#include<iostream>
using namespace std;
int sum(int num){
	if(num>=0 and num<=9) return num;
	else{
//		int rem=num%10;
//		int rest=num/10;
		return sum(num/10) + (num%10);
	}
}
int main(){
	int num;
	cout<<"Enter a desired number  :";
	cin>>num;
	int result=sum(num);
	cout<<"Sum of digits of "<<num<<" is : "<<result;
	return 0;
}
