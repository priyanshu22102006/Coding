#include<iostream>
using namespace std;

int main()
{
	int n;
	cin>>n;

	int arr[n][n];
	
	int left=0;
	int right=n-1;
	int top=0;
	int bottom=n-1;
	
	int direction=0;
	int num=1;
	
	while(left<=right && top<=bottom)
		{	
			//left to right
			if(direction==0)
			{
				for(int col=left;col<=right;col++)
				{
					arr[top][col]=num++;
				}
				top++;
			}
			//top to bottom
			else if(direction==1)
			{
				for(int row=top;row<=bottom;row++)
				{
					arr[row][right]=num++;
				}
				right--;
			}
			//right to left
			else if (direction==2)
			{
				for(int col=right;col>=left;col--)
				{
					arr[bottom][col]=num++;
				}
				bottom--;
			}
			//bottom to top
			else 
			{
				for(int row=bottom;row>=top;row--)
				{
					arr[row][left]=num++;
				}
				left++;
			}
			direction=(direction+1)%4; //so that dthe value of direction always remains between 0,1,2,3
		
		}
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cout<<arr[i][j]<<" ";
		}
		cout<<endl;
	}
	return 0;
}
