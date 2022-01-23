//Write an efficient algorithm that searches for a value in an m x n matrix. This matrix has the following properties:
//Integers in each row are sorted from left to right.
//The first integer of each row is greater than the last integer of the previous row.

//complexity : O(n+m)
#include<iostream>
using namespace std;
bool checkMatrix(int matrix[3][4],  int target, int rows, int cols){
	int index=0; //index container
	
	for(int i=0;i<rows;i++){
		if(target<matrix[i][0])
		{
			index=i-1;
			break;
		}
		
	}
	if(index<0) return false;
	else{
		for(int i=0;i<cols;i++){
			if(target==matrix[index][i])
			return true;
		}
	}
	return false;
	
}
int main(){
	int matrix[][4] = {{1,3,5,7},{10,11,16,20},{23,30,34,60}};
	int target = 3;
	int rows =  sizeof matrix / sizeof matrix[0];
	int cols = sizeof matrix[0] / sizeof(int); 
	if(checkMatrix(matrix,target,rows,cols))
	cout<<"true";
	else cout<<"false";
}
