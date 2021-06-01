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

SudokuBoard::~SudokuBoard(){
	delete instance;
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
	cout << score << endl;
	return score;	
}

void SudokuBoard::printBoard(){
	if (!instance) {
		return;
	 }
	
        cout << "   ";
        for (unsigned int i = 0; i < 9; i++) { 
  	  cout << (i + 1) << ' ';
  	  if (i == 2 || i == 5) { 
		cout << " | "; 
	}
	}
        cout << endl << " *************************" << endl;
	
	for(int i=0; i < 9; i++){
             cout << (i + 1) << "* "; 
		for(int j=0; j < 9; j++){
			if(j ==3 || j == 6){
				cout << " | ";
			}
			if (userBoard[i][j] != 0) { 
		          cout << userBoard[i][j] << " "; } 
			else { cout << "  "; } 
		
		}
		if(i == 2 || i == 5){
			cout << endl;
		
			cout << "**---------------------------"; 
		}
		cout << endl;
	}			

}

void SudokuBoard::makeEntry(){
	int input = 0;
        cout << "Which row?" << endl;
        cin >> input;  
	if (input < 1 || input > 9) { 
	   cout << "Invalid input!" << endl; 
   	   return;  
	}
        this->row = input-1; 
	input = 0; 
  	cout << "Which column?" << endl;
        cin >> input;
        if (input < 1 || input > 9) {
           cout << "Invalid input!" << endl;
           return; 
        }
	this->col = input - 1; 
	input = 0;
        cout << "What number for your entry?" << endl;
        cin >> input;
        if (input < 1 || input > 9) {
           cout << "Invalid input! Please try again." << endl;
           return; 
        }
	this->cellValue = input;	
	this->getEntry(row, col, cellValue);
}

void SudokuBoard::getEntry(int row, int col, int cellValue){
	
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

	delete diff;
 	  				
}

void SudokuBoard::exitGame(){
	cout << "Goodbye!" << endl;
	exit(0);
}

void SudokuBoard::getSolution(){
	for(int i=0; i < 9; i++){
		for(int j=0; j < 9; j++){
			if(j ==3 || j == 6){
				cout << " | ";
			}
			cout << gameBoard[i][j] << " ";
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
