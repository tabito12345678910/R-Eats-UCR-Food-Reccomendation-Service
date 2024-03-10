#pragma once
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

    // vMenu.push_back(MenuChoice::Dessert);
    // vMenu.push_back(MenuChoice::Bread);
    vMenu.push_back(MenuChoice::Milk);
    // vMenu.push_back(MenuChoice::Pork);
    vMenu.push_back(MenuChoice::Vegan);
    vMenu.push_back(MenuChoice::Vegetarian);
    // vMenu.push_back(MenuChoice::Cheese);
    vMenu.push_back(MenuChoice::Coffee);
    vMenu.push_back(MenuChoice::Tea);

    // ALL PRICES AND CALORIES ARE FOR REGULAR SIZE, IMPLIMENT THIS IN UI
    vMeal.push_back(MenuItem("Cold Brewed Coffee", 4.68, "40 calories",
                             MenuChoice::Coffee, MenuChoice::Vegan,
                             MenuChoice::Vegetarian));
    vMeal.push_back(MenuItem("Vietnamese Latte", 5.48, "290 calories",
                             MenuChoice::Coffee, MenuChoice::Milk,
                             MenuChoice::Vegetarian));
    vMeal.push_back(MenuItem("Vanilla Bean Latte", 5.48, "230 calories",
                             MenuChoice::Coffee, MenuChoice::Milk,
                             MenuChoice::Vegetarian));
    vMeal.push_back(MenuItem("Midnight Mocha Latte", 5.48, "230 calories",
                             MenuChoice::Coffee, MenuChoice::Milk,
                             MenuChoice::Vegetarian));
    vMeal.push_back(MenuItem("Iced Coffee", 4.08, "10 calories",
                             MenuChoice::Coffee, MenuChoice::Vegan,
                             MenuChoice::Vegetarian));
    vMeal.push_back(MenuItem("Caramel Latte", 5.88, "290 calories",
                             MenuChoice::Coffee, MenuChoice::Milk,
                             MenuChoice::Vegetarian));
    vMeal.push_back(MenuItem("Chai Tea", 5.18, "170 calories", MenuChoice::Tea,
                             MenuChoice::Vegan, MenuChoice::Vegetarian));
    vMeal.push_back(MenuItem("Matcha Tea", 5.18, "240 calories",
                             MenuChoice::Tea, MenuChoice::Vegan,
                             MenuChoice::Vegetarian));
    vMeal.push_back(MenuItem("Mango Tea", 4.58, "170 calories", MenuChoice::Tea,
                             MenuChoice::Vegan, MenuChoice::Vegetarian));
    vMeal.push_back(MenuItem("Peach Jasmine Tea", 4.58, "150 calories",
                             MenuChoice::Tea, MenuChoice::Vegan,
                             MenuChoice::Vegetarian));
    vMeal.push_back(MenuItem("Lemonade Tea", 4.58, "150 calories",
                             MenuChoice::Tea, MenuChoice::Vegan,
                             MenuChoice::Vegetarian));
  }
};
