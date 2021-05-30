#include "src/GameStrategy.hpp"
#include "src/SudokuBoard.hpp"
#include "src/SudokuCell.cpp"
#include "src/index.hpp"

int main() {
	SudokuBoard sb;
	string userEntry;

	sb.createGame();
	sb.printBoard();

	sb.makeEntry();
	sb.exitGame();
	sb.getSolution();
	sb.getScore();
}
