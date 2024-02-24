#ifndef RESTAURANT_HPP
#define RESTAURANT_HPP

#include "menuItem.hpp"
#include <iomanip>
#include <iostream>
#include <string>
#include <vector>

using std::string;
using std::vector;

class Restaurant {

public:
  Restaurant() : priceSDrink(0), priceMDrink(0), priceLDrink(0) {}
  ~Restaurant();
  // virtual greeter() {} // plaeholder

  void addMenuChoice(MenuChoice choice);

  vector<MenuChoice> &getMenuChoices() const;

protected:
  // These are vectors as of now, probably change it to strings or plain enums
  // This visually makes the code look clean
  string meal; // the meal restaurant is known for
  /* vector<MenuChoice> vChoices; */
  vector<MenuChoice> vMenu;
  vector<Beverages> vDrinks;
  vector<Nationality> vNation;
  vector<Location> vLocation;

  // Note Used
  string restaurant_name;
  double priceSDrink, priceMDrink, priceLDrink;
  //  std::vector<std::string, std::double, std::int>
  //      vMenu; // name, price, calories
};

#endif
