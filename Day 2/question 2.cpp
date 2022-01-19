// Write a function that takes in a non-empty array of distinct integers
// and an integer representing a target sum. The function should find 
// all triplets in the array that sum up to the target sum and return
// a two-dimensional array of all these triplets. The numbers in each triplet 
// should be ordered in ascending order, and the triplets themselves should be 
// ordered in ascending order with respect to the numbers they hold. If no three 
// numbers sum up to the target sum, the function should return an empty array
#include<bits/stdc++.h>
using namespace std;
vector<int> findTriplets(vector<int> integers,int n){
	int len = integers.size();
	vector<vector<int>>result;
	int num1, num2, num3;
	num1= num2= num3= 0;
	for(int i=0;i<len-2;i++){
		num1=integers[i];
		for(int j=1;j<len-1;j++){
			num2= integers[j];
			for(int k=2;k<len;k++){
				num3= integers[k];
				if(num1+num2+num3 == n){
					vector<int> temp{num1,num2,num3};
					sort(temp.begin(),temp.end());
					int f=0,f2=0;
					if(result.size()!=0){
						f=0;
						for(int r=0;r<result.size();r++){
							for(int c=0;c<3;c++){
								if(temp[c]==result[r][c])
								f++;
							}
							if(f>2) break;
							
						}
						if(temp[0]==temp[1] || temp[0]==temp[2])
						f2=1;
						else if(temp[1]==temp[2]) 
						f2=1;
						
					}
					if(f<3 && f2==0)
					result.push_back(temp);
				
					
				}
				
				
			}
		}
	}
	for(int i=0;i<result.size();i++){
		for(int j=0;j<result[i].size();j++)
		cout<<result[i][j]<<" ";
		cout<<endl;
	}
}
int main(){
	vector<int> integers{1,2,3,4,-2,-1,6,7,-13};
	int n =10;
	findTriplets(integers,n);
	
}
