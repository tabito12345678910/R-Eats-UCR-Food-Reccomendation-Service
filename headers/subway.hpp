#include "restaurant.hpp"
class Subway : public Restaurant {
public:
  Subway() {
    meal = "Sub sandwiches";
    androidLink = "https://play.google.com/store/apps/"
                  "details?id=com.subway.mobile.subwayapp03&hl=en";
    iphoneLink = "https://apps.apple.com/us/app/subway/id901941015";

    priceSDrink = 2.59;
    priceMDrink = 2.99;
    priceLDrink = 3.39;
    vLocation.push_back(Location::HUB);
    vDrinks.push_back(Beverages::SodaFountain);
    vNation.push_back(Nationality::American);

    vMenu.push_back(MenuChoice::Beef);
    vMenu.push_back(MenuChoice::Sandwich);
    vMenu.push_back(MenuChoice::Chicken);
    vMenu.push_back(MenuChoice::Turkey);
    vMenu.push_back(MenuChoice::Vegetables);
    vMenu.push_back(MenuChoice::Dessert);
    vMenu.push_back(MenuChoice::Vegetarian);
  }
};
