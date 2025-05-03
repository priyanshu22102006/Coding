#include<iostream>
#include<vector>
using namespace std;

int main()
{
int m;
int n;
int arr1[m];
int arr2[n];
int result[m+n];
cout<<"Enter length of 1st array: ";	
cin>>m;
cout<<"Enter length of 2nd array: ";	
cin>>n;
cout<<"Enter elements in the 1st array: "<<endl;	
for(int i=0;i<m;i++){
cin>>arr1[i];
}
cout<<"Enter elements in the 2nd array: "<<endl;	
for(int i=0;i<n;i++){
cin>>arr2[i];
}
int i=0;
int j=0;
int k=0;
while(i<m){
result[k]=arr1[i];
i+=1;
k+=1;
}
while(j<n){
result[k]=arr2[j];
j+=1;
k+=1;
}
for(int i=0;i<(m+n);i++)
{
	cout<<result[i];
}
return 0;
}

