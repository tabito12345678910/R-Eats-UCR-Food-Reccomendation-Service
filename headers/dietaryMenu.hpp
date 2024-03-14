#include "foodSelector.hpp"
#include "recommendation.hpp"
#include "remove.hpp"
#include <algorithm>
#include <iostream>

using std::cin;
using std::cout;
using std::endl;
using std::string;

string dietaryDisplay() {
  string choice;
  cout << endl << "Select Dietary restriction" << endl;
  cout << "1. Vegetarian" << endl
       << "2. Vegan" << endl
       << "3. Pescatarian" << endl
       << "4. None"
       << endl // default; will give every and all options; using "None" rather
               // than "No Preference" to avoid using getline
       << "6. [Quit]" << endl; // quit option

  cin >> choice;

  // fix buffer just in case non-numeric choice entered
  // also gets rid of newline character
  cin.clear();
  cin.ignore(256, '\n');
  return choice;
}

string allergyDisplay() {
  string choice;
  cout << endl << "Any Allergies?" << endl;
  cout << "1. Dairy" << endl
       << "2. Seafood" << endl
       << "3. None"
       << endl // default; will give every and all options; using "None" rather
               // than "No Preference" to avoid using getline
       << "4. [Quit]" << endl; // quit option

  cin >> choice;

  // fix buffer just in case non-numeric choice entered
  // also gets rid of newline character
  cin.clear();
  cin.ignore(256, '\n');
  return choice;
}

unsigned int allergySelect(vectorRestaurants &vRestaurants) {
  string choice;

  while (choice != "quit") {
    choice = allergyDisplay();
    std::transform(choice.begin(), choice.end(), choice.begin(),
                   [](unsigned char c) {
                     return std::tolower(c);
                   }); // ideally make "choice" lowercase for input conviences

    if (choice == "quit") {
      return 2;
    } else if (choice == "dairy") {
      // leave only resturants and menu items that are vegan
      cout << "Removed Dairy" << endl;
      return 7;

    } else if (choice == "seafood") {
      // remove menu items that have seafood
      cout << "Removed Seafood" << endl;
      return 6;

    } else if (choice == "none") {
      cout << "No Restrictions" << endl;
      return 1;
    } else { // invalid response
      cout << "Invalid Response: Try Again" << endl;
    }
  }
  return 2;
}

unsigned int dietarySelect(vectorRestaurants &vRestaurants, vector<MenuChoice> &prefs) {

  string choice;

  while (choice != "quit") {
    choice = dietaryDisplay();
    std::transform(choice.begin(), choice.end(), choice.begin(),
                   [](unsigned char c) {
                     return std::tolower(c);
                   }); // ideally make "choice" lowercase for input conviences

    if (choice == "quit") {
      return 2;
    } else if (choice == "vegetarian") {
      prefs.push_back(MenuChoice::Vegetarian);
      removeRestaurantByMenu(vRestaurants, MenuChoice::Vegetarian);
      return 3;

    } else if (choice == "vegan") {
      prefs.push_back(MenuChoice::Vegan);
      removeRestaurantByMenu(vRestaurants, MenuChoice::Vegan);
      prefs.push_back(MenuChoice::Vegetarian);
      removeRestaurantByMenu(vRestaurants, MenuChoice::Vegetarian);      
      return 4;

    } else if (choice == "pescatarian") {
      return 5;
    } else if (choice == "none") {
      cout << "No Restrictions" << endl;
      return 1;
    } else { // invalid response
      cout << "Invalid Response: Try Again" << endl;
    }
  }
  return 2; // 2 signals main that program is quitting, exits program and ends
}
