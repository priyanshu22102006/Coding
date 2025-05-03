#include<iostream>
using namespace std;
int main(){
	int n,m;
	cout<<"enter the length:";
	cin>>n;
	
	cout<<"enter the breadth:";
	cin>>m;
	
	for(int i=1;i<=m;i++){         //ei ta te column wise printing hobe
		
		for(int i=1;i<=n;i++){  //ei ta print kobe stars in a row.....like: *******...
		cout<<"*";
	}
		cout<<"\n";
	}
	

	return 0;
}
