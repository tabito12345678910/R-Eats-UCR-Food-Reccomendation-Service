#include "restaurant.hpp"
class Habit : public Restaurant {
public:
  Habit() : priceMDrink(2.79), priceLDrink(3.29) {
    meal = "Burger place";
    /* priceMDrink = 2.79;
    priceLDrink = 3.29; */
    vLocation.push_back(Location::HUB);
    vDrinks.push_back(Beverages::SodaFountain);
    vNation.push_back(Nationality::American);

    vMenu.push_back(MenuChoice::Fries);
    vMenu.push_back(MenuChoice::Bread);
    vMenu.push_back(MenuChoice::Beef);
    vMenu.push_back(MenuChoice::Pork);
    vMenu.push_back(MenuChoice::Chicken);
    vMenu.push_back(MenuChoice::Tuna);
    vMenu.push_back(MenuChoice::Vegetarian);
    vMenu.push_back(MenuChoice::Vegan);
    vMenu.push_back(MenuChoice::Snacks);
    vMenu.push_back(MenuChoice::Vegetables);
    vMenu.push_back(MenuChoice::Cheese);


    vMeal.push_back(MenuItem("CharBurger Combo", 11.09, "940 ~ 1180 calories", MenuChoice::Beef, MenuChoice::Fries, MenuChoice::Bread));
    vMeal.push_back(MenuItem("Double CharBurger Combo", 12.69, "1170 ~ 1410 calories", MenuChoice::Beef, MenuChoice::Fries, MenuChoice::Bread));
    vMeal.push_back(MenuItem("CharBurger", 5.39, "500 calories", MenuChoice::Beef, MenuChoice::Bread, MenuChoice::Vegetables));
    vMeal.push_back(MenuItem("Double CharBurger", 6.99, "730 calories", MenuChoice::Beef, MenuChoice::Bread, MenuChoice::Vegetables));
    vMeal.push_back(MenuItem("Teriyaki CharBurger", 6.29, "570 calories", MenuChoice::Beef, MenuChoice::Bread, MenuChoice::Vegetables));
    vMeal.push_back(MenuItem("BBQ Bacon CharBurger", 7.29, "630 calories", MenuChoice::Beef, MenuChoice::Pork, MenuChoice::Bread));
    vMeal.push_back(MenuItem("Portabella CharBurger", 6.99, "820 calories", MenuChoice::Beef, MenuChoice::Bread, MenuChoice::Vegetables));
    vMeal.push_back(MenuItem("SantaBarbara CharBurger", 8.49, "1210 calories", MenuChoice::Beef, MenuChoice::Bread, MenuChoice::Vegetables));
    vMeal.push_back(MenuItem("Impossible Burger", 7.99, "520 calories", MenuChoice::Vegetarian, MenuChoice::Cheese, MenuChoice::Bread));
    vMeal.push_back(MenuItem("Grilled Chicken Sandwich", 7.99, "910 calories", MenuChoice::Chicken, MenuChoice::Bread, MenuChoice::Vegetables));
    vMeal.push_back(MenuItem("Chicken Club Sandwich", 9.99, "880 calories", MenuChoice::Chicken, MenuChoice::Bread, MenuChoice::Vegetables));
    vMeal.push_back(MenuItem("Spicy Crispy Chicken Sandwich", 9.99, "670 calories", MenuChoice::Chicken, MenuChoice::Bread, MenuChoice::Vegetables));
    vMeal.push_back(MenuItem("Ahi Tuna Filet Sandwich", 9.99, "430 calories", MenuChoice::Tuna, MenuChoice::Bread, MenuChoice::Vegetables));
    vMeal.push_back(MenuItem("Veggie Burger", 7.29, "620 calories", MenuChoice::Vegetarian, MenuChoice::Bread, MenuChoice::Vegan));
    vMeal.push_back(MenuItem("Grilled Chicken Salad", 9.79, "350 calories", MenuChoice::Chicken, MenuChoice::Bread, MenuChoice::Vegetables));
    vMeal.push_back(MenuItem("BBQ Chicken Salad", 10.29, "340 calories", MenuChoice::Chicken, MenuChoice::Pork, MenuChoice::Vegetables));
    vMeal.push_back(MenuItem("Santa Barbara Cobb Salad", 10.29, "900 calories", MenuChoice::Chicken, MenuChoice::Cheese, MenuChoice::Vegetables));
    vMeal.push_back(MenuItem("Grilled Chicken Ceasar Salad", 9.99, "790 calories", MenuChoice::Chicken, MenuChoice::Cheese, MenuChoice::Vegetables));
    vMeal.push_back(MenuItem("Garden Salad", 5.99, "130 calories", MenuChoice::Vegan, MenuChoice::Vegetarian, MenuChoice::Vegetables));
    vMeal.push_back(MenuItem("Ceasar Salad", 5.99, "520 calories", MenuChoice::Cheese, MenuChoice::Bread, MenuChoice::Vegetables));
    vMeal.push_back(MenuItem("French Fries", 2.99, "440 calories", MenuChoice::Fries, MenuChoice::Vegetarian, MenuChoice::Snacks));
    vMeal.push_back(MenuItem("Onion Rings", 3.79, "500 calories", MenuChoice::Vegetables, MenuChoice::Vegetarian, MenuChoice::Snacks));
    vMeal.push_back(MenuItem("Sweet Potato Fries", 3.99, "370 calories", MenuChoice::Fries, MenuChoice::Vegetarian, MenuChoice::Snacks));
    
    
    
    
    

  }

private:
  double priceMDrink, priceLDrink;
  string meal;
};
