#include "restaurant.hpp"
class CoffeeBean : public Restaurant {
public:
  CoffeeBean() {
    meal = "Coffee place";
    restaurantName = "CoffeeBean";
    vNameVariations = {restaurantName, "bean", "tea leaf", "tea"};

    androidLink = "https://play.google.com/store/apps/"
                  "details?id=com.coffeebean.apps.production";
    iphoneLink = "https://itunes.apple.com/us/app/the-coffee-bean-rewards/"
                 "id1145922517?ls=1&mt=8";
    // priceMDrink = 2.79;
    // priceLDrink = 3.29;
    vLocation.push_back(Location::HUB);
    vDrinks.push_back(Beverages::Coffee);
    vDrinks.push_back(Beverages::Tea);
    vNation.push_back(Nationality::American);

    vMenu.push_back(MenuChoice::Dessert);
  }
};
