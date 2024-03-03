#include "restaurant.hpp"
#include <string>


class ChronicTacos : public Restaurant {
public:
  ChronicTacos() : Restaurant(), priceMDrink(2.59), priceLDrink(3.39) {
    meal = "Mexican street food. Tacos, burritos, and bowls";
    /* priceMDrink = 2.59;
    priceLDrink = 3.39; */
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
    
  
    //GO GET CALORIES
    vMeal.push_back(MenuItem("Quesadilla", 10.50, "0 calories", MenuChoice::Vegetables, MenuChoice::Cheese, MenuChoice::Beef));
    vMeal.push_back(MenuItem("Chronic Fries", 13.50, "0 calories", MenuChoice::Fries, MenuChoice::Vegetables, MenuChoice::Beef));
    vMeal.push_back(MenuItem("California Burrito", 13.50, "0 calories", MenuChoice::Vegetables, MenuChoice::Protein, MenuChoice::Fries));
    vMeal.push_back(MenuItem("Taco Plate", 9.95, "0 calories", MenuChoice::Protein, MenuChoice::Shrimp, MenuChoice::Vegetarian));
    vMeal.push_back(MenuItem("Burrito", 9.95, "0 calories", MenuChoice::Protein, MenuChoice::Shrimp, MenuChoice::Vegetarian));
    vMeal.push_back(MenuItem("Bowl-rito", 9.95, "0 calories", MenuChoice::Protein, MenuChoice::Shrimp, MenuChoice::Vegetarian));
    vMeal.push_back(MenuItem("Small Burrito", 7.50, "0 calories", MenuChoice::Protein, MenuChoice::Shrimp, MenuChoice::Vegetarian));
    vMeal.push_back(MenuItem("Chips and Salsa", 2.25, "0 calories", MenuChoice::Snacks, MenuChoice::Vegetables, MenuChoice::Vegetarian));
    vMeal.push_back(MenuItem("Chips and Guacamole", 3.75, "0 calories", MenuChoice::Snacks, MenuChoice::Vegetables, MenuChoice::Vegetarian));
  }

private:
  double priceMDrink, priceLDrink;
};
