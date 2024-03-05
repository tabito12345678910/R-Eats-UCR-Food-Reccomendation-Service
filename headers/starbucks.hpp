#include "restaurant.hpp"
class Starbucks : public Restaurant {
public:
  Starbucks() {
    meal = "Coffee place";
    restaurantName = "Starbucks";
    vNameVariations = {restaurantName, "starb", "starbies"};

    androidLink = "https://starbucks.app.link/wWzZZ9P9z5";
    iphoneLink = "https://starbucks.app.link/I1sntOS9z5";
    // priceMDrink = 2.79;
    // priceLDrink = 3.29;
    vLocation.push_back(Location::MSE);
    vLocation.push_back(Location::Glenmore);
    vLocation.push_back(Location::EastCampus);
    vLocation.push_back(Location::Chung);
    vDrinks.push_back(Beverages::Coffee);
    vDrinks.push_back(Beverages::Tea);
    vNation.push_back(Nationality::American);

    vMenu.push_back(MenuChoice::Dessert);
    vMenu.push_back(MenuChoice::Bread);
    vMenu.push_back(MenuChoice::Milk);
    vMenu.push_back(MenuChoice::Pork);
    vMenu.push_back(MenuChoice::Vegetarian);
    vMenu.push_back(MenuChoice::Cheese);
    vMenu.push_back(MenuChoice::Coffee);
    vMenu.push_back(MenuChoice::Turkey);
    vMenu.push_back(MenuChoice::Vegan);

    vMeal.push_back(MenuItem("Crispy Grilled Cheese on Sourdough", 6.45, "520 calories", MenuChoice::Cheese, MenuChoice::Bread, MenuChoice::Vegetarian));
    vMeal.push_back(MenuItem("Ham and Swiss on Baguette", 7.15, "480 calories", MenuChoice::Cheese, MenuChoice::Bread, MenuChoice::Pork));
    vMeal.push_back(MenuItem("Turkey, Provolone and Pesto on Ciabatta", 6.95, "520 calories", MenuChoice::Cheese, MenuChoice::Bread, MenuChoice::Turkey));
    vMeal.push_back(MenuItem("Tomato and Mozzarella on Focaccia", 6.25, "360 calories", MenuChoice::Cheese, MenuChoice::Bread, MenuChoice::Vegetarian));
    vMeal.push_back(MenuItem("Birthday Cake Pop", 2.95, "160 calories", MenuChoice::Milk, MenuChoice::Dessert, MenuChoice::Bread));
    vMeal.push_back(MenuItem("Birthday Cake Pop", 2.95, "160 calories", MenuChoice::Milk, MenuChoice::Dessert, MenuChoice::Bread));
    vMeal.push_back(MenuItem("Chocolate Cake Pop", 2.95, "150 calories", MenuChoice::Milk, MenuChoice::Dessert, MenuChoice::Bread));
    //ALL DRINKS ARE GRANDE PRICES AND CALORIES make sure to include this for ui
    vMeal.push_back(MenuItem("Caffe Americano", 2.75, "5 calories", MenuChoice::Coffee, MenuChoice::Vegan, MenuChoice::Vegetarian));
    vMeal.push_back(MenuItem("Cappuccino", 4.45, "140 calories", MenuChoice::Coffee, MenuChoice::Vegetarian, MenuChoice::Milk));
    vMeal.push_back(MenuItem("Caffe Latte", 4.45, "190 calories", MenuChoice::Coffee, MenuChoice::Vegetarian, MenuChoice::Milk));
    vMeal.push_back(MenuItem("Pumpkin Spice Latte", 5.75, "390 calories", MenuChoice::Coffee, MenuChoice::Milk, MenuChoice::Vegetarian));
    vMeal.push_back(MenuItem("Blonde Vanilla Latte", 5.25, "250 calories", MenuChoice::Coffee, MenuChoice::Milk, MenuChoice::Vegetarian));
    vMeal.push_back(MenuItem("Caramel Macchiato", 5.25, "250 calories", MenuChoice::Coffee, MenuChoice::Milk, MenuChoice::Coffee));
    vMeal.push_back(MenuItem("Caffe-Mocha", 7.55, "370 calories", MenuChoice::Coffee, MenuChoice::Milk, MenuChoice::Vegetarian));
    vMeal.push_back(MenuItem("Chai Tea", 4.95, "0 calories", MenuChoice::Tea, MenuChoice::Milk, MenuChoice::Vegetarian));
    vMeal.push_back(MenuItem("Matcha-Tea Latte", 4.95, "240 calories", MenuChoice::Tea, MenuChoice::Milk, MenuChoice::Vegetarian));
    vMeal.push_back(MenuItem("Earl Gray Tea", 4.95, "0 calories", MenuChoice::Tea, MenuChoice::Vegan, MenuChoice::Vegetarian));
    vMeal.push_back(MenuItem("Mocha Frappuccino", 5.45, "370 calories", MenuChoice::Coffee, MenuChoice::Milk, MenuChoice::Vegetarian));
    vMeal.push_back(MenuItem("Java Chip Frappuccino", 5.45, "440 calories", MenuChoice::Coffee, MenuChoice::Milk, MenuChoice::Vegetarian));
    vMeal.push_back(MenuItem("Caramel Frappuccino", 5.45, "380 calories", MenuChoice::Coffee, MenuChoice::Milk, MenuChoice::Vegetarian));
    vMeal.push_back(MenuItem("Starbucks Cold Brew", 4.45, "5 calories", MenuChoice::Coffee, MenuChoice::Vegan, MenuChoice::Vegetarian));

    
    
    
    

    

  }
  
};
