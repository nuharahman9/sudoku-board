#ifndef __SUDOKUBOARD_HPP__
#define __SUDOKUBOARD_HPP__
#include <iostream>
//#include "GameStrategy.hpp"
#include "EasyHard.hpp"


using namespace std; 

class SudokuBoard {
	public:
		 static SudokuBoard* getInstance();

  	  	 int getScore();
 		 void printBoard();
	
		 void getEntry(int row, int column, int input);
   		 void makeEntry();

		 void exitGame();
   		 void createGame();

		 void getSolution();
	protected:
		int gameBoard [9][9];
		int userBoard [9][9];
		int row = -1;
		int col = -1;
		int cellValue = -1;
		int score = 0;
		static SudokuBoard* instance;
	private:
		SudokuBoard(); /* private constructor to prevent instancing */
};
#endif

