#include<iostream>
using namespace std;
int power(int p,int q){
	if(q==0) return 1;
	return p*power(p,q-1);
}
int main(){
	int p,q;
	cout<<"Enter base number : ";
	cin>>p;
	cout<<"Enter power of that number : ";
	cin>>q;
	
	int result=power(p,q);
	cout<<result;
	return 0;
}
