#include "restaurant.hpp"
class CoffeeBean : public Restaurant {
  CoffeeBean() {
    meal = "Coffee place";
    // priceMDrink = 2.79;
    // priceLDrink = 3.29;
    vLocation.push_back(Location::HUB);
    vDrinks.push_back(Beverages::Coffee);
    vDrinks.push_back(Beverages::Tea);
    vNation.push_back(Nationality::American);

    vMenu.push_back(MenuChoice::Dessert);
  }
};
