#ifndef __SUDOKUBOARD_HPP__
#define __SUDOKUBOARD_HPP__
#include <iostream>
#include "GameStrategy.hpp"
#include "SudokuCell.hpp"

using namespace std; 

class SudokuBoard {
	public:
		 static SudokuBoard* getInstance();

  	  	 int getScore()=0;
 		 void printBoard()=0;
	
		 void getEntry(int row, int column, int input)=0;
   		 void makeEntry()=0;

		 void exitGame();
   		 void createGame();

		 void getSolution()=0;
	protected:
		int gameBoard [9][9] = {{5, 3, 4, 6, 7, 8, 9, 1, 2},
                       		        {6, 7, 2, 1, 9, 5, 3, 4, 8},
                       			{1, 9, 8, 3, 4, 2, 5, 6, 7},
                        		{8, 5, 9, 7, 6, 1, 4, 2, 3},
                       			{4, 2, 6, 8, 5, 3, 7, 9, 1},
                       			{7, 1, 3, 9, 2, 4, 8, 5, 6},
                       			{9, 6, 1, 5, 3, 7, 2, 8, 4},
                       			{2, 8, 7, 4, 1, 9, 6, 3, 5},
                       			{3, 4, 5, 2, 8, 6, 1, 7, 9}
                       };
	
		int userBoard[9][9];
		int row;
		int col;
		int cellValue;
		int score;
		static SudokuBoard* instance;
	private:
		SudokuBoard(); /* private constructor to prevent instancing */
};
#endif

