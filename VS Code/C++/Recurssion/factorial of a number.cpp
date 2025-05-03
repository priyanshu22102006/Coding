#include<iostream>
using namespace std;
int factorial(int n){
	if(n==1) return n;
	else{
		int ans=n*factorial(n-1);
		return ans;
 	}
}
int main(){
	int num=5;
//	cout<<"Enter a number :";
//	cin>>num;
	int ans=factorial(num);
	cout<<ans;
	return 0;
}
