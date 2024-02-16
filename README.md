 > As you complete each section you **must** remove the prompt text. Every *turnin* of this project includes points for formatting of this README so keep it clean and keep it up to date.
 > Prompt text is any lines beginning with "\>"
 > Replace anything between \<...\> with your project specifics and remove angle brackets. For example, you need to name your project and replace the header right below this line with that title (no angle brackets).
# \<R'Eats\>
 > Your author list below should include links to all members GitHub (remove existing author).

 > Authors: \<[Danny Topete](https://github.com/Sped32DJ), [Nathan Matsuo](https://github.com/nathan0404), [Ryan Robes](https://github.com/idkmori), [Tabito Sakamoto](https://github.com/tabito12345678910)\>

 > You will be forming a group of **FOUR** students and working on an interesting project. The project has 4 phases, each one with specific requirements. A list of proposed project ideas that have been successful in previous quarters is listed in the project specifications document on Canvas. You can select an idea from the list and start thinking about the features you will implement. If you want to propose your own original idea, you will have to contact your instructor to discuss the project and obtain written permission before you submit your project proposal (Phase 1). The project work should be divided almost equally among team members. You can of course help each other, but it needs to be clear who will be responsible for which features. Additionally, you are expected to follow Scrum patterns, specifically the use of a Scrum (Project) board, Sprints, and Scrum meetings.

 > ## Expectations
 > * The backend of your project should be implemented in C++. If you wish to choose anoher programming language (e.g. Java, Python), please discuss with your lab TA to obtain permission.
 > * You can incorporate additional technologies/tools but they must be approved (in writing) by the instructor or the TA.
 > * Each member of the group **must** be committing code regularly and make sure their code is correctly attributed to them. We will be checking attributions to determine if there was equal contribution to the project.
 > * **Each member of the group must actively participate in the Github Project board, writing unit tests, and reviewing commited code.**
> * All project phases are to be submitted to this GitHub repository. You should modify this README file to reflect the different phases of the project. In addition, you should regularly hold sprint meetings with your group. You will need to hold two to three scrum/check-in meetings with your lab TA/reader at different times in addition to the final demo.

## Project Description
 > Your project description should summarize the project you are proposing. Be sure to include:
 > * Why is it important or interesting to you?
 * We are all college students and we would all have a nicer way to eat food for less
 > * What languages/tools/technologies do you plan to use? (This list may change throughout the project)
* This will be a terminal based
* It will all be written in C++
* We will have a way to store user data using local files
* Some sort of catering algorithm for people to choose exactly what they want to eat
 > * What will be the input/output of your project, you will also get colorie counts with a budget?
 * Assign everything to a user profile and you can choose how you want your preferences sorter
    - This being by price, calorie, price per calorie, distance
 # Input:
 * Insert choices through the terminal with key binds
* Answer a couple of questions and get your choices
* Give your interests what you are hungry for and the price you want to pay
 # Output:
 * Suggestion for foods to eat and from what place to eat, and the price of the food after taxes
 * This would be done by assigning tags such as the type of food, dietary restrictions, price ranges, etc, and spit out the nearest available option to the users description
 > * What are the features that the project provides?
 * We will have a catering algorithm that will be fed from user input and interests
 * It will include all the benefits that installing the phone app, such as 5% cashback in points
 * Then give a QR code to download the app if you haven't already
 * Store user data and interests, and figure out how to utilize that
* algorithm to store all of that data
* Tell the app where you are, and then it will draw a graph from your location then tell you the distance you are to every food spot on campus
* Works in any building, I may add the parking lots, UV, apartments, and local restaurants
* Add some sort of auto-correct features in case you spell your building incorrectly, and maybe visualize the graph and shortest path
* A CLI map shown in ASCII
 > This description should be in enough detail that the TA/instructor can determine the complexity of the project and if it is sufficient for the team members to complete in the time allotted.
 >
 > You also need to set up an empty project board using GitHub projects (board view with default columns). Make sure you add the board under your project repository. You should also have a Product Backlog and In testing columns added. All columns should be in the right order.
 > ## Phase II
 > In addition to completing the "User Interface Specification" and "Class Diagram" sections below, you will need to:
 > * Create an "Epic" (note) for each feature. Place these epics in the `Product Backlog` column
 > * Complete your first *sprint planning* meeting to plan out the next 7 days of work.
 >   * Break down the "Epics" into smaller actionable user stories (i.e. smaller development tasks). Convert them into issues and assign them to team members. Place these in the `TODO` column (aka Sprint Backlog).
 >   * These cards should represent roughly 7 days worth of development time for your team. Then, once the sprint is over you should be repeating these steps to plan a new sprint, taking you until your second scrum meeting with the reader in phase III.
 > * Schedule two check-ins using Calendly. Both time slots should be during your lab on week 6. Your entire team must be present for both check-ins.
 >   * The first check-in needs to be scheduled with your lab TA. During that meeting, you will discuss your project design/class diagram from phase II.
 >   * The second check-in should be scheduled with a reader. During that meeting, you will discuss:
 >     * The tasks you are planning for the first sprint
 >     * How work will be divided between the team members
## User Interface Specification
 > Include a navigation diagram for your screens and the layout of each of those screens as described below. For all the layouts/diagrams, you can use any tool such as PowerPoint or a drawing program. (Specification requirement is adapted from [this template](https://redirect.cs.umbc.edu/~mgrass2/cmsc345/Template_UI.doc))
>
User interface will all be on the terminal. Single char inputs to change screens.

### Navigation Diagram
> Draw a diagram illustrating how the user can navigate from one screen to another. Here is an [example](https://creately.com/diagram/example/ikfqudv82/user-navigation-diagram-classic?r=v). It can be useful to label each symbol that represents a screen so that you can reference the screens in the next section or the rest of the document if necessary. Give a brief description of what the diagram represents.
Diagram first asks for preferred food choice/cuisine. Once user inputs, program changes screens to recommended restaurants. If user wants to go back to first screen they can, using char 'b'. Input preferred restaurant name, and screen will change to recommended food from restaurant, QR Code, and ETA to restaurant. 
![Alt Text](https://github.com/cs100/final-project-dtope004-nmat016-rrobe031-tsaka014/blob/dtope004/ProperNameREADME/media/Navigation_Diagram.png?raw=true)

### Screen Layouts
> Include the layout of each of your screens. The layout should describe the screen’s major components such as menus and prompts for user inputs and expected output, or any graphical user interface components if applicable (e.g. buttons, text boxes, etc). Explain what is on the layout, and the purpose of each menu item, button, etc. If many screens share the same layout, start by describing the general layout and then list the screens that will be using that layout and the differences between each of them.
>
![Alt Text](https://github.com/cs100/final-project-dtope004-nmat016-rrobe031-tsaka014/blob/dtope004/ProperNameREADME/media/Screen_Layout.png?raw=true)

 Generally all the same layouts.
 Asks questions to users about preferred food choices/restaurants.
 Underneath provide options for user to select.
Have space for user to answer questions.

## Class Diagram
 > Include a **class diagram(s)** for your project and a **description** of the diagram(s). Your class diagram(s) should include all the main classes you plan for the project. This should be in sufficient detail that another group could pick up the project at this point and complete it. Use proper UML notation (as discussed in the course slides).
>
![Alt text](https://github.com/cs100/final-project-dtope004-nmat016-rrobe031-tsaka014/blob/master/media/UML_cs100_proj.png?raw=true)
[link](https://drive.google.com/file/d/1omhp5G6YEEz9L6IH52S4SWfvoZL6wKgt/view?usp=sharing)
>
Menu_Items points to Resturant as a composition relationship as Menu_Items is used to further build the Resturant class. User points to Resturant as user needs the information from resturant to establish the user and their preferences. Resturant then points to User_Interface so that User_interface can interact and use the Resturant class to set up the user interface specifications shown and explained in our navigation diagram.

 > ## Phase III
 > You will need to schedule a check-in for the second scrum meeting with the same reader you had your first scrum meeting with (using Calendly). Your entire team must be present. This meeting will occur on week 8 during lab time.

 > BEFORE the meeting you should do the following:
 > * Update your class diagram from Phase II to include any feedback you received from your TA/grader.
 > * Considering the SOLID design principles, reflect on your class diagram and think about how you can use the SOLID principles to improve your design. You should then update the README.md file by adding the following:
 >   * A new class diagram incorporating your changes after considering the SOLID principles.
 >   * For each update in your class diagram, you must explain in 3-4 sentences:
 >     * What SOLID principle(s) did you apply?
 >     * How did you apply it? i.e. describe the change.
 >     * How did this change help you write better code?
 > * Perform a new sprint plan like you did in Phase II.
 > * You should also make sure that your README file (and Project board) are up-to-date reflecting the current status of your project and the most recent class diagram. Previous versions of the README file should still be visible through your commit history.

> During the meeting with your reader you will discuss:
 > * How effective your last sprint was (each member should talk about what they did)
 > * Any tasks that did not get completed last sprint, and how you considered them for this sprint
 > * Any bugs you've identified and created issues for during the sprint. Do you plan on fixing them in the next sprint or are they lower priority?
 > * What tasks you are planning for this next sprint?


 > ## Final deliverable
 > All group members will give a demo to the reader during lab time. ou should schedule your demo on Calendly with the same reader who took your second scrum meeting. The reader will check the demo and the project GitHub repository and ask a few questions to all the team members.
 > Before the demo, you should do the following:
 > * Complete the sections below (i.e. Screenshots, Installation/Usage, Testing)
 > * Plan one more sprint (that you will not necessarily complete before the end of the quarter). Your In-progress and In-testing columns should be empty (you are not doing more work currently) but your TODO column should have a full sprint plan in it as you have done before. This should include any known bugs (there should be some) or new features you would like to add. These should appear as issues/cards on your Project board.
 > * Make sure your README file and Project board are up-to-date reflecting the current status of your project (e.g. any changes that you have made during the project such as changes to your class diagram). Previous versions should still be visible through your commit history.

 ## Screenshots
 > Screenshots of the input/output after running your application
 ## Installation/Usage
 > Instructions on installing and running your application
 ## Testing
 > How was your project tested/validated? If you used CI, you should have a "build passing" badge in this README.

