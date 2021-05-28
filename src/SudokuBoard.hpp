#ifndef __SUDOKUBOARD_HPP__
#define __SUDOKUBOARD_HPP__
#include <iostream>
#include "GameStrategy.hpp"
#include "SudokuCell.hpp"

class SudokuBoard {
public:
    SudokuBoard();
    int getScore() {
	return score;
    }

    void printBoard() {
  	for(int i = 0; i < 9; i++) {
    		for(int j = 0; j < 9; j++) {
      			if(game == nullptr)
				cout << ".";
			else
				cout << game[i][j];
      				cout << "|";
			}
    				cout << endl;
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
        //exit game then ends program;
              cout << "Goodbye!" << endl;
                exit(0);
        } 
    void createGame() {
	string input;
        cout << "Hello..." << endl;
        cout << "Hard or easy game? (Please type ""hard"" or ""easy""" <<endl;
        cin >> input;

        if(input == "hard"){
                game = new EasyGame.generateGame();
        }
        else if(input == "easy"){
                game = new HardGame.generateGame();
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
