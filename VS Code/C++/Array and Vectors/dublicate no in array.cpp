#include<iostream>
#include<vector>
using namespace std;
int main(){
	int n;
	cin>>n;
	vector<int> v(n);
	
	for(int i=0;i<v.size();i++){
		cin>>v[i];
		
	}
	bool dublicate=false;
	for(int i=0;i<v.size();i++){
		for(int j=i+1;j<v.size();j++){
			if(v[i]==v[j]){
				dublicate=true;
		    	cout<<v[i];
				break;
			}
		}
		if(dublicate==false) break;
	}
	
	return 0;
}
