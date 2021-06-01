#ifndef __SUDOKUBOARD_TESTS_HPP__
#define __SUDOKUBOARD_TESTS_HPP__

#include "gtest/gtest.h"
#include "src/SudokuBoard.cpp"


#include <iostream>

using namespace std;

TEST(exitGame, functionCall){
        SudokuBoard *test = test->getInstance();
        test->createGame();

        ASSERT_EXIT(test->exitGame(), ::testing::ExitedWithCode(0), "");
}

#endif
