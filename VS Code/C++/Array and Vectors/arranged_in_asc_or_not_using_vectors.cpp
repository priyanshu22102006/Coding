#include<iostream>
#include<vector>
using namespace std;

int main()
{
	int siz;
	cout<<"Enter the size: ";
	cin>>siz;
	
	vector<int> a(siz);
	
	cout<<"ENTER VALUES : ";
	for(int i=0;i<a.size();i++)
	{
		cin>>a[i];
	}
	
    bool sortedflag=true; //1=true 
    for (int i=1;i<siz;i++){
        if (a[i]<=a[i-1]){
            sortedflag=false;
        }
    }
    cout<<sortedflag;
	return 0;
}
