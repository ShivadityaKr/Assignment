//print pattern//

#include<iostream>
using namespace std; 
int main(){
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		
		for(int j=0, c=n-1;j<n;j++,c--)
		{
			if(i==j && i!=n/2)
			cout<<"\\ ";
			else if(i==j && i==n/2)
			cout<<"/ ";
			else if(i==c && c!=n/2)
			cout<<"/ ";
			else
			cout<<"* ";
		}
		cout<<endl;
	}
}
