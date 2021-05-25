#ifndef __SUDOKUCELL_HPP__
#define __SUDOKUCELL_HPP__

#include "SudokuBoard.cpp"
#include "Index.cpp"
#include <iostream>

using namespace std;

class SudokuCell : public SudokuBoard.cpp {
	protected:
		bool isFilled();
        private:
                int value;
                bool filled;

        public:
		void reset();
		int grid[][];
		int *row;
		int *col;
};

#endif
