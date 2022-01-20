// ii) Write a program (without using inbuilt functions and not using Strings or array) to swap first and last digits of any number

#include<iostream>
using namespace std;
int main(){
	int num; //this is the number 
	cin>>num;
	int numcpy= num; //copying number into another variable
	int rem=0,temp=0;
	int counter=0;
	
	//reversing the number and storing into temp variable//
	while(num){
		rem = num%10;
		temp = (temp*10)+rem;
		num = num/10;
		counter++;
	}
	
	rem=0;
	int result=0;
	int flag=0;
	while(numcpy){
		if(flag==0 || flag==counter-1){
			rem = numcpy%10;
			result= result*10+rem;
		}
		else{
			rem = temp%10;
			result = result*10+rem; 
		}
		numcpy= numcpy/10;
		temp = temp/10;
		flag++;
	}
	
	cout<<" number = "<<result;
	
	
}
