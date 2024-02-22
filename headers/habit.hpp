#include "restaurant.hpp"
class Habit : public Restaurant {
  Habit() {
    meal = "Burger place";
    priceMDrink = 2.79;
    priceLDrink = 3.29;
    vLocation.push_back(Location::HUB);
    vDrinks.push_back(Beverages::SodaFountain);
    vNation.push_back(Nationality::American);

    vMenu.push_back(MenuChoice::Fries);
    vMenu.push_back(MenuChoice::Burger);
    vMenu.push_back(MenuChoice::Beef);
    vMenu.push_back(MenuChoice::Pork);
    vMenu.push_back(MenuChoice::Chicken);
    vMenu.push_back(MenuChoice::Bacon);
    vMenu.push_back(MenuChoice::Tuna)
    vMenu.push_back(MenuChoice::Vegetarian);
    vMenu.push_back(MenuChoice::Salad);
  }
};