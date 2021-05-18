#include "sudoku.cpp"
#include "CellInterface.cpp"
#include "SudokuCell.hpp"
#include <iostream>

#include <unordered_set>
using namespace std;

SudokuCell::SudokuCell() {
	filled = false;
	attemptedCell = new unordered_set();
}

virtual bool SudokuCell::isFilled() {
	return filled;
}

int SudokuCell::getVal() {
	return value;
}

void SudokuCell::setVal(const int userNum) {
	filled = true;
	value = userNum;
	attemptedCell.add(userNum);
}

virtual void SudokuCell::clear() {
	value = 0;
	filled = false;
}

virtual void SudokuCell::reset() {
	clear();
	attemptedCell.clear();
}

bool SudokuCell::isTried(const int userNum) {
	return attemptedCell.contains(userNum);
}

void SudokuCell::tryNumber(const int userNum) {
	attemptedCell.add(userNum);
}

int SudokuCell::numTried() {
	return attemptedCell.size();
}
