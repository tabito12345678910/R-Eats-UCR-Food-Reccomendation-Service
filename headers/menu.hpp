#include "foodSelector.hpp"
#include <iostream>
#include <algorithm>

using std::cin;
using std::cout;
using std::endl;
using std::string;

string menuDisplay(unsigned int diet) {
  string choice;
  if (diet == 2) { //when quit from dietarySelect
    return "quit";
  }

  unsigned int disNum = 1;

  cout << endl << "Enter food type or cuisines " << endl;
  // TODO Put the result into a unsigned int
  //    Then into a hash table that holds all restaurants with that enum
  //
  cout << "Food Preferences:" << endl;

  if (diet != 3 && diet != 4) {
    cout << disNum << ". Meats:" << endl;
    disNum++;
  }

  if (diet != 4 && diet != 5) {
    cout << disNum << ". Seafood:" << endl;
    disNum++;
  }

  cout << disNum << ". Vegetables" << endl;
  disNum++;

  if (diet != 4 && diet != 6) {
    cout << disNum << ". Dairy:" << endl;
    disNum++;
  }

  cout << disNum << ". Dishes:" << endl;
  disNum++;
  cout << disNum << ". Drinks:" << endl;
  disNum++;

  cout << disNum << ". Snacks" << endl;
  disNum++;
  cout << disNum << ". Dessert" << endl;
  disNum++;
  cout << disNum << ". Cuisines:" << endl;
  disNum++;
  cout << disNum << ". None" << endl;
  disNum++;
  cout << disNum << ". [Done]" << endl;
  disNum++;
  cout << disNum << ". [Quit]" << endl;
  disNum++;

  cin >> choice;

  // fix buffer just in case non-numeric choice entered
  // also gets rid of newline character
  cin.clear();
  cin.ignore(256, '\n');
  return choice;
}

string dietaryDisplay() {
  string choice;
  cout << endl << "Select Dietary restriction" << endl;
  cout << "1. Vegetarian" << endl
       << "2. Vegan" << endl
       << "3. Seafood" << endl
       << "4. Dairy" << endl
       << "5. None" << endl // default; will give every and all options; using "None" rather than "No Preference" to avoid using getline 
       << "6. [Quit]" << endl; //quit option

  cin >> choice;

  // fix buffer just in case non-numeric choice entered
  // also gets rid of newline character
  cin.clear();
  cin.ignore(256, '\n');
  return choice;
}

unsigned int dietarySelect() {

  string choice;
  
  while(choice != "quit") {
    choice = dietaryDisplay();
    std::transform(choice.begin(), choice.end(), choice.begin(), [](unsigned char c){ return std::tolower(c); }); //ideally make "choice" lowercase for input conviences

    if (choice == "quit") {
      return 2;
    } else if (choice == "vegetarian") {
      //leave only resturants and menu items that are vegetarian
      cout << "Vegetarian Menu:" << endl;
      return 3;

    } else if (choice == "vegan") {
      //leave only resturants and menu items that are vegan
      cout << "Vegan Menu:" << endl;
      return 4;

    } else if (choice == "seafood") {
      //remove menu items that have seafood
      cout << "No Seafood Menu:" << endl;
      return 5;

    } else if (choice == "dairy") {
      //remove menu items that have seafood
      cout << "No Dairy Menu:" << endl;
      return 6;

    } else if (choice == "none") {
      cout << "No Restrictions" << endl;
      return 1;
    } else { //invalid response
      cout << "Invalid Response: Try Again" << endl;
    }
  }
  return 2; //2 signals main that program is quitting, exits program and ends
}

unsigned int menuSelect(unsigned int diet) {
  /* vectorRestaurant vMenus; // class that holds all restaurants */

  string choice;
  
  while(choice != "quit") {
    choice = menuDisplay(diet);
    std::transform(choice.begin(), choice.end(), choice.begin(), [](unsigned char c){ return std::tolower(c); }); //ideally make "choice" lowercase for input conviences

    if (choice == "quit") {
      cout << "Quitting Program" << endl;
    } else if (choice == "meats") {
      return selectingMeat(); //selector for meat options; returns 0 if back 1 if any other option

    } else if (choice == "seafood") {
      return selectingSeafood(); //selector for seafood options; returns 0 if back 1 if any other option

    } else if (choice == "vegetables") {
      //add Vegetables to preferences
      cout << "Vegetables added" << endl;
      return 0;

    } else if (choice == "dairy") {
      return selectingDairy(); //selector for dairy options; returns 0 if back 1 if any other option
      
    } else if (choice == "dishes") {
      return selectingDishes(); //selector for dish options; returns 0 if back 1 if any other option
      
    } else if (choice == "drinks") {
      return selectingDrink(); //selector for drink options; returns 0 if back 1 if any other option
      
    } else if (choice == "snacks") {
      //add Snacks to preferences
      cout << "Snacks added" << endl;
      return 0;

    } else if (choice == "dessert") {
      //add Dessert to preferences
      cout << "Dessert added" << endl;
      return 0;

    } else if (choice == "cuisines") {
      return selectingCuisine(); //selector for cuisine options; returns 0 if back 1 if any other option
      
    } else if (choice == "none") {
      cout << "No Preference" << endl;
      //if none, show user all restaurant options, default
      return 1;

    } else if (choice == "done") {
      return 1; //signals main that program is done and should display restaurant options that fit prefs

    } else { //invalid response
      cout << "Invalid Response: Try Again" << endl;
    }
  }
  return 2; //2 signals main that program is quitting, exits program and ends
}