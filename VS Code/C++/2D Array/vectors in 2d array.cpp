#include<iostream>
#include<vector>
using namespace std;

int main(){
	vector <vector<int> > v(5,vector<int> (5,10));
	for(int i=0;i<5;i++){
		for(int j=0;j<5;j++){
			cout<<v[i][j]<<" ";
		}
		cout<<endl;
	}
	return 0;
}
