#include<iostream>
using namespace std;

int main(){
	int r,c;
	cout<<"Enter rows and column: ";
	cin>>r>>c;
	int array[r][c];
	for(int i=0;i<r;i++){
		for(int j=0;j<c;j++){
			cin>>array[i][j];
		}
	}
	
	int tarr[c][r];
	
	for(int i=0;i<c;i++){
		for(int j=0;j<r;j++){
			tarr[i][j]=array[j][i];
		}
	}
	for(int i=0;i<c;i++){
		for(int j=0;j<r;j++){
			cout<<tarr[i][j]<<" ";
		}
		cout<<endl;
	}
	return 0;
}
