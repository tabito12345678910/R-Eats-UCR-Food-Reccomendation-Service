#ifndef RESTAURANT_HPP
#define RESTAURANT_HPP

#include "menuItem.hpp"
#include <iomanip>
#include <iostream>
#include <string>
#include <vector>

class Restaurant {
public:
  virtual Restaurant;
  virtual ~Restaurant();
  // virtual greeter() {} // plaeholder

  virtual void addMenuChoice(MenuChoice choice);

  virtual void addMenuChoice(MenuChoice choice);
  virtual const std::vector<MenuChoice> &getMenuChoices() const;

protected:
  // These are vectors as of now, probably change it to strings or plain enums
  // This visually makes the code look clean
  std::string meal; // the meal restaurant is known for
  std::vector<MenuChoice> vChoices;
  std::vector<Beverages> vDrinks;
  std::vector<Nationality> vNation;
  std::vector<Location> vLocation;
  std::string restaurant_name;
  //  std::vector<std::string, std::double, std::int>
  //      vMenu; // name, price, calories
  Location vLocation; // plain enum, keeping the v for namesake
};

#endif
