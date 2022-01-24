//You are given an n x n 2D matrix representing an image, rotate the image by 90 degrees (clockwise).
//You have to rotate the image in-place, which means you have to modify the input 2D matrix directly. DO NOT allocate another 2D matrix and do the rotation.
#include<iostream>
using namespace std;
int main(){
	int matrix1[3][3]={
		{1,2,3},{4,5,6},{7,8,9}
	};
	int matrix[4][4]={
			{5,1,9,11},{2,4,8,10},{13,3,6,7},{15,14,12,16}
	};
	int n=4;
	
	//rotation 
	
	for(int i=0;i<n;i++){
		for(int j=0;j<i;j++){
			int temp;
			temp=matrix[j][i];
			matrix[j][i]=matrix[i][j];
			matrix[i][j]=temp;
			
		}
	}
	//reverse
	for (int i=0;i<n;i++) {
        int top =0;
        int bottom =n-1;
        while (top < bottom) {
 			int temp=matrix[i][top];
 			matrix[i][top]= matrix[i][bottom];
 			matrix[i][bottom]=temp;
 			
            top++;
            bottom--;
    }
}
	//display
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cout<<matrix[i][j]<<" ";
		}
		cout<<endl;
	}
}
