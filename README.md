
# \<R'Eats\>

  Authors: \<[Danny Topete](https://github.com/Sped32DJ), [Nathan Matsuo](https://github.com/nathan0404), [Ryan Robes](https://github.com/idkmori), [Tabito Sakamoto](https://github.com/tabito12345678910)\>


## Project Description
  * Why is it important or interesting to you?
  We are all college students and we would all have a nicer way to eat food for less
  * What languages/tools/technologies do you plan to use? (This list may change throughout the project)
* This will be a terminal based
* It will all be written in C++
* We will have a way to store user data using local files
* Some sort of catering algorithm for people to choose exactly what they want to eat
  * What will be the input/output of your project, you will also get calorie counts with a budget?
 * Assign everything to a user profile and you can choose how you want your preferences sorter.
    - This being by price, calorie, price per calorie, distance
 # Input:
 * Insert choices through the terminal with key binds
* Answer a couple of questions and get your choices
* Give your interests what you are hungry for and the price you want to pay
 # Output:
 * Suggestion for foods to eat and from what place to eat, and the price of the food after taxes
 * This would be done by assigning tags such as the type of food, dietary restrictions, price ranges, etc, and spit out the nearest available option to the users description
  * What are the features that the project provides?
 * We will have a catering algorithm that will be fed from user input and interests
 * It will include all the benefits that installing the phone app, such as 5% cashback in points
 * Then give a QR code to download the app if you haven't already
 * Store user data and interests, and figure out how to utilize that
* algorithm to store all of that data
* Tell the app where you are, and then it will draw a graph from your location then tell you the distance you are to every food spot on campus
* Works in any building, I may add the parking lots, UV, apartments, and local restaurants
* Add some sort of auto-correct features in case you spell your building incorrectly, and maybe visualize the graph and shortest path
* A CLI map shown in ASCII

## User Interface Specification

User Interface will all be on the terminal. Single char inputs to change screens.

### Navigation Diagram
Diagram first asks for preferred food choice/cuisine. Once user inputs, program changes screens to recommended restaurants. If user wants to go back to first screen they can, using char 'b'. Input preferred restaurant name, and screen will change to recommended food from restaurant, QR Code, and ETA to restaurant.
![Alt Text](https://github.com/cs100/final-project-dtope004-nmat016-rrobe031-tsaka014/blob/master/media/Navigation_Diagram.png?raw=true)

### Screen Layouts

![Alt Text](https://github.com/cs100/final-project-dtope004-nmat016-rrobe031-tsaka014/blob/master/media/Screen_Layout.png?raw=true)

 Generally all the same layouts.
 Asks questions to users about preferred food choices/restaurants.
 Underneath provide options for user to select.
Have space for user to answer questions.

## Class Diagram

![Alt text](https://github.com/cs100/final-project-dtope004-nmat016-rrobe031-tsaka014/blob/master/media/UML_cs100_proj.png?raw=true)
[link](https://drive.google.com/file/d/1omhp5G6YEEz9L6IH52S4SWfvoZL6wKgt/view?usp=sharing)

Menu_Items points to Resturant as a composition relationship as Menu_Items is used to further build the Resturant class. User points to Resturant as user needs the information from resturant to establish the user and their preferences. Resturant then points to User_Interface so that User_interface can interact and use the Resturant class to set up the user interface specifications shown and explained in our navigation diagram.
Subclass of Class Restaurant, BuffetRestaurant has a few more functions specific to buffets. Also added a class for every restaurant on campus that inherits from Restaurant or BuffetRestaurant.
S. Each restaurant class is on a separate file, and they only have constructors that create the restaurants, satisfying the single responsibility principle.
O. The functionality of the classes is all set, and should not need modifications.
D. All the restaurants that are inherent in the restaurant class does not affect the parent classes, as they only have constructors for each restaurant.
This made the code much easier to read and elegant, as everything is compartmentalized into their files.




 ## Screenshots
- Screenshot after no food allergies and requesting beef, chicken, pork, and asking for Habit's learnMore
![Alt Text](https://github.com/cs100/final-project-dtope004-nmat016-rrobe031-tsaka014/blob/master/media/Screen_with_QR.png?raw=true)

 ## Installation/Usage
 1. git clone --recursive <link>
 2. Make sure to install qrencode
    - Windows
        winget install qrencode
    - MacOS (Make sure to install brew.sh)
        brew install qrencode
    - Linux
        apt install qrencode
    - Arch
        pacman -S qrencode
 3. For compilation
    cmake .
    make
 4. To run the executable
    ./main

 ## Testing
 We used CI, so we have a "build passing" badge. We also used Gtest unit testing to check if the individual functions/classes work.

