#include<iostream>
using namespace std;
int main(){
	
	int array[]={1,2,3,4};
	
	cout<<sizeof(array)<<endl;   //size of the array is calculated and its 16(4*4)
	cout<<sizeof(array)/sizeof(array[0])<<endl;     //length of the array 4
	
	int size=sizeof(array)/sizeof(array[0]);   //size=4
	//no of elements present in the array can be checked by loops
	//for loop
	
	for(int indx=0;indx<size;indx++){
		cout<<array[indx]<<endl;
	}
	
	//for each loop
	/*for(int ele:array){
		cout<<ele<<endl;
	}*/
 
 	//while loop
 	int index=0;
 	while(index<size){
 		cout<<array[index]<<endl;
 		index++;
	 }
	 
	 char vowels[5];
	 for(int idx=0;idx<5;idx++){
	 	cin>>vowels[idx]; 
	 }
	for(int idx=0;idx<5;idx++){
	 	cout<<vowels[idx]<<" "; 
	 }
	return 0;
}
