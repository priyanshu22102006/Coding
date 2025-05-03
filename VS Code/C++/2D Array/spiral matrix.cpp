#include<iostream>
using namespace std;

int main()
{
	int n,m;
	cin>>n>>m;

	int arr[n][m];
	for(int i =0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			cin>>arr[i][j];
		}
	}
	
	int left=0;
	int right=m-1;
	int top=0;
	int bottom=n-1;
	
	int direction=0;
	
	while(left<=right && top<=bottom)
	{
		//left to right
		if(direction==0)
		{
			for(int col=left;col<=right;col++)
			{
				cout<<arr[top][col]<<" ";
			}
			top++;
		}
		//top to bottom
		else if(direction==1)
		{
			for(int row=top;row<=bottom;row++)
			{
				cout<<arr[row][right]<<" ";
			}
			right--;
		}
		//right to left
		else if (direction==2)
		{
			for(int col=right;col>=left;col--)
			{
				cout<<arr[bottom][col]<<" ";
			}
			bottom--;
		}
		//bottom to top
		else 
		{
			for(int row=bottom;row>=top;row--)
			{
				cout<<arr[row][left]<<" ";
			}
			left++;
		}
		direction=(direction+1)%4; //so that dthe value of direction always remains between 0,1,2,3
	}
	return 0;
}
