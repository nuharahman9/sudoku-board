#ifndef __SUDOKUBOARD_HPP__
#define __SUDOKUBOARD_HPP__
#include <iostream>
#include "GameStrategy.hpp"
#include "SudokuCell.hpp"

using namespace std;

class SudokuBoard {
public:
    SudokuBoard();
    int getScore();
    void printBoard();
    void makeEntry();
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

    void getSolution(){
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
    


};
#endif
