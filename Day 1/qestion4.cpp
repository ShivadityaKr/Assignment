//Write a function Boolean isValidURL(String url).
#include<iostream>
#include<regex>
using namespace std;
//funcion for validating the url//
bool isValidURL(string url){
	const regex pattern("((http|https)://)(www.)?[a-zA-Z0-9@:%._\\+~#?&//=]{2,256}\\.[a-z]{2,6}\\b([-a-zA-Z0-9@:%._\\+~#?&//=]*)");
 	
 	if(regex_match(url, pattern) && !url.empty()) return true;
 	else return false;
}
int main(){
	string url="https://www.shivaditya.chom";
	
	if(isValidURL(url)) cout<<"Valid";
	else cout<<"Not Valid";
	
}
