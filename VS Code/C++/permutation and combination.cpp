#include<iostream>
using namespace std;
int factorial(int &n){
	int fact=1;
	for(int i=1;i<=n;i++){
		fact*=i;		
	}
	n=fact;
	return n;
}
int main(){
	int n;
	cin>>n;
	cout<<"C"<<endl;
	int r;
	cin>>r;
	int a=n-r;
//	factorial(n); //n!
//	factorial(r); //r!
//	factorial(n-r); 
	int ans=(factorial(n)/(factorial(r)*factorial(a)));
	cout<<ans;
	return 0;
}
