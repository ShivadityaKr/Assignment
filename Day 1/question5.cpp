#include<iostream>
using namespace std;
int main(){
	int num = 9;
	while(1){
		if(num%2==0 && num%3==0 && num%4==0 && num%5==0 &&  num%6==0 && num%7==0 && 
		num%8==0 && num%9==0)
		break;
		else num++;
	}
	cout<<"Smallest Number = "<<num;
}
