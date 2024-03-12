#include "dietaryMenu.hpp"
#include "foodSelector.hpp"
#include <iostream>
#include <algorithm>

using std::cin;
using std::cout;
using std::endl;
using std::string;

string menuDisplay(unsigned int diet, unsigned int allergy) {
  string choice;
  if (diet == 2 || allergy == 2) { // when quit from dietarySelect
    return "quit";
  }

  unsigned int disNum = 1;

  cout << endl << "Enter 3 food types or cuisines " << endl;
  // TODO Put the result into a unsigned int
  //    Then into a hash table that holds all restaurants with that enum
  //
  cout << "Food Preferences:" << endl;

  if (diet != 3 && diet != 4 && diet != 5) {
    cout << disNum << ". Protein:" << endl;
    disNum++;
  }

  if (diet != 4 && diet != 3 && allergy != 6) {
    cout << disNum << ". Seafood:" << endl;
    disNum++;
  }

  cout << disNum << ". Vegetables" << endl;
  disNum++;

  if (diet != 4 && allergy != 6) {
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

unsigned int menuSelect(unsigned int diet, unsigned int allergy,
                        vectorRestaurants &vRestaurants) {
  unsigned int selected;
  string choice = "NULL"; // you should never see "NULL"

  while (choice != "quit" && choice != "q") { // Fixing logical error here
    choice = menuDisplay(diet, allergy);
    std::transform(choice.begin(), choice.end(), choice.begin(),
                   [](unsigned char c) { return std::tolower(c); });
    if (choice == "quit" || choice == "q") {
      cout << "Quitting Program" << endl;
    } else if (choice == "protein" && diet != 3 && diet != 4) {
      selected = selectingMeat(vRestaurants);
      if (selected == 0) {
        return selected;
      }
    } else if (choice == "seafood" && diet != 4 && diet != 3 && allergy != 6) {
      selected = selectingSeafood(
          vRestaurants); // selector for seafood options; returns 0 if back 1 if
                         // any other option
      if (selected == 0) {
        return selected;
      }

    } else if (choice == "vegetables") {
      // add Vegetables to preferences
      cout << "Vegetables added" << endl;
      removeRestaurantByMenu(vRestaurants, MenuChoice::Vegetables);
      removeItemsByPref(vRestaurants, MenuChoice::Vegetables);
      return 0;

    } else if (choice == "dairy" && diet != 4 && allergy != 7) {
      selected =
          selectingDairy(vRestaurants); // selector for dairy options; returns 0
                                        // if back 1 if any other option
      if (selected == 0) {
        return selected;
      }
    } else if (choice == "dishes") {
      selected =
          selectingDishes(vRestaurants); // selector for dish options; returns 0
                                         // if back 1 if any other option
      if (selected == 0) {
        return selected;
      }
    } else if (choice == "drinks") {
      selected = selectingDrink(
          diet, vRestaurants); // selector for drink options; returns 0 if back
                               // 1 if any other option
      if (selected == 0) {
        return selected;
      } else if (selected == 2) {
        return 1;
      }
    } else if (choice == "snacks") {
      // add Snacks to preferences
      cout << "Snacks added" << endl;
      removeRestaurantByMenu(vRestaurants, MenuChoice::Snacks);
      removeItemsByPref(vRestaurants, MenuChoice::Snacks);
      return 0;
    } else if (choice == "dessert") {
      // add Dessert to preferences
      cout << "Dessert added" << endl;
      removeRestaurantByMenu(vRestaurants, MenuChoice::Dessert);
      removeItemsByPref(vRestaurants, MenuChoice::Dessert);
      return 0;

    } else if (choice == "cuisines") {
      selected = selectingCuisine(
          vRestaurants); // selector for cuisine options; returns 0 if back 1 if
                         // any other option
      if (selected == 0) {
        return selected;
      }
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

  return 2;
}
