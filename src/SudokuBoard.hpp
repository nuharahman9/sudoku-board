#ifndef __SUDOKUBOARD_HPP__
#define __SUDOKUBOARD_HPP__
#include <iostream>
#include "GameStrategy.hpp"
#include "SudokuCell.hpp"

using namespace std; 

class SudokuBoard {
public:
    SudokuBoard();
    int getScore() {
	//idea : compare game and solution, if same score++
	   
	    //initialize solution
	    //compare game and solution, if same score++
	    for(int i=0; i < 9; ++i){
                for(int j =0; j < 9; ++j){
                      if(game[i][j] == solution[i][j]){
			      	score++;
		      }
                }
                	 if(game[i][j] == solution[i][j]){
			      	score++;
		      }
        	}
	}  
	    return score;
    }

    void printBoard() {
	if (game == nullptr) {return 0; }
	cout << " |"; 
	for (unsigned int k = 0; k < 9; k++) { 	
	   cout << k++ << "|";  //prints row numbers 
	}
	cout << endl << "|"; 
       for (unsigned int i = 0; i < 9; i++) {
		cout << i++ << "|";
	for (unsigned int j = 0; j < 9; j++) {
		if (game[i][j]->getCell() != 0) {
			cout << game[i][j]->getCell() << "|";
		} else {
			cout << " " << "|";
		}
	}
	cout << endl;
	if (i == 2 || i == 5 || i == 8) {
		cout << "|=====|=====|=====|" << endl;
	}
	else{
		cout << "|-----|-----|-----|" << endl;
	}
     }
  		
  }
    void makeEntry() {
	cout << "Make an entry." << endl;
	cin >> userEntry;
	if (isFilled(int row, int col) == true) {
		cout << "No entry possible in this position.";
  		 }
	}
    void exitGame(){
	//make entry would call exit game if 'entry' is ever q
	//exit game then ends program
		cout << "Goodbye!" << endl;
		exit(0);
	}
    void createGame(){
	string input;
	cout << "Hello..." << endl;
	cout << "Hard or easy game? (Please type ""hard"" or ""easy"")" <<endl;
	cin >> input;
	
	if(input != "hard" || input != "easy"){
		while(input != "hard" || input != "easy"){
			cout << "Invalid input. Please try again." << endl;
			cin >> input;
		}
	}

	if(input == "hard"){
		GameStrategy* hard = new HardGame(); 
		game = hard->generateGame();
		solution = hard->generateSolution();
		//delete hard;  	
	}
	else if(input == "easy"){
		GameStrategy* easy = new EasyGame(); 
		game = easy->generateGame(); 
		solution = easy->generateSolution(); 
		//delete easy; 
	}
    }
    void getSolution() {
	int row = -1; 
	int col = -1; 
	cout << "Enter the digit of the row's solution you would like (1-9): " << endl;
	while (row < 1 || row > 9 ) { 
    		cin >> row; 
		if (row < 1 || row > 9) { 
			cout << "Invalid input! Please try again." << endl; 
		}		
	}
	cout << "Enter the digit of the column's solution you would like (1-9): " << endl;
        while (col < 1 || col > 9 ) {
                cin >> col;
                if (col < 1 || col > 9) {
                        cout << "Invalid input! Please try again." << endl;
                }
        }

	int soln = solution[row-1][col-1]; 
	cout << "Solution (row " << row << ", column " << col << "): " << soln << endl; 
	
   }  	

protected:
    int[9][9] solution;
    SudokuCell*[9][9] game;
    int score;
    bool keepPlaying;
    int userEntry;		
};
#endif
