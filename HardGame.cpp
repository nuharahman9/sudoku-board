#include "GameStrategy.hpp"

HardGame::HardGame() {}
HardGame::int[][] generateGame() {
            int x = 0;
            int y = 0;
            srand(0); 
            int[9][9] board;
            memcpy(board, grid, sizeof(board));
            for (unsigned i = 0; i < 29; i++) {
                x = rand() % 9;
                y = rand() % 9;
                board[i][j] = 0;

            }
            return board;

}
