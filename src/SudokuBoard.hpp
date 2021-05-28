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
    void exitGame(); 
    void createGame(); 
    void getSolution(); 

protected:
    int[9][9] solution;
    SudokuCell*[9][9] game;
    int score;
    bool keepPlaying;
    int userEntry;		
};
#endif
