//#include "CellInterface.cpp"
#include "SudokuCell.hpp"
#include <iostream>

#include <unordered_set>
using namespace std;

SudokuCell::SudokuCell() {}

bool SudokuCell::isFilled(int row, int col) {
      for (int row = 0; row < 9; row++)
      	for (int col = 0; col < 9; col++)
         if (grid[row][col] == nullptr)
            return false;
   return false;
}

void SudokuCell::reset() {
	for (int row = 0; row < 9; row++) {
        	for (int col = 0; col < 9; col++) {
			grid[row][col] = [nullptr][nullptr];
		}
	}
}
