#ifndef __INDEX_HPP__
#define __INDEX_HPP__

#include "SudokuCell.hpp"

using namespace std;

class Index : public SudokuCell{
	private:
		int row;
		int col;
		int cellValue;
	public:
		int row getRow(){
			return row;
		}	
		int col getColumn(){
			return column;
		}
		void setCell(int input){
			cellValue = input;	
		}
};
