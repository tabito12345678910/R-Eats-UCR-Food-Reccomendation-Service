#include "foodSelector.hpp"
#include <iostream>
#include <algorithm>

using std::cin;
using std::cout;
using std::endl;
using std::string;

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