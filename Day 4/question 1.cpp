#include<bits/stdc++.h>
using namespace std;
class StringUtils{
//	 Returns occurrence of the given character in the given String (str).
	public:
		
	static int countChar(string str,char ch)
	{
		int occur=0;
		for(int i=0;i<str.length();i++){
			if(ch==str[i]) occur++;
		}
		return occur;
	}
//	Returns a substring from the start index to end index with all validation checks.
	static string substring(string str,int start,int end){
		string subStr="";
		for(int i=start;i<=end;i++)
			subStr+=str[i];
		return subStr;
	}
//	Returns an array of strings broken according to the occurrence of the given 
//	character with validation checks.
	static string* split(string str,char ch){
		int count = countChar(str,ch);
		string* result = new string[count+1];
		string temp="";
		int idx=0;
		for(int i=0;i<str.length();i++){
			
			if(ch==str[i]){
				if(ch!=str[i+1] && i>0){
					result[idx] = temp;
					temp="";
					idx++;	
				}
			}	
			else temp+=str[i];
		}
		if(temp[0] != ch)
		result[idx]= temp;
		return result;
	}
//	Returns true if the give string (pattern) found in the main string (str) otherwise false.
	static bool hasPattern(string str,string ch){
		int j=0;
		for(int i=0;i<str.length();i++){
			if(ch[j]==str[i])
			{
				j++;
			}
			else{
				j=0;
				
			}
			if(ch.length()==j) return true;
			
		}
	 return false;
	}
//	 Returns true if all words of the given string (str) contains the 
//	 given character (ch)  otherwise false.
	static bool allWordsContainsChar(string str,char ch){
		int flag=0; 
		for(int i=0;i<str.length();i++){
			if(ch==str[i])
			flag =1;
			if(str[i]==' '){
				if(flag == 1)
				flag =0;
				else
				return false;
			}
		}
		if(flag == 1) return true;
		else return false;
	}
//	Returns the reverse of the String (Without using extra String or array)
	static string reverse(string str){
	for(int i=0,c=str.length()-1;i<str.length()/2;i++,c--){
		char temp=str[i];
		str[i]=str[c];
		str[c]=temp;
	}	
	return str;
	}
	//function to check vowel//
	static bool checkVowel(char str){
		if	(str=='a' ||str=='A' || str=='e' || str=='E' ||
			str=='i' || str=='I' || str=='o' || str=='O' ||
			str=='u' || str=='U')
			return true;
		else return false;
	}
//	Reverse only all the vowels in the string and return i
	static string reverseVowels(string input){
	int length = input.length();
	int vow_index_front=-1;
	for(int i=0, count=length;i<length/2;i++,count--){
		if(checkVowel(input[i]))
		{
			vow_index_front=i;
			
		}
			
		if(checkVowel(input[count]))
			{
				if(vow_index_front!=-1)
				{
					char temp = input[vow_index_front];
					input[vow_index_front] = input[count];
					input[count] = temp;
					vow_index_front = -1;
				}
				}	
	}
	return input;
	}
};
int main(){
	string input="lllabclllabcll";
	StringUtils su;
//	cout<<su.countChar(input,'l');
//	cout<<su.substring(input,1,3);
//	string *str = su.split(input,'l');
//	for(int i=0;i<=su.countChar(input,'l');i++) {
//		if(str[i]!="") cout<<str[i]<<" ";
//	}
	cout<<su.hasPattern(input,"abc");
//	cout<<su.allWordsContainsChar(input,'l');
//	cout<<su.reverse(input);
// 	cout<<su.reverseVowels(input);
}
