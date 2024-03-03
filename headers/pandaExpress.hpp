#include "buffetRestaurant.hpp"

class PandaExpress : public buffetRestaurant {

public:
  PandaExpress()
      : meal("Chinese cuisine, protein + rice/noodles"), priceS(8.40),
        priceM(9.90), priceL(11.40), priceSDrink(2.59), priceMDrink(2.99),
        priceLDrink(3.39) {

    iphoneLink = "https://apps.apple.com/us/app/panda-express-chinese-kitchen/"
                 "id903990394";
    androidLink =
        "https://play.google.com/store/apps/details?id=com.pandaexpress.app";

    restaurantName = "Panda Express";
    vNameVariations = {restaurantName, "panda", "express"};

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
    vMenu.push_back(MenuChoice::Dessert);
  }

private:
  double priceS, priceM, priceL, priceSDrink, priceMDrink, priceLDrink;
  string meal;
};
