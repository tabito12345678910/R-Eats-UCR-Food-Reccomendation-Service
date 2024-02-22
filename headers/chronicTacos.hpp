#include "restaurant.hpp"

class ChronicTacos : public Restaurant {
  ChronicTacos() {
    meal = "Mexican street food. Tacos, burritos, and bowls";
    priceMDrink = 2.59;
    priceLDrink = 3.39;
    vLocation.push_back(Location::HUB);
    vDrinks.push_back(Beverages::SodaFountain);
    vNation.push_back(Nationality::Mexican);

    vMenu.push_back(MenuChoice::Fries);
    vMenu.push_back(MenuChoice::Beef);
    vMenu.push_back(MenuChoice::Rice);
    vMenu.push_back(MenuChoice::Chicken);
    vMenu.push_back(MenuChoice::Tortilla);
    vMenu.push_back(MenuChoice::Dessert)
    vMenu.push_back(MenuChoice::Vegetarian);
  }
};
