#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	int n1= n;
	int rem=0,temp=0;
	int c=0;
	while(n){
		rem = n%10;
		temp = (temp*10)+rem;
		n = n/10;
		c++;
	}
	
	rem=0;
	int temp2=0;
	int f=0;
	while(n1){
		if(f==0 || f==c-1){
			rem = n1%10;
			temp2= temp2*10+rem;
		}
		else{
			rem = temp%10;
			temp2 = temp2*10+rem; 
		}
		n1= n1/10;
		temp = temp/10;
		f++;
	}
	
	cout<<" number = "<<temp2;
	
	
}
