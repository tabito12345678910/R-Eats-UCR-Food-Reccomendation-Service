#include "buffetRestaurant.hpp"

class PandaExpress : public buffetRestaurant {
  PandaExpress() : priceS(8.40), priceM(9.90), priceL(11.40) {
    meal = "Chinese cuisine, protein + rice/noodles";
    /* priceS = 8.40;
    priceM = 9.90;
    priceL = 11.40; */
    // NOTE I don't believe this is necessary
    //  If you want a drink, you will choose a drink either way
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
    vMenu.push_back(MenuChoice::Noodles); // added for chowmein
    // Eggplant Tofu!
    vMenu.push_back(MenuChoice::Vegetarian);
    vMenu.push_back(MenuChoice::Vegan);
    // There are desserts
    vMenu.push_back(MenuChoice::Dessert)
  }
};
