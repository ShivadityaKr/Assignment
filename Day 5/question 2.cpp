//Write a program to print all the possible combinations according to the input values.
#include<bits/stdc++.h>
using namespace std;
int main(){
	string s1 = "ZAYA";
	string s2 = "BO";
	string s3 = "UP";
	string s12 = "L";
	int input = 13;
	vector<string>container;

		for(int i=0;i<s1.length();i++){
			for(int j=0;j<s2.length();j++){
				if(input==12){
				string temp="";
					temp+=s1[i];
					temp+=s2[j];
					if (find(container.begin(), container.end(), temp) == container.end())
					container.push_back(temp);		
				}
				else
				for(int k=0;k<s3.length();k++){
					string temp="";
					if(input!=12)
					temp+=s1[i];
					if(input!=13)
					temp+=s2[j];
					
					temp+=s3[k];
					if (find(container.begin(), container.end(), temp) == container.end())
					container.push_back(temp);

				}
			}
		}
		for(int i=0;i<container.size();i++)
		cout<<container[i]<<" ";
		if(input == 123) cout<<s12[0]<<s3[0]<<" "<<s12[0]<<s3[1];
		
	
}
