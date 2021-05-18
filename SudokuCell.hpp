#ifndef __SUDOKUCELL_HPP__
#define __SUDOKUCELL_HPP__

#include "sudoku.cpp"
#include "CellInterface.cpp"
#include <iostream>

#include <unordered_set>
using namespace std;

class SudokuCell : public CellInterface {
        private:
                int value;
                bool filled;
                unordered_set <int> attemptedCell; 

        public:
		SudokuCell();
		virtual bool isFilled();
		int getVal();
		void setVal(const int userNum);
		virtual void clear();
		virtual void reset();
		bool isTried(const int userNum);
		void tryNumber(const int userNum);
		int numTried();
};

#endif
