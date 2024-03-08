#include "restaurant.hpp"
#include <string>

class ChronicTacos : public Restaurant {
public:
  ChronicTacos() : Restaurant(), priceMDrink(2.59), priceLDrink(3.39) {
    meal = "Mexican street food. Tacos, burritos, and bowls";
    restaurantName = "Chronic Tacos";
    vNameVariations = {restaurantName, "chronic", "tacos"};

    iphoneLink = "https://apps.apple.com/us/app/chronic-tacos-usa/id1610719960";
    androidLink = "https://play.google.com/store/apps/"
                  "details?id=com.percoid.ctusa&hl=en&gl=US";
    vLocation.push_back(Location::HUB);
    vDrinks.push_back(Beverages::SodaFountain);
    vNation.push_back(Nationality::Mexican);

    vMenu.push_back(MenuChoice::Fries);
    vMenu.push_back(MenuChoice::Beef);
    vMenu.push_back(MenuChoice::Protein);
    vMenu.push_back(MenuChoice::Rice);
    vMenu.push_back(MenuChoice::Chicken);
    vMenu.push_back(MenuChoice::Vegetables);
    vMenu.push_back(MenuChoice::Snacks);
    vMenu.push_back(MenuChoice::Vegetarian);

    vMeal.push_back(MenuItem("Quesadilla", 10.50, "730 ~ 1320 calories",
                             MenuChoice::Vegetables, MenuChoice::Cheese,
                             MenuChoice::Beef));
    vMeal.push_back(MenuItem("Chronic Fries", 13.50, "1230 ~ 1600 calories",
                             MenuChoice::Fries, MenuChoice::Vegetables,
                             MenuChoice::Beef));
    vMeal.push_back(MenuItem("California Burrito", 13.50, "1225 calories",
                             MenuChoice::Vegetables, MenuChoice::Protein,
                             MenuChoice::Fries));
    vMeal.push_back(MenuItem("Taco Plate", 9.95, "500 ~ 1260 calories",
                             MenuChoice::Protein, MenuChoice::Shrimp,
                             MenuChoice::Vegetarian));
    vMeal.push_back(MenuItem("Burrito", 9.95, "530 ~ 1260 calories",
                             MenuChoice::Protein, MenuChoice::Shrimp,
                             MenuChoice::Vegetarian));
    vMeal.push_back(MenuItem("Bowl-rito", 9.95, "380 ~ 900 calories",
                             MenuChoice::Protein, MenuChoice::Shrimp,
                             MenuChoice::Vegetarian));
    vMeal.push_back(MenuItem("Small Burrito", 7.50, "300 ~ 640 calories",
                             MenuChoice::Protein, MenuChoice::Shrimp,
                             MenuChoice::Vegetarian));
    vMeal.push_back(MenuItem("Chips and Salsa", 2.25, "350 calories",
                             MenuChoice::Snacks, MenuChoice::Vegetables,
                             MenuChoice::Vegetarian));
    vMeal.push_back(MenuItem("Chips and Guacamole", 3.75, "430 calories",
                             MenuChoice::Snacks, MenuChoice::Vegetables,
                             MenuChoice::Vegetarian));
  }

private:
  double priceMDrink, priceLDrink;
};
