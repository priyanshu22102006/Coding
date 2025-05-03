#include<iostream>
using namespace std;

int main()
{
	int size;
	cout<<"enter size of the array :";
	cin>>size;
	
	int array[size];
	for(int i=0;i<size;i++)
	{
		cin>>array[i];
	}
	
	int k;
	cout<<"enter no of times to rotate the array :";
	cin>>k;
	k=k%size;  //ei ta kore amra buste pari je k "size" er koto multiple... 
	int j=0;
	int ansarray[size];
	for(int i=size-k;i<size;i++)
	{
		ansarray[j++]=array[i];
	}
	
	for(int i = 0; i<=k;i++)
	{
		ansarray[j++]=array[i];	
	}
	
	for(int i=0;i<size;i++)
	{
		cout<<ansarray[i]<<" ";
	}
	return 0;
}



//this above code can be done in another short way



//#include<iostream>
//using namespace std;
//void swaparray(int arr[],int i,int j){
//	while(i<j){
//		swap(arr[i],arr[j]);
//		i++;
//		j--;
//	}
//	
//}
//int main(){
//	int n=6;
//	int arr[]={10,20,30,40,50,60};
//	cout<<"Enter the length of array :";
//	cin>>n;
//	for(int i=0;i<n;i++){
//		cin>>arr[i];
//	}
//	int k;
//	cout<<"Enter no of times to rotate: ";
//	cin>>k;
//	k=k%n;
//	
//	swaparray(arr,0,n-k-1);
//	swaparray(arr,n-k,n-1);
//	swaparray(arr,0,n-1);
//	
//	for(int i=0;i<n;i++){
//		cout<<arr[i]<<"  ";
//	}
//
//	return 0;
//}
