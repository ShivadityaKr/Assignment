#include<iostream>
using namespace std;
int main(){
	int num;
	cin>>num;
	int f=0;
	while(num){
		int temp=num;
		while(temp){
			f=0;
			int rem=temp%10;
			temp=temp/10;
			if(rem==2 || rem==3 || rem==5 || rem==7) {}
			else {
				f=1;
				temp=0;
			}
			
			}
			if(f==1) num--;
			else break;
	}
	
		
	cout<<num;
}
