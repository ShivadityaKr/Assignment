//ii) Write a method Boolean isKingSafe(int[][]chessBoard)
//Returns true if king in the given chess board is safe from the given enemies otherwise false;
//NOTE: Enemies are- Horse, Camel, Queen, Elephant only
//Do not consider the colour case of the chess board for traversal of camel and all.

#include<iostream>
using namespace std;

//This program traversing all enemies travel path in order to safe the king 
//in this program all candidate are having their individual intger code
// 1 : for danger path
// 2 : camel
// 3 : Elephant
// 4 : queen
// 5 : horse
// 7 : king
// -7 : king is in danger
int main(){
	int chess[8][8]={0};
	int horse[2] ={1,1};
	int camel[2] ={0,1};
	int elephant[2] ={3,3};
	int queen[2] ={2,1};
	int king[2] = {6,0};
	int index1 = horse[0];
	int index2 = horse[1];
	//positioning of enemies
	chess[camel[0]][camel[1]]=5;
	chess[elephant[0]][elephant[1]]=5;
	chess[queen[0]][queen[1]]=5;
	cout<<"Horse=5 \t Camel=2 \t Elephant=3 \t Queen=4 \t king=7"<<endl<<endl;
	//horse travel//
	chess[index1][index2]=5;
	if(index1+2<8){
		if(index2+1<8)
		{
			if(chess[index1+2][index2+1]!=5){
				chess[index1+1][index2]=chess[index1+2][index2]=1;
				chess[index1+2][index2+1]=1;
			}
		}
		if(index2-1>=0)
		{
			if(chess[index1+2][index2-1]!=5){
				chess[index1+1][index2]=chess[index1+2][index2]=1;
				chess[index1+2][index2-1]=1;
			}
			
		}
	}
	if(index1-2>=0){
		if(index2+1<8)
		{
			if(chess[index1-2][index2+1]!=5){
				chess[index1-1][index2]=chess[index1-2][index2]=1;
				chess[index1-2][index2+1]=1;
			}
			
		}
		if(index2-1>=0)
		{
			if(chess[index1-2][index2-1]!=5){
				chess[index1-1][index2]=chess[index1-2][index2]=1;
				chess[index1-2][index2-1]=1;	
			}
		}
	}
	if(index2+2>=0 ){
		if(index1<7 &&chess[index1+1][index2+2]!=5){
			chess[index1][index2+1]=chess[index1][index2+2]=1;
			chess[index1+1][index2+2]=1;
		}
		if(index1>0 && chess[index1-1][index2+2]!=5){
			chess[index1][index2+1]=chess[index1][index2+2]=1;
			chess[index1-1][index2+2]=1;
		}
	}
	if(index2-2>=0){
		if(index1<7 && chess[index1+1][index2-2]!=5){
			chess[index1][index2-1]=chess[index1][index2-2]=1;
			chess[index1+1][index2-2]=1;
		}
		if(index1>0 && chess[index1-1][index2-2]!=5){
			chess[index1][index2-1]=chess[index1][index2-2]=1;
			chess[index1-1][index2-2]=1;
		}
	}
	//camel traversal
	index1 = camel[0];
	index2 = camel[1];
	for(int i=index1+1,j=index2-1;i<8 && j<8 && j>=0;i++,j--){
		if(chess[i][j]!=5)
		{
			chess[i][j]=1;
		}
		else{
			break;
		}
	}
	for(int i=index1-1,j=index2+1;i<8 && j<8 && i>=0;i--,j++){
		if(chess[i][j]!=5)
		{
			chess[i][j]=1;
		}
		else{
			break;
		}
	}
	for(int i=index1-1,j=index2-1;i>=0 && j>=0;i--,j--){
		if(chess[i][j]!=5)
		{
			chess[i][j]=1;
		}
		else{
			break;
		}
	}
	for(int i=index1+1,j=index2+1;i<8 && j<8;i++,j++){
		if(chess[i][j]!=5)
		{
			chess[i][j]=1;
		}
		else{
			break;
		}
	}
	chess[index1][index2]=2;
	//elephant traversal
	index1 = elephant[0];
	index2 = elephant[1];
	for(int i=index1,j=index2+1;j<8;j++){
		if(chess[i][j]<2){
			chess[i][j]=1;
		}else{
			break;
		}
	}
	for(int i=index1,j=index2-1;j>=0;j--){
		if(chess[i][j]<2){
			chess[i][j]=1;
		}else{
			break;
		}
	}
	for(int i=index1+1,j=index2;i<8;i++){
		if(chess[i][j]<2){
			chess[i][j]=1;
		}else{
			break;
		}
	}
	for(int i=index1-1,j=index2;i>=0;i--){
		if(chess[i][j]!=5){
			chess[i][j]=1;
		}else{
			break;
		}
	}
	chess[index1][index2]=3;
	//queen traversal
	index1 = queen[0];
	index2 = queen[1];
	for(int i=index1,j=index2+1;j<8;j++){
		if(chess[i][j]<2){
			chess[i][j]=1;
		}else{
			break;
		}
	}
	for(int i=index1,j=index2-1;j>=0;j--){
		if(chess[i][j]<2){
			chess[i][j]=1;
		}else{
			break;
		}
	}
	for(int i=index1+1,j=index2;i<8;i++){
		if(chess[i][j]<2){
			chess[i][j]=1;
		}else{
			break;
		}
	}
	for(int i=index1-1,j=index2;i>=0;i--){
		if(chess[i][j]<2){
			chess[i][j]=1;
		}else{
			break;
		}
	}
		for(int i=index1+1,j=index2-1;i<8 && j<8 && j>=0;i++,j--){
		if(chess[i][j]<2)
		{
			chess[i][j]=1;
		}
		else{
			break;
		}
	}
	for(int i=index1-1,j=index2+1;i<8 && j<8 && i>=0;i--,j++){
		if(chess[i][j]<2)
		{
			chess[i][j]=1;
		}
		else{
			break;
		}
	}
	for(int i=index1-1,j=index2-1;i>=0 && j>=0;i--,j--){
		if(chess[i][j]<2)
		{
			chess[i][j]=1;
		}
		else{
			break;
		}
	}
	for(int i=index1+1,j=index2+1;i<8 && j<8;i++,j++){
		if(chess[i][j]!=5)
		{
			chess[i][j]=1;
		}
		else{
			break;
		}
	}
	chess[index1][index2]=4;
	//king traversal
	index1 = king[0];
	index2 = king[1];

	if(chess[index1][index2]==1)
	{
		cout<<"king is in danger";
		cout<<endl<<endl;
		chess[index1][index2]=-7;
	}
	else if(chess[index1][index2]>2)
	cout<<"Invalid position";
	else
	{
		 cout<<"King is safe";
		 cout<<endl<<endl;
		 chess[index1][index2]=7;
	 }
	
	//chess board
	for(int i=0;i<8;i++){
		for(int j=0;j<8;j++)
			cout<<chess[i][j]<<" ";
		cout<<endl;
	}
}
