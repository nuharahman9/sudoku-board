#ifndef __GAMESTRATEGY_HPP__
#define __GAME_STRATEGY_HPP__
#include <vector>
#include "SudokuBoard.hpp"
#include "SudokuCell.hpp"

using namespace std;

class GameStrategy {
public:
    GameStrategy() {}
    virtual SudokuCell*[][] generateGame();
    virtual int[][] generateSolution();
    virtual ~GameStrategy() = default;
    virtual bool difficulty(SudokuBoard* board) const = 0;

protected:
     int grid[9][9] = {{5, 3, 4, 6, 7, 8, 9, 1, 2},
                       {6, 7, 2, 1, 9, 5, 3, 4, 8},
                       {1, 9, 8, 3, 4, 2, 5, 6, 7},
                       {8, 5, 9, 7, 6, 1, 4, 2, 3},
                       {4, 2, 6, 8, 5, 3, 7, 9, 1},
                       {7, 1, 3, 9, 2, 4, 8, 5, 6},
                       {9, 6, 1, 5, 3, 7, 2, 8, 4},
                       {2, 8, 7, 4, 1, 9, 6, 3, 5},
                       {3, 4, 5, 2, 8, 6, 1, 7, 9}
                       };
    int grid1[9][9] = {{4,3,1,6,7,9,5,2,8}, //note: have to figure out a way to switch between the grids. for now ima leave it as one in the implementation 
                       {9,6,7,2,5,8,3,4,1}, // because hopefully we'll be able to have enough time to generate random arrays of boards.
                       {5,8,2,1,4,3,9,6,7},
                       {6,5,9,8,1,7,2,3,4},
                       {3,2,8,5,6,4,1,7,9},
                       {7,1,4,9,3,2,8,5,6},
                       {8,7,3,4,2,1,6,9,5},
                       {1,4,5,3,9,6,7,8,2},
                       {2,9,6,7,8,5,4,1,3}
                   };

};

class HardGame: public GameStrategy {
public:
    HardGame() {}
    virtual SudokuCell*[][] generateGame {
        int x = 0;
        int y = 0;
        srand(0); //note: using same int for now for the sake of testing.
        SudokuCell*[9][9] board; // note: might have to allocate memory for array first.
        for (unsigned int i = 0; i < 9; i++) {
            for (unsigned int j = 0; j < 9; j++) {
                board[i][j] = new SudokuCell(grid[i][j], i, j);
            }
        }
        for (unsigned i = 0; i < 57; i++) {
            x = rand() % 9;
            y = rand() % 9;
            board[i][j]->SetCell(0);

        }
        return board;
    }
    virtual int[][]generateSolution { return grid; }

};

class EasyGame: public GameStrategy {
public:
    EasyGame(); 
    virtual int[][] generateGame();
    virtual int[][]generateSolution() { return grid; }
protected:
    int grid[9][9] = {{4,3,1,6,7,9,5,2,8},  
                       {9,6,7,2,5,8,3,4,1},              
		       {5,8,2,1,4,3,9,6,7},
                       {6,5,9,8,1,7,2,3,4},
                       {3,2,8,5,6,4,1,7,9},
                       {7,1,4,9,3,2,8,5,6},
                       {8,7,3,4,2,1,6,9,5},
                       {1,4,5,3,9,6,7,8,2},
                       {2,9,6,7,8,5,4,1,3}};

};

#endif
