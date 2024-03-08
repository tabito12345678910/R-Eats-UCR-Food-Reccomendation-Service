#include "foodSelector.hpp"
#include <algorithm>
#include <iostream>

using std::cin;
using std::cout;
using std::endl;
using std::string;

string menuDisplay() {
  string choice;
  cout << endl << "Welcome to R'Eats" << endl;
  cout << endl << "Enter food type or cuisines " << endl;
  // TODO Put the result into a unsigned int
  //    Then into a hash table that holds all restaurants with that enum
  //
  cout << "Food Preferences:" << endl
       << "1. Meats:" << endl
       << "2. Seafood:" << endl
       << "3. Vegetarian" << endl
       << "4. Vegan" << endl
       << "5. Vegetables" << endl
       << "6. Dishes:" << endl
       << "7. Dessert" << endl
       << "8. Cuisines:" << endl
       << "9. None"
       << endl // default; will give every and all options; using "None" rather
               // than "No Preference" to avoid using getline
       << "10. [Done]" << endl
       << "11. [Quit]" << endl; // quit option

  cin >> choice;

  // fix buffer just in case non-numeric choice entered
  // also gets rid of newline character
  cin.clear();
  cin.ignore(256, '\n');
  return choice;
}

unsigned int menuSelect() {
  /* vectorRestaurant vMenus; // class that holds all restaurants */

  string choice;

  while (choice != "quit" || choice != "q") {
    choice = menuDisplay();
    std::transform(choice.begin(), choice.end(), choice.begin(),
                   [](unsigned char c) {
                     return std::tolower(c);
                   }); // ideally make "choice" lowercase for input conviences

    if (choice == "quit" || choice == "q") {
      cout << "Quitting Program" << endl;
      return 2;
    } else if (choice == "meats") {
      return selectingMeat(); // selector for meat options; returns 0 if back 1
                              // if any other option

    } else if (choice == "seafood") {
      return selectingSeafood(); // selector for seafood options; returns 0 if
                                 // back 1 if any other option

    } else if (choice == "vegetarian") {
      // add Vegetarian to preferences
      cout << "Vegetarian added" << endl;
      return 0; // signals main to continue selecting

    } else if (choice == "vegan") {
      // add Vegan to preferences
      cout << "Vegan added" << endl;
      return 0;

    } else if (choice == "vegetables") {
      // add Vegetables to preferences
      cout << "Vegetables added" << endl;
      return 0;

    } else if (choice == "dishes") {
      return selectingDishes(); // selector for dish options; returns 0 if back
                                // 1 if any other option

    } else if (choice == "dessert") {
      // add Dessert to preferences
      cout << "Dessert added" << endl;
      return 0;

    } else if (choice == "cuisines") {
      return selectingCuisine(); // selector for cuisine options; returns 0 if
                                 // back 1 if any other option

    } else if (choice == "none") {
      cout << "No Preference" << endl;
      // if none, show user all restaurant options, default
      return 1;

    } else if (choice == "done") {
      return 1; // signals main that program is done and should display
                // restaurant options that fit prefs

    } else { // invalid response
      cout << "Invalid Response: Try Again" << endl;
    }
  }
  return 2; // 2 signals main that program is quitting, exits program and ends
}
