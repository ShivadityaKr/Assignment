// iii) Find the largest number less than N whose each digit is prime number
//complexity = O(logn);
#include<iostream>
using namespace std;
int main(){
	int num;
	cin>>num;
	int rem=0,temp=0;
	while(num){
		rem = num%10;
		if(rem==0 || rem == 9 || rem ==8)
		rem=7;
		else if(rem ==6) rem =5;
		else if(rem ==4) rem =3;
		if(rem==1) {}
		else{
			temp = temp*10+rem;
		}
		num = num/10;
		
	}
	cout<<temp;
}
