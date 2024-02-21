#include "restaurants.hpp"

class Hibachi : public buffetRestaurant {
  Hibachi() {
    priceS = 12.50;
    priceM = 13.00;
    princeL = 14.50;
    vLocation.push_back(Location::HUB);
    vDrinks.push_back(Beverages::SodaFountain);
    vNation.push_back(Nationality::Japanese);

    vMenu.push_back(MenuChoice::Chicken);
    vMenu.push_back(MenuChoice::Beef);
    vMenu.push_back(MenuChoice::Rice);
    vMenu.push_back(MenuChoice::Shrimp);
    vMenu.push_back(MenuChoice::Vegetables);
    vMenu.push_back(MenuChoice::Salmon);
    vMenu.push_back(MenuChoice::Tuna);
    vMenu.push_back(MenuChoice::Scallops);
    vMenu.push_back(MenuChoice::Crab);
    // Tofu!
    vMenu.push_back(MenuChoice::Vegetarian);
    vMenu.push_back(MenuChoice::Vegan);
  }
};
