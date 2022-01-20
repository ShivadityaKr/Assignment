//Given a string s, find the length of the longest substring without repeating characters.
#include<bits/stdc++.h>
using namespace std;

//function to find longest substring //
int longestSubstring(string input){
	int length = input.length();
	string temp="";
	int resultLength=0;
	
	for(int i=0;i<length;i++){
		
		if(resultLength<temp.length())
		resultLength = temp.length();
		
		if(temp.find(input[i])==string::npos)
		temp+=input[i];
		else{
		temp="";	
		temp+=input[i];
		}
	}
	return resultLength;
}
//function main//
int main(){
	string input = "abc 0.abcbb";
	int lengthOfSubstring = longestSubstring(input);
	
	cout<<"Length of substring : "<<lengthOfSubstring;
}
