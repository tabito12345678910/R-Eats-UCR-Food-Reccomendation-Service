#include "restaurant.hpp"

class PandaExpress : public buffetRestaurant {
  PandaExpress() {
    meal = "Chinese cuisine, protein + rice/noodles";
    priceS = 8.40;
    priceM = 9.90;
    princeL = 11.40;
    priceSDrink = 2.59;
    priceMDrink = 2.99;
    priceLDrink = 3.39;
    vLocation.push_back(Location::HUB);
    vDrinks.push_back(Beverages::SodaFountain);
    vNation.push_back(Nationality::Chinese);

    vMenu.push_back(MenuChoice::Chicken);
    vMenu.push_back(MenuChoice::Beef);
    vMenu.push_back(MenuChoice::Rice);
    vMenu.push_back(MenuChoice::Shrimp);
    vMenu.push_back(MenuChoice::Vegetables);
    vMenu.push_back(MenuChoice::Noodes); //added for chowmein
    // Eggplant Tofu!
    vMenu.push_back(MenuChoice::Vegetarian);
    vMenu.push_back(MenuChoice::Vegan);
    // There are desserts
    vMenu.push_back(MenuChoice::Dessert)
  }
};
