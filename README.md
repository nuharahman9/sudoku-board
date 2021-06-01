# Sudoku
 
 > Authors: Nuha Rahman, Hannah Cierlak, Vishal Menon
 > Nuha Rahman: https://github.com/nuharahman9
 > Hannah Cierlak: https://github.com/shrimpnoodles
 > Vishal Menon: https://github.com/vmeno0020

## Project Description:
 > Your project description should summarize the project you are proposing. Be sure to include
 > **Why is it important or interesting to you?**
 > 
 > This project is interesting to us because we all share an enthusiasm for the game Sudoku and wanted to gain a deeper understanding into how all the parts of the game would go together in code (C++). And because it will be a fun opportunity to translate our knowledge of programming into simple game development. This will be a great and challenging task for our goal of expanding our familiarity with game development.
 > **What languages/tools/technologies do you plan to use? (This list may change over the course of the project)
 >   * [toolname](link) - Short description**
 >   
 >   We plan to use C++, Github, and Git. We will work on this project through the Terminal using UCR's Hammer server.
 > * **What will be the input/output of your project?**
 > 
 > At its most basic level, the program will start by outputting a menu, prompting the user to begin a game. It will take numbers as an input, and generate an  > > > updated soduku board as an output, in addition to the numbers entered. With each move, the menu should be continuously output, taking letters as input, allowing > the user to regenerate a board view, or to quit the game. If we have the time, we would also like to add features such as allowing the user to enter the level of > difficulty they would like for their soduku game (via letter options as input), an option allowing users to view whether their entry was correct, as well as timed games. 
 > * **What are the two design patterns you will be using? For each design pattern you must explain in 4-5 sentences:**
 > 
 > Firstly we would like to use Singleton, as the program should be pretty simple and users can make sure that a class just has a single instance and a global access point is provided to that instance. In a game like Sudoku, where there is only one game board, it would make sense to use Singleton since it allows us to have only one instance of game board object that would be accessible to all clients. A problem that we anticipate to enocunter when implementing our project is that we may not have full control over global variables and more than one instance of the board object may be necessary. Singleton solves this issue by ensuring a class only has a single instance of an object and the game board object would be initialized only when it’s requested for the first time.
 >
 >  We would also like to use Strategy, as there are some algorithms such as where number will be displayed on the board, how the user will select the square they want to write an entry into, etc .  that should be hidden from the users. Since these algorithms will be closely related in terms of implementation, it would be convenient if they were encapsulated. Furthermore, Strategy allows for the clients of our project to choose the correct algorithm, so the need of multiple "if-else" statements would be eliminated. One issue that we expect to encounter when implementing our project using Strategy is that our project has to be aware of all the possible strategies in order to select the right one for the right siutation so we would expect testing to be quite complicated. However, in a game like sudoku, where you can have varying levels of difficulty, with strategy, unit testing would be relatively simple because each algorithm has its own class which can be tested by their own interface.

## Class Diagram

<img width="546" alt="Screen Shot 2021-05-30 at 10 38 06 PM" src="https://user-images.githubusercontent.com/77302524/120144992-b5d83500-c197-11eb-8156-07e828dde2d2.png">
 

 > ## Final deliverable
 > * Complete the sections below (i.e. Screenshots, Installation/Usage, Testing)
 > * Plan one more sprint (that you will not necessarily complete before the end of the quarter). Your In-progress and In-testing columns should be empty (you are not doing more work currently) but your TODO column should have a full sprint plan in it as you have done before. This should include any known bugs (there should be some) or new features you would like to add. These should appear as issues/cards on your Kanban board. 
 
 ## Screenshots
 > Screenshots of the input/output after running your application
 ## Installation/Usage
 > Instructions on installing and running your application
 > To run the Sudoku game, type g++ -g -O0 main.cpp -o Sudoku and then use the ./Sudoku command.
 ## Testing
 > Our project was tested using the google test submodule. We conducted unit tests for various functions implemented in our project.
