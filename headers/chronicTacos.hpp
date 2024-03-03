#include "restaurant.hpp"

class ChronicTacos : public Restaurant {
public:
  ChronicTacos() : Restaurant(), priceMDrink(2.59), priceLDrink(3.39) {
    meal = "Mexican street food. Tacos, burritos, and bowls";
    restaurantName = "Chronic Tacos";
    iphoneLink = "https://apps.apple.com/us/app/chronic-tacos-usa/id1610719960";
    androidLink = "https://play.google.com/store/apps/"
                  "details?id=com.percoid.ctusa&hl=en&gl=US";
    /* priceMDrink = 2.59;
    priceLDrink = 3.39; */
    vLocation.push_back(Location::HUB);
    vDrinks.push_back(Beverages::SodaFountain);
    vNation.push_back(Nationality::Mexican);

    vMenu.push_back(MenuChoice::Fries);
    vMenu.push_back(MenuChoice::Beef);
    vMenu.push_back(MenuChoice::Rice);
    vMenu.push_back(MenuChoice::Chicken);
    vMenu.push_back(MenuChoice::Dessert);
    vMenu.push_back(MenuChoice::Vegetarian);
  }

private:
  double priceMDrink, priceLDrink;
};
