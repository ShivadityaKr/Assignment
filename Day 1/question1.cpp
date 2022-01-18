#include<bits/stdc++.h>
using namespace std;

bool isNameValid(string name){
	int f1=0,f2=0;
	int l = name.length();
	string s1 = name;	
	transform(s1.begin(), s1.end(), s1.begin(), ::tolower);
	int index1=-1,index2=-1;
	
	for(int i=0; i<l;i++){
		 if(s1[i]=='a' || s1[i]=='e' || s1[i]=='i' || s1[i]=='o' || s1[i]=='u' ){
			f1++;
			
		}
		if(name[i]=='S')
			if(index1==-1) index1=i;
			else index2 = i;
	}
	
	

	
	if(index1 !=-1 && index2!= -1){
		for(int i=index1;i<=index2;i++){
			if(name[i]=='T') f2=1;
		}
	}
	
	if(f1==1 && f2==0) return true;
	else return false;
}

int main(){
	string name;
	cin>>name;
	if(isNameValid(name)) cout<<"Valid ";
	else cout<<"Not Valid";
}
