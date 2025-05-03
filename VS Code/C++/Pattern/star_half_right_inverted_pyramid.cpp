#include<iostream>
using namespace std;
int main(){
	int n;//n=total no of rows
	cin>>n;
	
	for(int i=1;i<=n;i++){  //i=each row number
		for(int j=0;j<=(n-i);j++){ //j=each column no
			cout<<"*";
		}
	cout<<endl;
	}
	return 0;
}
