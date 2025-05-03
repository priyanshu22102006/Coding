#include<iostream>
using namespace std;

int main(){
	int num=1,i;
	cout<<"enter the no up to print: ";
	cin>>i;
	int sum=0;
	while(num<=i){
		sum=sum+num;		
		num++;
	}
	cout<<sum<<endl;
	
	int a;
	cout<<"enter the no up to print: ";
	cin>>a;
	int s=0;
	int n=1;
	for(n;n<=a;n++){
		s=s+n;	
	}
	
	cout<<s;
	
	return 0;
}
