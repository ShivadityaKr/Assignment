//1. Write a method void printArray(int[][]arr)
//Prints array elements clock wise and anti-clockwise alternatively.

#include<iostream>
using namespace std;

//function for printing array//
void printArray(int arr[5][5]){
	int n=5; //size of array
//	clock wise printing 
	int count=n-1;
	bool flag=0;
	for(int i=0,c=0;i<n;i++,c++){
		for(int j=0;j<n;j++){
			if(i==0)
			cout<<arr[i][j]<<" ";
			else if(i>0 && i+1<n && flag ==0		){
				if( j==n-1)
				cout<<arr[i][j]<<" ";
			}
			else if(flag==0){
				cout<<arr[i][count--]<<" ";
			}
			if(flag == 1 && j<n-1)
			cout<<arr[i][j]<<" ";
			
		}
		if(flag ==1){
			break;
		}
		if(i == n-1 && flag ==0 && n>2)
		{
			i-=2;
			flag =1;
		
		}
	}
		
	
	//Anti-clockwise
	flag=0;
	count=0;
	cout<<endl;
	for(int i=0;i<n;i++){
		for(int j=n-1;j>=0;j--){
			if(i==0)
				cout<<arr[i][j]<<" ";	
			else if(i>0 && i+1<n && flag ==0){
				if( j==0)
				cout<<arr[i][j]<<" ";
			}
			else if(flag==0){
				cout<<arr[i][count++]<<" ";
			}
			if(flag == 1 && j>0)
			cout<<arr[i][j]<<" ";
		}
		if(flag ==1){
			break;
		}
		if(i == n-1 && flag ==0 && n>2)
		{
			i-=2;
			flag =1;
		
		}
		
	}
}
//main function
int main(){
	int arr[5][5]={{1, 2, 3,4,5},
 				{6,7,8,9,10},
 				{11,12,13,14,15},
 				{16,17,18,19,20},
 				{21,22,23,24,25}
				 
				 };
 	printArray(arr);
 	
}
