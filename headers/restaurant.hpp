#ifndef RESTAURANT_HPP
#define RESTAURANT_HPP

#include "menuItem.hpp"
#include <algorithm>
#include <iomanip>
#include <iostream>
#include <string>
#include <vector>

using std::string;
using std::transform;
using std::vector;

class Restaurant {

public:
  Restaurant() : priceSDrink(0), priceMDrink(0), priceLDrink(0) {}
  //~Restaurant();
  // virtual greeter() {} // plaeholder

  void addMenuChoice(MenuChoice choice);

  vector<MenuChoice> getMenu(){return vMenu;}
  Location getLocation() { return vLocation.at(0); };
  Beverages getBeverage() { return vDrinks.at(0); };
  Nationality getNationality() { return vNation.at(0); };
  string getName() { return restaurantName; }
  bool isOptionValid(const string &option) const {
    string lowercaseOption = option;
    transform(lowercaseOption.begin(), lowercaseOption.end(),
              lowercaseOption.begin(), ::tolower);

    // Checks if lower option matches a variation
    return find(vNameVariations.begin(), vNameVariations.end(),
                lowercaseOption) != vNameVariations.end();
  }

  string getLink(string OperatingSystem) {
    std::transform(OperatingSystem.begin(), OperatingSystem.end(),
                   OperatingSystem.begin(), ::tolower);
    if (OperatingSystem == "iphone" || OperatingSystem == "apple") {
      return iphoneLink;
    } else if (OperatingSystem == "android" || OperatingSystem == "samsung" ||
               OperatingSystem == "google") {
      return androidLink;
    } else {
      // I would default to iPhone since its the most used phone OS in the US
      return "Invalid OS";
    }
  };

  // Had to place this to public
  vector<string> vNameVariations;

protected:
  // These are vectors as of now, probably change it to strings or plain
  // enums This visually makes the code look clean
  string meal; // the meal restaurant is known for
  /* vector<MenuChoice> vChoices; */
  vector<MenuChoice> vMenu;
  vector<MenuItem>
      vMeal; // actual meals to recommend to user from the restaurants
  vector<Beverages> vDrinks;
  vector<Nationality> vNation;
  vector<Location> vLocation;

  // Holds the download link of the companion app to said Restaurant
  string androidLink;
  string iphoneLink;

  // Note Used
  string restaurantName;

  double priceSDrink, priceMDrink, priceLDrink;
  //  std::vector<std::string, std::double, std::int>
  //      vMenu; // name, price, calories
};

#endif
