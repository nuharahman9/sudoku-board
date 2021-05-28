#ifndef __SUDOKUCELL_HPP__
#define __SUDOKUCELL_HPP__

#include "SudokuBoard.hpp"
#include "Index.hpp"
#include <iostream>

using namespace std;

class SudokuCell : public SudokuBoard {
public: 
   bool isFilled() { return filled; } 
   bool setFilled(bool v) { filled = v; }
protected:                
   bool filled;       
	
};

#endif
