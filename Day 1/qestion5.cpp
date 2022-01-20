// v) Write a program to find the smallest number divisible by all the numbers between 1 to 9.

#include<iostream>
using namespace std;
int gcd(int a, int b){
	if(b==0) return a;
	return gcd(b,a%b);
}
int main(){
	int num[]={2,3,4,5,6,7,8,9};
	
	int length = sizeof(num)/sizeof(num[0]);
	
	int result = num[0];
	
	for(int i=1;i<length;i++){
		result = (num[i]*result)/gcd(num[i],result);
	}
	cout<<result;
}
