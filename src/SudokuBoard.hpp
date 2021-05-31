#ifndef __SUDOKUBOARD_HPP__
#define __SUDOKUBOARD_HPP__
#include <iostream>
#include "GameStrategy.hpp"
#include "SudokuCell.hpp"

using namespace std; 

class SudokuBoard {
	public:
   	 	 SudokuBoard();

  	  	 int getScore()=0;
 		 void printBoard()=0;
	
		 void getEntry(int row, int column, int input)=0;
   		 void makeEntry()=0;

		 void exitGame();
   		 void createGame();

		 void getSolution()=0;
	protected:
		int gameBoard [9][9];
		int userBoard[9][9];
		int row;
		int col;
		int cellValue;
		int score;
};
#endif

