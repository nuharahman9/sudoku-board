#ifndef __EASY_GAME_HPP__
#define __EASY_GAME_HPP__

#include "GameStrategy.hpp"

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

#endif
