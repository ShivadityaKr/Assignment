//i) Write a method Boolean isValidSudoku(int[][]Sudoku)
//Returns true if the given Sudoku is correctly arranged otherwise false
//Determine if a 9 x 9 Sudoku board is valid. Only the filled cells need to be validated according to the following rules:
//Each row must contain the digits 1-9 without repetition.
//Each column must contain the digits 1-9 without repetition.
//Each of the nine 3 x 3 sub-boxes of the grid must contain the digits 1-9 without repetition.

#include<iostream>
using namespace std;

//function for validating board//
bool isValid(string board[9][9]){
	
	string check1="";
	string check2="";
	
	//checking row wise and column wise//
	for(int i=0;i<9;i++){
		check1=check2="";
		for(int j=0;j<9;j++){
			if(check1.find(board[i][j])==string::npos){
				if(board[i][j]!=".")
				check1.append(board[i][j]);
			}else return false;
			if(check2.find(board[j][i])==string::npos){
				if(board[j][i]!=".")
				check2.append(board[j][i]);
			}
			else return false;
		}
	}
	//checking boxes//
	string check3="";
	int row=0,col=0;
	for(int k=0;k<9;k++){
		check3="";
		for(int i=row+0;i<row+3;i++){
			for(int j=col+0;j<col+3;j++){
				if(check3.find(board[i][j])==string::npos){
					if(board[i][j]!=".")
					check3.append(board[i][j]);
				}else{
					return false;
				}	
			}	
		}
		if(col==6)
		{
			col-=9;
			row+=3;
		}
		col+=3;	
	}
	return true;
}
//main function//
int main(){
	string board[9][9]={{"5","3",".",".","7",".",".",".","."},
						{"6",".",".","1","9","5",".",".","."},
						{".","9","8",".",".",".",".","6","."},
						{"8",".",".",".","6",".",".",".","3"},
						{"4",".",".",".",".","3",".",".","1"},
						{"7",".",".",".","2",".",".",".","6"},
						{".","6",".",".",".",".","2","8","."},
						{".",".",".","4","1","9",".",".","5"},
						{".",".",".",".","8",".",".","7","9"}};
						
	if(isValid(board))
	cout<<"True";
	else cout<<"False";
}
