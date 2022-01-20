//i)Write a program to remove duplicate values from an array and 
//returns an array of unique values. int[] removeDuplicates(int[]values)

#include<bits/stdc++.h>
using namespace std;

//function to find duplicate element//
vector<int> findDuplicate(vector<int> list){
	vector<int> result;
	result.push_back(list[0]);
	
	for(int i=1;i<list.size();i++){
		int flag=0;
		for(int j=0;j<result.size();j++){
			if(result[j]==list[i])
			{
				flag=1;
				break;
			}
		}
		if(flag==0) result.push_back(list[i]);
	}
	return result;
}
//main function//
int main(){
	
	vector<int> list{ 1,2,4,3,4,1,2,5,1 };
	cout<<"Array : ";
	for(int i=0;i<list.size();i++) cout<<list[i]<<" ";
	
	vector<int> result = findDuplicate(list);
	
	list.clear();
	list = result;
	
	cout<<endl<<"Unique Array : ";
	for(int i=0;i<list.size();i++) cout<<list[i]<<" ";
	
	
}
