#include "SudokuBoard.hpp"

SudokuBoard* SudokuBoard::instance = 0;

SudokuBoard* SudokuBoard::getInstance() {
    if (instance == 0) {
        instance = new SudokuBoard();
    }

    return instance;
}

SudokuBoard::SudokuBoard(){}

int SudokuBoard::getScore(){
	for(int i=0; i < 9; i++){
		for(int j=0; j <9; j++){
			if(userBoard[i][j] == gameBoard[i][j]){
				score++;
			}
		}
	}
	return score;	
}

void SudokuBoard::printBoard(){
	for(int r=0; i < 9; i++){
		for(int c =0; j< 9; j++){
			if(c == 3 || c == 6)
   			cout << " | ";
  			cout << userBoard[r] <<" ";
 		}
 		if(r == 2 || r == 5){
  			cout << endl;
		}
  		for(int i= 0; i<9; k++){
   			cout << "---";
 		}
 		cout << endl;
	}		
	
}

void SudokuBoard::makeEntry(){

	int input;

	cout << "Which row?" << endl;
	cin >> input;
	row = input;
	
	cout << "Which col?" << endl;
	cin >> input;
	col = input;
	
	cout << "What number?" << endl;
	cin >> input;}
	cellValue = input;
	
	this->getEntry(row, col, cellValue);
}

void SudokuBoard::getEntry(int row, int col, int cellValue){
	//double check
	userBoard[row][col] = cellValue;
}

void SudokuBoard::createGame(){
			
}

void SudokuBoard::exitGame(){
	cout << "Goodbye!" << endl;
	exit(0);
}

void SudokuBoard::getSolution(){
	for(int r=0; i < 9; i++){
		for(int c =0; j< 9; j++){
			if(c == 3 || c == 6)
   			cout << " | ";
  			cout << gameBoard[r] <<" ";
 		}
 		if(r == 2 || r == 5){
  			cout << endl;
		}
  		for(int i= 0; i<9; k++){
   			cout << "---";
 		}
 		cout << endl;
	}		
		
}
