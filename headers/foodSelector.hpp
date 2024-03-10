#ifndef FOODSELECTOR_HPP
#define FOODSELECTOR_HPP
#include "foodOptions.hpp"
#include "recommendation.hpp"
#include <algorithm>

unsigned int selectingMeat(vectorRestaurants &vRestaurants, vector<MenuChoice> &prefs) {
  string choice;
  while (choice != "back") {
    choice = meatOptions(); // show meat options and pick
    transform(choice.begin(), choice.end(), choice.begin(),
              [](unsigned char c) { return std::tolower(c); });
    if (choice == "back") {
      cout << "Backing" << endl;
    } else if (choice == "beef") {
      cout << "Beef added" << endl;
      prefs.push_back(MenuChoice::Beef);
      return 0;
    } else if (choice == "chicken") {
      cout << "Chicken added" << endl;
      prefs.push_back(MenuChoice::Chicken);
      return 0;
    } else if (choice == "pork") {
      cout << "Pork added" << endl;
      prefs.push_back(MenuChoice::Pork);
      return 0;
    } else if (choice == "turkey") {
      cout << "Turkey added" << endl;
      prefs.push_back(MenuChoice::Turkey);
      return 0;
    } else if (choice == "all") {
      cout << "All Proteins added" << endl;
      prefs.push_back(MenuChoice::Protein);
      return 0;
    } else {
      cout << "Invalid Response: Try Again" << endl;
    }
  }
  return 1; // 0 signals main to continue asking for food prefs
}

unsigned int selectingSeafood(vectorRestaurants &vRestaurants, vector<MenuChoice> &prefs) {
  string choice;
  while (choice != "back") {
    choice = seafoodOptions(); // show seafood options and pick
    transform(choice.begin(), choice.end(), choice.begin(),
              [](unsigned char c) { return std::tolower(c); });
    if (choice == "back") {
      cout << "Backing" << endl;
    } else if (choice == "crab") {
      cout << "Crab added" << endl;
      prefs.push_back(MenuChoice::Crab);
      return 0;
    } else if (choice == "salmon") {
      cout << "Salmon added" << endl;
      prefs.push_back(MenuChoice::Salmon);
      return 0;
    } else if (choice == "scallops") {
      cout << "Scallops added" << endl;
      prefs.push_back(MenuChoice::Scallops);
      return 0;
    } else if (choice == "shrimp") {
      cout << "Shrimp added" << endl;
      prefs.push_back(MenuChoice::Shrimp);
      return 0;
    } else if (choice == "tuna") {
      cout << "Tuna added" << endl;
      prefs.push_back(MenuChoice::Tuna);
      return 0;
    } else {
      cout << "Invalid Response: Try Again" << endl;
    }
  }
  return 1; // 0 signals main to continue asking for food prefs
}

unsigned int selectingDishes(vectorRestaurants &vRestaurants, vector<MenuChoice> &prefs) {
  string choice;
  while (choice != "back") {
    choice = dishOptions(); // show dish options and pick
    transform(choice.begin(), choice.end(), choice.begin(),
              [](unsigned char c) { return std::tolower(c); });
    if (choice == "back") {
      cout << "Backing" << endl;
    } else if (choice == "bread") {
      cout << "Bread added" << endl;
      prefs.push_back(MenuChoice::Bread);
      return 0;
    } else if (choice == "fries") {
      cout << "Fries added" << endl;
      prefs.push_back(MenuChoice::Fries);
      return 0;
    } else if (choice == "noodles") {
      cout << "Noodles added" << endl;
      prefs.push_back(MenuChoice::Noodles);
      return 0;
    } else if (choice == "rice") {
      cout << "Rice added" << endl;
      prefs.push_back(MenuChoice::Rice);
      return 0;
    } else {
      cout << "Invalid Response: Try Again" << endl;
    }
  }
  return 1; // 0 signals main to continue asking for food prefs
}

unsigned int selectingCuisine(vectorRestaurants &vRestaurants, vector<MenuChoice> &prefs) {
  // string choice;
  // while (choice != "back") {
  //   choice = cuisineOptions(); // show cuisine options and pick
  //   transform(choice.begin(), choice.end(), choice.begin(),
  //             [](unsigned char c) { return std::tolower(c); });
  //   if (choice == "back") {
  //     cout << "Backing" << endl;
  //   } else if (choice == "american") {
  //     cout << "American added" << endl;
  //     removeByCuisine(vRestaurants, Nationality::American);
  //     return 0;
  //   } else if (choice == "chinese") {
  //     cout << "Chinese added" << endl;
  //     removeByCuisine(vRestaurants, Nationality::Chinese);
  //     return 0;
  //   } else if (choice == "japanese") {
  //     cout << "Japanese added" << endl;
  //     removeByCuisine(vRestaurants, Nationality::Japanese);
  //     return 0;
  //   } else if (choice == "mediterranean") {
  //     cout << "Mediterranean added" << endl;
  //     removeByCuisine(vRestaurants, Nationality::Mediterranean);
  //     return 0;
  //   } else if (choice == "mexican") {
  //     cout << "Mexican added" << endl;
  //     removeByCuisine(vRestaurants, Nationality::Mexican);
  //     return 0;
  //   } else {
  //     cout << "Invalid Response: Try Again" << endl;
  //   }
  //}
  return 1; // 0 signals main to continue asking for food prefs
}

unsigned int selectingDairy(vectorRestaurants &vRestaurants, vector<MenuChoice> &prefs) {
  string choice;
  while (choice != "back") {
    choice = dairyOptions(); // show dairy options and pick
    transform(choice.begin(), choice.end(), choice.begin(),
              [](unsigned char c) { return std::tolower(c); });
    if (choice == "back") {
      cout << "Backing" << endl;
    } else if (choice == "cheese") {
      cout << "Cheese added" << endl;
      return 0;
      prefs.push_back(MenuChoice::Cheese);
      return 0;
    } else if (choice == "milk") {
      cout << "Milk added" << endl;
      prefs.push_back(MenuChoice::Milk);
      return 0;
    } else {
      cout << "Invalid Response: Try Again" << endl;
    }
  }
  return 1; // 0 signals main to continue asking for food prefs
}

unsigned int selectingDrink(unsigned int diet,
                            vectorRestaurants &vRestaurants, vector<MenuChoice> &prefs) {
  string choice;
  while (choice != "back") {
    choice = drinkOptions(); // show drink options and pick
    transform(choice.begin(), choice.end(), choice.begin(),
              [](unsigned char c) { return std::tolower(c); });
    if (choice == "back") {
      cout << "Backing" << endl;
    } else if (choice == "coffee") {
      cout << "Coffee added" << endl;
      prefs.push_back(MenuChoice::Coffee);
      return 0;

    } else if (choice == "tea") {
      cout << "Tea added" << endl;
      prefs.push_back(MenuChoice::Tea);
      return 0;
    } else {
      cout << "Invalid Response: Try Again" << endl;
    }
  }
  return 1; // 0 signals main to continue asking for food prefs
}

#endif
