#include<iostream>
using namespace std;
void multiple(int n,int k){
	//base case
	if (n<1 or k<1) return ;
	//self work
	multiple(n,k-1);
	//assumption
	cout<<(n*k)<<" ";
	
}
int main(){
	int num,k;
	cout<<"Enter number whose multiple is needed : ";
	cin>>num;
	cout<<"Also enter the limit of number : ";
	cin>>k;
	multiple(num,k);
	return 0;
}
