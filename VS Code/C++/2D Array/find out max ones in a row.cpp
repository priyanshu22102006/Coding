#include<iostream>
#include<vector>
using namespace std;

int main(){
	int n;
	int m;
	vector<vector<int> > vec(n,vector<int> (m));
	cout<<"Enter no of rows: ";
	cin>>n;
	cout<<"Enter no of column: ";
	cin>>m;
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cin>>vec[i][j];
		}
	}
	int maxOneIndex=-1;
	int maxOnes=INT_MIN;
	int column=vec[0].size();
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			if(vec[i][j]==1){
				int numberOfOnes=column-j;
				if(numberOfOnes>maxOnes){
					maxOnes=numberOfOnes;
					maxOneIndex=i;
				}
			}
		}
	}
	cout<<maxOneIndex;
	return 0;
}
