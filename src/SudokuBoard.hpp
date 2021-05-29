#ifndef __SUDOKUBOARD_HPP__
#define __SUDOKUBOARD_HPP__
#include <iostream>
#include "GameStrategy.hpp"
#include "SudokuCell.hpp"

class SudokuBoard {
public:
    SudokuBoard();
    int getScore() {
	//idea : compare game and solution, if same score++
	   
	    //initialize solution
	    this->getSolution();
	    
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
       for (int i = 0; i < 9; i++) {
		cout << "|";
	for (unsigned j = 0; j < 9; j++) {
		if (game[i][j]->getCell() != 0) {
			cout << game[i][j]->getCell() << "|";
		} else {
			cout << " "  << "|";
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
		game = new EasyGame.generateGame();	
	}
	else if(input == "easy"){
		game = new HardGame.generateGame();
	}
    }
    void getSolution() {
   	 solution = game.generateSolution();
        for(int i=0; i < 9; ++i){
                for(int j =0; j < 9; ++j){
                        cout << solution[i][j] << ' ';
                }
                cout << endl;
        	}
	}  

protected:
    int[9][9] solution;
    SudokuCell*[9][9] game;
    int score;
    bool keepPlaying;
    int userEntry;		
};
#endif
