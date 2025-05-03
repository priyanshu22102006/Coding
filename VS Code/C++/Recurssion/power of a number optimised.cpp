#include<iostream>
using namespace std;
int pow(int p,int q){
	if(q==0) return 1;
	if(q%2==0) {
		int result=pow(p,q/2); 
		return result*result;
	}
	else{
		int result=pow(p,q/2); 
		return p*result*result;
		
	}
}
int main(){
//	int p,q;
//	cout<<"Enter base number : ";
//	cin>>p;
//	cout<<"Enter power of that number : ";
//	cin>>q;
	int result=pow(4,4);
	cout<<result;	
	return 0;
}
