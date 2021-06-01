#ifndef __SUDOKUBOARD_HPP__
#define __SUDOKUBOARD_HPP__
#include <iostream>
//#include "GameStrategy.hpp"
#include "EasyHard.hpp" 
#include <string>

using namespace std; 

class SudokuBoard {
	public:
		 static SudokuBoard*  getInstance();
		 
		 ~SudokuBoard();
  	  	 int getScore();
 		 void printBoard();
	
		 void getEntry(int row, int column, int input);
   		 void makeEntry();
		 void exitGame();
   		 void createGame();
		 static void StaticDestructor(); 
		 void getSolution();
		
	protected: 
		int gameBoard [9][9];
		int userBoard [9][9];
		int row = -1;
		int col = -1; 
		int emptySlots = 0; 
		int cellValue = 0;
		static SudokuBoard* instance; 
		string difficulty = ""; 
	private: 
		SudokuBoard(); /* private constructor to prevent instancing */
};

#endif

