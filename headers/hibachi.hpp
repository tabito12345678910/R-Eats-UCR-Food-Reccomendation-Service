#include "buffetRestaurant.hpp"

class Hibachi : public buffetRestaurant {
public:
  Hibachi() : meal("Poke Bowls"), priceS(12.50), priceM(13), priceL(14.5) {
    /* meal = "Poke Bowls";
    priceS = 12.50;
    priceM = 13.00;
    priceL = 14.50; */
    restaurantName = "Hibachi";
    vNameVariations = {restaurantName, "hibachisan", "hibachi"};

    // Hibachi doesn't have a an app nor a website lol
    androidLink = "https://www.menuwithprice.com/menu/hibachi-san/";
    iphoneLink = "https://www.menuwithprice.com/menu/hibachi-san/";

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

private:
  double priceS, priceM, priceL;
  string meal;
};
