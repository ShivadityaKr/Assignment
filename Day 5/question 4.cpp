//Given an m x n 2D binary grid grid which represents a map of '1's (land) and '0's (water), return the number of islands.
//
//An island is surrounded by water and is formed by connecting adjacent lands horizontally or vertically. You may assume all four edges of the grid are all surrounded by water.

#include<iostream>
using namespace std;
int main(){
	int grid1[4][5] = {
		{1,1,0,0,1},
		{1,1,0,0,0},
		{0,0,1,0,0},
		{0,0,0,1,1}};
	
	int grid[8][8]={
		{1,1,1,1,0,0,0,0},
  		{1,1,1,1,0,0,0,0},
  		{1,1,1,1,0,0,0,0},
  		{1,1,1,1,0,0,0,0},
  		{0,0,0,0,1,0,1,0},
  		{1,0,1,1,0,0,0,0},
  		{1,1,0,1,0,0,1,0},
  		{1,1,1,1,0,0,0,0}
	};
	int count=2;
	for(int i=0;i<8;i++){
		for(int j=0;j<8;j++){
			if(grid[i][j]==1 && i==0)
			{
				if(grid[i][j-1] ==0 && j>0)
				grid[i][j]=++count;
				else
				grid[i][j]=count;
			}
			else if(grid[i][j]!=0){
				if(grid[i-1][j]!=0){
					grid[i][j]=grid[i-1][j];
				}else if(grid[i][j-1]!=0)
				grid[i][j]=grid[i][j-1];
				else{
					if(grid[i][j-1]==0 && grid[i-1][j]==0)
					grid[i][j]=++count;
					else if(grid[i-1][j]!=0)
					grid[i][j]=grid[i-1][j];
				}
			}
		}
	}
	
	cout<<"Island : "<<--count<<endl;
	for(int i=0;i<8;i++){
		for(int j=0;j<8;j++) cout<<grid[i][j]<<" ";
		cout<<endl;
	}
		
		
}
