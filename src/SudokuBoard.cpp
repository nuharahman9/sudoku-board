#include "SudokuBoard.hpp"


int SudokuBoard::getScore(){

}

void SudokuBoard::printBoard(){

}

void SudokuBoard::makeEntry(){
	int input;
	cout << "Which row?" << endl;
	cin >> input;
	row = input;
	
	cout << "Which col?" << endl;
	cin >> input;
	col = input;
	
	cout << "What number?" << endl;
	cin >> input;
	cellValue = input;
	
	this->getEntry(row, col, cellValue);
}

void SudokuBoard::makeEntry(){

}

void SudokuBoard::createGame(){
	
}

void SudokuBoard::getSolution(){

}
