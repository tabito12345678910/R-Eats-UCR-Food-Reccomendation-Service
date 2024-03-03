#include "restaurant.hpp"

class HalalShack : public Restaurant {
public:
  HalalShack() {
    meal = "Mediterranean street food";
    restaurantName = "Halal Shack";
    vNameVariations = {restaurantName, "halal", "shack"};

    androidLink =
        "https://www.thehalalshack.com/discover-deliciousness/build-your-own";
    iphoneLink =
        "https://www.thehalalshack.com/discover-deliciousness/build-your-own";

    priceMDrink = 2.59;
    vLocation.push_back(Location::HUB);
    vDrinks.push_back(Beverages::SodaFountain);
    vNation.push_back(Nationality::Mediterranean);

    vMenu.push_back(MenuChoice::Fries);
    vMenu.push_back(MenuChoice::Beef);
    vMenu.push_back(MenuChoice::Rice);
    vMenu.push_back(MenuChoice::Chicken);
    vMenu.push_back(MenuChoice::Vegetables);
    vMenu.push_back(MenuChoice::Vegetarian);
  }
};
