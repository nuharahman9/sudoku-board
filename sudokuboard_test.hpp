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

TEST(createGame, createEasy){
	SudokuBoard *test = test->getInstance();
	test->setDifficulty("easy");
	test->createGame();
	
	EXPECT_EQ(test->isEasy(), 1);	
}

TEST(createGame, createEasy2){
	SudokuBoard *test = test->getInstance();
        test->setDifficulty("easy");
        test->createGame();

        EXPECT_EQ(test->isHard(), 0);
}

TEST(createGame, createHard){
        SudokuBoard *test = test->getInstance();
        test->setDifficulty("hard");
        test->createGame();

        EXPECT_EQ(test->isHard(), 1);
}

TEST(createGame, createHard2){
        SudokuBoard *test = test->getInstance();
        test->setDifficulty("hard");
        test->createGame();

        EXPECT_EQ(test->isEasy(), 0);
}

TEST(makeEntry, gettingCol3){
	SudokuBoard *test = test->getInstance();
	test->setDifficulty("easy");
	test->createGame();
	
	test->makeEntry();
	
	EXPECT_EQ(test->getCol(), 3);
}

TEST(makeEntry, gettingRow9){
        SudokuBoard *test = test->getInstance();
        test->setDifficulty("easy");
        test->createGame();

        test->makeEntry();

        EXPECT_EQ(test->getRow(), 9);
}

TEST(makeEntry, gettingCellValue2){
        SudokuBoard *test = test->getInstance();
        test->setDifficulty("easy");
        test->createGame();

        test->makeEntry();

        EXPECT_EQ(test->getCellValue, 2);
}

#endif
