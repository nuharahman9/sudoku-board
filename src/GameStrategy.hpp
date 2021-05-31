#ifndef __GAMESTRATEGY_HPP__
#define __GAME_STRATEGY_HPP__
#include <vector>
#include "SudokuBoard.hpp"

using namespace std;
class GameStrategy {
public:
    GameStrategy() {}
    virtual int** generateGame()=0;
    virtual int** generateSolution()=0;
    virtual ~GameStrategy() = default; 
};

/*
class HardGame: public GameStrategy {
public:
    HardGame();
    ~HardGame(); 
    virtual int** generateGame();
    virtual int** generateSolution(); 
protected:
     int** board = 0; 
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
};

class EasyGame: public GameStrategy {
public:
    EasyGame(); 
    ~EasyGame(); 
    virtual int** generateGame();
    virtual int** generateSolution(); 
protected:
    int** board = 0; 
    int grid[9][9] = {{4,3,1,6,7,9,5,2,8}, 
                       {9,6,7,2,5,8,3,4,1}, 
                       {5,8,2,1,4,3,9,6,7},
                       {6,5,9,8,1,7,2,3,4},
                       {3,2,8,5,6,4,1,7,9},
                       {7,1,4,9,3,2,8,5,6},
                       {8,7,3,4,2,1,6,9,5},
                       {1,4,5,3,9,6,7,8,2},
                       {2,9,6,7,8,5,4,1,3}
   		  };
	
};
*/

#endif

