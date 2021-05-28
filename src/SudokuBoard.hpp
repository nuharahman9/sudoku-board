#ifndef __SUDOKUBOARD_HPP__
#define __SUDOKUBOARD_HPP__
#include <iostream>
#include "GameStrategy.hpp"
#include "SudokuCell.hpp"


class SudokuBoard {
public:
    SudokuBoard();
    int getScore();
    void printBoard();
    void makeEntry();
    void exitGame(){
	//make entry would call exit game if 'entry' is ever q
	//exit game then ends program
		exit(0);
	}
    void createGame(); 
    void getSolution(); 

protected:
    int[9][9] solution;
    SudokuCell*[9][9] game;
    int score;
    


};
#endif
