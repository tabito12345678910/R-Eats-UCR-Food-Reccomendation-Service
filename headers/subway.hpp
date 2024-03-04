#include "restaurant.hpp"
class Subway : public Restaurant {
public:
  Subway() {
    meal = "Sub sandwiches";
    priceSDrink = 2.59;
    priceMDrink = 2.99;
    priceLDrink = 3.39;
    vLocation.push_back(Location::HUB);
    vDrinks.push_back(Beverages::SodaFountain);
    vNation.push_back(Nationality::American);

    vMenu.push_back(MenuChoice::Beef);
    vMenu.push_back(MenuChoice::Protein);
    vMenu.push_back(MenuChoice::Pork);
    vMenu.push_back(MenuChoice::Bread);
    vMenu.push_back(MenuChoice::Chicken);
    vMenu.push_back(MenuChoice::Turkey);
    vMenu.push_back(MenuChoice::Vegetables);
    vMenu.push_back(MenuChoice::Dessert);
    vMenu.push_back(MenuChoice::Vegetarian);
    vMenu.push_back(MenuChoice::Vegan);

    vMeal.push_back(MenuItem("Titan Turkey Sandwich 6 Inch", 7.29, "490 calories", MenuChoice::Turkey, MenuChoice::Bread, MenuChoice::Vegetables));
    vMeal.push_back(MenuItem("Titan Turkey Sandwich Foot Long", 10.89, "980 calories", MenuChoice::Turkey, MenuChoice::Bread, MenuChoice::Vegetables));
    vMeal.push_back(MenuItem("Grand Slam Ham Sandwich 6 Inch", 6.79, "500 calories", MenuChoice::Pork, MenuChoice::Bread, MenuChoice::Vegetables));
    vMeal.push_back(MenuItem("Grand Slam Ham Sandwich Foot Long", 9.99, "1000 calories", MenuChoice::Pork, MenuChoice::Bread, MenuChoice::Vegetables));
    vMeal.push_back(MenuItem("Garlic Roast Beef Sandwich 6 Inch", 8.29, "480 calories", MenuChoice::Beef, MenuChoice::Bread, MenuChoice::Vegetables));
    vMeal.push_back(MenuItem("Garlic Roast Beef Sandwich Foot Long", 12.99, "960 calories", MenuChoice::Beef, MenuChoice::Bread, MenuChoice::Vegetables));
    vMeal.push_back(MenuItem("The Beast Sandwich 6 Inch", 8.69, "730 calories", MenuChoice::Protein, MenuChoice::Bread, MenuChoice::Vegetables));
    vMeal.push_back(MenuItem("The Beast Sandwich Foot Long", 13.89, "1460 calories", MenuChoice::Protein, MenuChoice::Bread, MenuChoice::Vegetables));
    vMeal.push_back(MenuItem("The Philly Cheese Steak 6 Inch", 7.69, "500 calories", MenuChoice::Beef, MenuChoice::Bread, MenuChoice::Cheese));
    vMeal.push_back(MenuItem("The Philly Cheese Steak Foot Long", 11.99, "1000 calories", MenuChoice::Beef, MenuChoice::Bread, MenuChoice::Cheese));
    vMeal.push_back(MenuItem("Teriyaki Blitz Cheese Steak 6 Inch", 7.69, "450 calories", MenuChoice::Beef, MenuChoice::Bread, MenuChoice::Cheese));
    vMeal.push_back(MenuItem("Teriyaki Blitz Cheese Steak Foot Long", 11.99, "900 calories", MenuChoice::Beef, MenuChoice::Bread, MenuChoice::Cheese));
    vMeal.push_back(MenuItem("The OutLaw Cheese Steak 6 Inch", 7.69, "490 calories", MenuChoice::Beef, MenuChoice::Bread, MenuChoice::Cheese));
    vMeal.push_back(MenuItem("The OutLaw Cheese Steak Foot Long", 11.99, "980 calories", MenuChoice::Beef, MenuChoice::Bread, MenuChoice::Cheese));
    vMeal.push_back(MenuItem("The Monster Cheese Steak 6 Inch", 8.39, "580 calories", MenuChoice::Beef, MenuChoice::Bread, MenuChoice::Cheese));
    vMeal.push_back(MenuItem("The Monster Cheese Steak Foot Long", 13.39, "1160 calories", MenuChoice::Beef, MenuChoice::Bread, MenuChoice::Cheese));
    vMeal.push_back(MenuItem("All-Pro Sweet Onion Teriyaki Chicken Sandwich 6 Inch", 7.59, "430 calories", MenuChoice::Chicken, MenuChoice::Bread, MenuChoice::Cheese));
    vMeal.push_back(MenuItem("All-Pro Sweet Onion Teriyaki Chicken Sandwich Foot Long", 11.69, "860 calories", MenuChoice::Chicken, MenuChoice::Bread, MenuChoice::Cheese));
    vMeal.push_back(MenuItem("Elite Chicken & Bacon Ranch Chicken Sandwich 6 Inch", 8.19, "570 calories", MenuChoice::Chicken, MenuChoice::Bread, MenuChoice::Pork));
    vMeal.push_back(MenuItem("Elite Chicken & Bacon Ranch Chicken Sandwich Foot Long", 12.59, "1140 calories", MenuChoice::Chicken, MenuChoice::Bread, MenuChoice::Pork));
    vMeal.push_back(MenuItem("The Great Garlic Chicken Sandwich 6 Inch", 8.19, "570 calories", MenuChoice::Chicken, MenuChoice::Bread, MenuChoice::Cheese));
    vMeal.push_back(MenuItem("The Great Garlic Chicken Sandwich Foot Long", 12.59, "1140 calories", MenuChoice::Chicken, MenuChoice::Bread, MenuChoice::Pork));
    vMeal.push_back(MenuItem("The Mexicali Chicken Sandwich 6 Inch", 8.59, "540 calories", MenuChoice::Chicken, MenuChoice::Bread, MenuChoice::Cheese));
    vMeal.push_back(MenuItem("The Mexicali Chicken Sandwich Foot Long", 13.59, "1080 calories", MenuChoice::Chicken, MenuChoice::Bread, MenuChoice::Cheese));
    vMeal.push_back(MenuItem("Hotshot Italiano Sandwich 6 Inch", 6.69, "620 calories", MenuChoice::Pork, MenuChoice::Bread, MenuChoice::Cheese));
    vMeal.push_back(MenuItem("Hotshot Italiano Sandwich Foot Long", 9.59, "1240 calories", MenuChoice::Pork, MenuChoice::Bread, MenuChoice::Cheese));
    vMeal.push_back(MenuItem("Ultimate B.M.T Italiano Sandwich 6 Inch", 7.29, "560 calories", MenuChoice::Pork, MenuChoice::Bread, MenuChoice::Cheese));
    vMeal.push_back(MenuItem("Ultimate B.M.T Italiano Sandwich Foot Long", 10.89, "1120 calories", MenuChoice::Pork, MenuChoice::Bread, MenuChoice::Cheese));
    vMeal.push_back(MenuItem("Supreme Meats Italiano Sandwich 6 Inch", 8.39, "590 calories", MenuChoice::Pork, MenuChoice::Bread, MenuChoice::Cheese));
    vMeal.push_back(MenuItem("Supreme Meats Italiano Sandwich Foot Long", 12.99, "1180 calories", MenuChoice::Pork, MenuChoice::Bread, MenuChoice::Cheese));
    vMeal.push_back(MenuItem("The Boss Italiano Sandwich 6 Inch", 7.39, "650 calories", MenuChoice::Pork, MenuChoice::Bread, MenuChoice::Beef));
    vMeal.push_back(MenuItem("The Boss Italiano Sandwich Foot Long", 11.29, "1300 calories", MenuChoice::Pork, MenuChoice::Bread, MenuChoice::Beef));
    vMeal.push_back(MenuItem("PickleBall Club Sandwich 6 Inch", 7.39, "500 calories", MenuChoice::Pork, MenuChoice::Bread, MenuChoice::Vegetables));
    vMeal.push_back(MenuItem("PickleBall Club Sandwich Foot Long", 11.39, "1000 calories", MenuChoice::Pork, MenuChoice::Bread, MenuChoice::Vegetables));
    vMeal.push_back(MenuItem("All-American Club Sandwich 6 Inch", 7.89, "530 calories", MenuChoice::Pork, MenuChoice::Bread, MenuChoice::Turkey));
    vMeal.push_back(MenuItem("All-American Club Sandwich Foot Long", 12.29, "1060 calories", MenuChoice::Pork, MenuChoice::Bread, MenuChoice::Turkey));
    vMeal.push_back(MenuItem("Subway Club Sandwich 6 Inch", 7.39, "500 calories", MenuChoice::Turkey, MenuChoice::Bread, MenuChoice::Pork));
    vMeal.push_back(MenuItem("Subway Club Sandwich Foot Long", 11.39, "1000 calories", MenuChoice::Turkey, MenuChoice::Bread, MenuChoice::Pork));
    vMeal.push_back(MenuItem("Turkey Cali Club Sandwich 6 Inch", 9.09, "580 calories", MenuChoice::Turkey, MenuChoice::Bread, MenuChoice::Pork));
    vMeal.push_back(MenuItem("Turkey Cali Club Sandwich Foot Long", 14.59, "1160 calories", MenuChoice::Turkey, MenuChoice::Bread, MenuChoice::Pork));
    


  }
    

    
  
};

