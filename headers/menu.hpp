#include "dietaryMenu.hpp"
#include "remove.hpp"
#include "foodSelector.hpp"
#include <iostream>
#include <algorithm>
#include <iostream>

using std::cin;
using std::cout;
using std::endl;
using std::string;

string menuDisplay(unsigned int diet, unsigned int allergy, int track) {
  string choice;
  if (diet == 2 || allergy == 2) { // when quit from dietarySelect
    return "quit";
  }

  unsigned int disNum = 1;

  cout << endl << "Enter 3 Preferences [" << track << "/3]"<< endl;
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
  // cout << disNum << ". Cuisines:" << endl;
  // disNum++;
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
                        vectorRestaurants &vRestaurants, vector<MenuChoice> &prefs, int track) {
  unsigned int selected;
  string choice = "NULL"; // you should never see "NULL"

  while (choice != "quit" && choice != "q") { // Fixing logical error here
    choice = menuDisplay(diet, allergy, track);
    std::transform(choice.begin(), choice.end(), choice.begin(),
                   [](unsigned char c) { return std::tolower(c); });
    if (choice == "quit" || choice == "q") {
      cout << "Quitting Program" << endl;
    } else if (choice == "protein" && diet != 3 && diet != 4) {
      selected = selectingMeat(vRestaurants, prefs);
      if (selected == 0) {
        return selected;
      }
    } else if (choice == "seafood" && diet != 4 && diet != 3 && allergy != 6) {
      selected = selectingSeafood(vRestaurants, prefs); 
      if (selected == 0) {
        return selected;
      }

    } else if (choice == "vegetables") {
      // add Vegetables to preferences
      cout << "Vegetables added" << endl;
      prefs.push_back(MenuChoice::Vegetables);
      removeRestaurantByMenu(vRestaurants, MenuChoice::Vegetables);
      return 0;

    } else if (choice == "dairy" && diet != 4 && allergy != 7) {
      selected =
          selectingDairy(vRestaurants, prefs); // selector for dairy options; returns 0
                                        // if back 1 if any other option
      if (selected == 0) {
        return selected;
      }
    } else if (choice == "dishes") {
      selected =
          selectingDishes(vRestaurants, prefs); // selector for dish options; returns 0
                                         // if back 1 if any other option
      if (selected == 0) {
        return selected;
      }
    } else if (choice == "drinks") {
      selected = selectingDrink(diet, vRestaurants, prefs); 
      if (selected == 0) {
        return selected;
      }
    } else if (choice == "snacks") {
      // add Snacks to preferences
      cout << "Snacks added" << endl;
      prefs.push_back(MenuChoice::Snacks);
      removeRestaurantByMenu(vRestaurants, MenuChoice::Snacks);
      return 0;
    } else if (choice == "dessert") {
      // add Dessert to preferences
      cout << "Dessert added" << endl;
      prefs.push_back(MenuChoice::Dessert);
      removeRestaurantByMenu(vRestaurants, MenuChoice::Dessert);
      return 0;

    } 
    // else if (choice == "cuisines") {
    //   selected = selectingCuisine(
    //       vRestaurants, prefs); // selector for cuisine options; returns 0 if back 1 if
    //                      // any other option
    //   if (selected == 0) {
    //     return selected;
    //   }
    //} 
    else { // invalid response
      cout << "Invalid Response: Try Again" << endl;
    }
  }

  return 2;
}

string validPlace(string &from) {
  if(from == "lot") {
    return "lot30";
  } else if (from == "student") {
    return "ssc";
  } else if (from == "material") {
    return "mse";
  } else if (from == "north") {
    return "nd";
  } else if (from == "big" || from == "spring") {
    return "bigspring";
  } else if (from == "winston") {
    return "winstonchung";
  } else if (from == "orbach") {
    return "orbachlibrary";
  } else if (from == "rivera") {
    return "riveralibrary";
  } else if (from == "entemology" || from == "museum") {
    return "entemologymuseum";
  }
  return from;
}