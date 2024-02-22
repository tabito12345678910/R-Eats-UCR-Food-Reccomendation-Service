#include "restaurant.hpp"
class Starbucks : public Restaurant {
  Starbucks() {
    meal = "Coffee place";
    // priceMDrink = 2.79;
    // priceLDrink = 3.29;
    vLocation.push_back(Location::MSE);
    vLocation.push_back(Location::Glenmore);
    vLocation.push_back(Location::EastCampus);
    vLocation.push_back(Location::Chung);
    vDrinks.push_back(Beverages::Coffee);
    vDrinks.push_back(Beverages::Tea);
    vNation.push_back(Nationality::American);

    vMenu.push_back(MenuChoice::Dessert);
    vMenu.push_back(MenuChoice::Sandwich);
  }
};
