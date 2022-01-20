// i) Write down a method boolean isNameValid(String  name).
// A name is valid if following conditions are satisfied:
// • It does not contain any vowel more than once.
// • If the name contains two ‘S’, then there is not any ‘T’ in between them (both in capital cases).

#include<bits/stdc++.h>
using namespace std;

//function for validating string//
bool isNameValid(string name){
	int flag1=0,flag2=0;
	int length = name.length();
	string temp = name;	
	
	//converted into lower case
	transform(temp.begin(), temp.end(), temp.begin(), ::tolower);
	
	//this defines index of S//
	int index1=-1,index2=-1;
	
	for(int i=0; i<length;i++){
		 if(temp[i]=='a' || temp[i]=='e' || temp[i]=='i' || temp[i]=='o' || temp[i]=='u' ){
			flag1++;
			
		}
		if(name[i]=='S')
			if(index1==-1) index1=i;
			else index2 = i;
	}
	
	

	
	if(index1 !=-1 && index2!= -1){
		for(int i=index1;i<=index2;i++){
			if(name[i]=='T') flag2=1;
		}
	}
	
	if(flag1==1 && flag2==0) return true;
	else return false;
}
//main function//
int main(){
	string name;
	cin>>name;
	if(isNameValid(name)) cout<<"Valid ";
	else cout<<"Not Valid";
}
