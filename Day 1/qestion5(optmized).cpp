#include<iostream>
using namespace std;
int gcd(int a, int b){
	if(b==0) return a;
	return gcd(b,a%b);
}
int main(){
	int num[]={2,3,4,5,6,7,8,9};
	
	int n = sizeof(num)/sizeof(num[0]);
	
	int result = num[0];
	
	for(int i=1;i<n;i++){
		result = (num[i]*result)/gcd(num[i],result);
	}
	cout<<result;
}
