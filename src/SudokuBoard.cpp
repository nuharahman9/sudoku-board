#include "SudokuBoard.hpp"
#include <iostream> 
#include <string> 

using namespace std; 

SudokuBoard* SudokuBoard::instance = 0;

SudokuBoard* SudokuBoard::getInstance() {
    if (!instance) {
        instance = new SudokuBoard;
    	return instance;
	}

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
	if (!instance) {
		return;
	 }
	
	for(int i=0; i < 9; i++){
		for(int j=0; j < 9; j++){
			if(j ==3 || j == 6){
				cout << " | ";
			}
			cout << userBoard[i][j] << " ";
		}
		if(i == 2 || i == 5){
			cout << endl;
		
			for(int k =0; k < 9; k++){
			cout << "---";
			}
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
	cin >> input;
	cellValue = input;
	
	this->getEntry(row, col, cellValue);
}

void SudokuBoard::getEntry(int row, int col, int cellValue){
	//double check
	userBoard[row][col] = cellValue;
}

void SudokuBoard::createGame(){
	string difficulty;  
	cout << "Select your difficulty (type 'easy' or 'hard'): " << endl; 

	cin >> difficulty; 
	GameStrategy* diff; 
	if (difficulty == "easy") { 
        	diff = new EasyGame(); 
	}  
	else if (difficulty == "hard") { 
		diff  = new HardGame(); 
	}	

    int** array = diff->generateGame(); 
    for (unsigned i = 0; i < 9; i++) { 
	for (unsigned k = 0; k < 9; k++) { 
            userBoard[i][k] = array[i][k];       	     
	}
    } 
   
   array = diff->generateSolution(); 
   for (unsigned i = 0; i < 9; i++) {
        for (unsigned k = 0; k < 9; k++) {
            gameBoard[i][k] = array[i][k];
        }
    }


     

			
}

void SudokuBoard::exitGame(){
	cout << "Goodbye!" << endl;
	exit(0);
}

void SudokuBoard::getSolution(){
	for(int r=0; r< 9; r++){
		for(int c =0; c< 9; c++){
			if(c == 3 || c == 6)
   			cout << " | ";
  			cout << gameBoard[r] <<" ";
 		}
 		if(r == 2 || r == 5){
  			cout << endl;
		}
  		for(int i= 0; i<9; i++){
   			cout << "---";
 		}
 		cout << endl;
	}		
		
}
