#include<iostream>
#include<regex>
using namespace std;
int main(){
	string url="https://www.shivaditya.chom";
	
	const regex pattern("((http|https)://)(www.)?[a-zA-Z0-9@:%._\\+~#?&//=]{2,256}\\.[a-z]{2,6}\\b([-a-zA-Z0-9@:%._\\+~#?&//=]*)");
 	
 	if(regex_match(url, pattern) && !url.empty()) cout<<"Valid";
 	else cout<<"Not Valid";
	
	
}
