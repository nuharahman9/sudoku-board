 > As you complete each section you **must** remove the prompt text. Every *turnin* of this project includes points for formatting of this README so keep it clean and keep it up to date. 
 > Prompt text is any lines beginning with "\>"
 > Replace anything between \<...\> with your project specifics and remove angle brackets. For example, you need to name your project and replace the header right below this line with that title (no angle brackets). 
# Sudoku
 > Your author list below should include links to all members GitHub (remove existing author).
 
 > Authors: \<[Jeffrey McDaniel](https://github.com/jmcda001)\>
 
 > You will be forming a group of **THREE** students and working on an interesting project. A list of proposed project ideas that have been successful in previous quarters is given in the project specifications link on iLearn. You can select an idea from the list, start thinking about the features you will implement, what design patterns can help you implement them, and why. If you want to propose your own original idea, you will have to contact an instructor to discuss the project and obtain written permission before you submit your project proposal. Your project needs to implement two design patterns.The project work should be divided almost equally among team members and each member is expected to work on at least one design pattern (more than one partner may work on a pattern) and some of its test cases. You can of course help each other, but it needs to be clear who will be responsible for which patterns and for which features.
 
 > ## Expectations
 > * Incorporate **at least two** distinct design patterns. You need to include at least *one* design pattern that we will teach this session:
 >   * Composite, Strategy, Abstract Factory, Visitor, or Decorator
 > * All design patterns need to be linked together (it can't be two distinct projects)
 > * Your project should be implemented in C++. If you wish to choose anoher programming language (e.g. Java, Python), please discuss with your lab TA to obtain permission.
 > * You can incorporate additional technologies/tools but they must be approved (in writing) by the instructor or the TA.
 > * Each member of the group **must** be committing code regularly and make sure their code is correctly attributed to them. We will be checking attributions to determine if there was equal contribution to the project.
> * All project phases are to be submitted to this GitHub repository. You should modify this README file to reflect the different phases of the project. In addition, you should regularly hold sprint meetings with your group.

## Project Description:
 > Your project description should summarize the project you are proposing. Be sure to include
 > **Why is it important or interesting to you?**
 > 
 > This project is interesting to us because we all share an enthusiasm for the game Sudoku and wanted to gain a deeper understanding into how all the parts of the game would go together in code (C++).
 > **What languages/tools/technologies do you plan to use? (This list may change over the course of the project)
 >   * [toolname](link) - Short description**
 >   
 >   We plan to use C++, Github, and Git. We will work on this project through the Terminal using UCR's Hammer server.
 > * **What will be the input/output of your project?**
 > 
 > At its most basic level, the program will start by outputting a menu, prompting the user to begin a game. It will take numbers as an input, and generate an  > > > updated soduku board as an output, in addition to the numbers entered. With each move, the menu should be continuously output, taking letters as input, allowing > the user to regenerate a board view, or to quit the game. If we have the time, we would also like to add features such as allowing the user to enter the level of > difficulty they would like for their soduku game (via letter options as input), an option allowing users to view whether their entry was correct, as well as timed games. 
 > * **What are the two design patterns you will be using? For each design pattern you must explain in 4-5 sentences:**
 >   * Why you picked this pattern and what feature you will implement with it
 >   * What problem you anticipate encountering when implementing your project that you will solve using the design pattern
 >   * Why the chosen design pattern will lead to a good solution to that problem
 > * This description should be in enough detail that the TA/instructor can determine the complexity of the project and if it is sufficient for the team members to complete in the time allotted. 
 > 
 > Firstly we would like to use Abstract Factory, as the program should be extremely user friendly and users should not have to interact with the concrete classes (which would contain the data stored from the game, and execute the algorithms accordingly), and they only need to use the interface provided to them in the abstract class, which would be the display of the soduku board itself and the menu. This leads into the fact that the user should be able to easily manipulate instances through abstract interfaces (ie, entering numbers, in addition to the other features described above). Since one big idea behind Abstract Factory is that a family of related product objects are designed to be used together, we assumed that this would be suited for the game Soduku, as other related product objects such as (for example) the number entries or the solutions to the game are all going to be used cohesively during runtime. 
 > We would also like to use Strategy, as there are some algorithms such as where number will be displayed on the board, how the user will select the square they  
 > want to write an entry into, etc .  that should be hidden from the users. Since these algorithms will be closely related in terms of implementation, it would be convenient if they were encapsulated. Furthermore, 

 > ## Phase II
 > In addition to completing the "Class Diagram" section below, you will need to 
 > * Set up your GitHub project board as a Kanban board for the project. It should have columns that map roughly to 
 >   * Backlog, TODO, In progress, In testing, Done
 >   * You can change these or add more if you'd like, but we should be able to identify at least these.
 > * There is no requirement for automation in the project board but feel free to explore those options.
 > * Create an "Epic" (note) for each feature and each design pattern and assign them to the appropriate team member. Place these in the `Backlog` column
 > * Complete your first *sprint planning* meeting to plan out the next 7 days of work.
 >   * Create smaller development tasks as issues and assign them to team members. Place these in the `TODO` column.
 >   * These cards should represent roughly 7 days worth of development time for your team, taking you until your first meeting with the TA
## Class Diagram
 > Include a class diagram(s) for each design pattern and a description of the diagram(s). Your class diagram(s) should include all the main classes you plan for the project. This should be in sufficient detail that another group could pick up the project this point and successfully complete it. Use proper OMT notation (as discussed in the course slides). You may combine multiple design patterns into one diagram if you'd like, but it needs to be clear which portion of the diagram represents which design pattern (either in the diagram or in the description). 
 
 > ## Phase III
 > You will need to schedule a check-in with the TA (during lab hours or office hours). Your entire team must be present. 
 > * Before the meeting you should perform a sprint plan like you did in Phase II
 > * In the meeting with your TA you will discuss: 
 >   - How effective your last sprint was (each member should talk about what they did)
 >   - Any tasks that did not get completed last sprint, and how you took them into consideration for this sprint
 >   - Any bugs you've identified and created issues for during the sprint. Do you plan on fixing them in the next sprint or are they lower priority?
 >   - What tasks you are planning for this next sprint.

 > ## Final deliverable
 > All group members will give a demo to the TA during lab time. The TA will check the demo and the project GitHub repository and ask a few questions to all the team members. 
 > Before the demo, you should do the following:
 > * Complete the sections below (i.e. Screenshots, Installation/Usage, Testing)
 > * Plan one more sprint (that you will not necessarily complete before the end of the quarter). Your In-progress and In-testing columns should be empty (you are not doing more work currently) but your TODO column should have a full sprint plan in it as you have done before. This should include any known bugs (there should be some) or new features you would like to add. These should appear as issues/cards on your Kanban board. 
 
 ## Screenshots
 > Screenshots of the input/output after running your application
 ## Installation/Usage
 > Instructions on installing and running your application
 ## Testing
 > How was your project tested/validated? If you used CI, you should have a "build passing" badge in this README.
 
