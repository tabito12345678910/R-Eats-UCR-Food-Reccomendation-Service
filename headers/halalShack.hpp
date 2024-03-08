#include "restaurant.hpp"
#include <string>

using namespace std;

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
    vMenu.push_back(MenuChoice::Protein);
    vMenu.push_back(MenuChoice::Beef);
    vMenu.push_back(MenuChoice::Rice);
    vMenu.push_back(MenuChoice::Chicken);
    vMenu.push_back(MenuChoice::Vegetables);
    vMenu.push_back(MenuChoice::Vegetarian);
    vMenu.push_back(MenuChoice::Vegan);

    vMeal.push_back(MenuItem("Rice and Chicken Bowl", 12.99,
                             "530 ~ 1140 calories", MenuChoice::Rice,
                             MenuChoice::Vegetables, MenuChoice::Chicken));
    vMeal.push_back(MenuItem("Rice and Beef Bowl", 12.99, "530 ~ 1140 calories",
                             MenuChoice::Rice, MenuChoice::Vegetables,
                             MenuChoice::Beef));
    vMeal.push_back(MenuItem("Rice and Falafel Bowl", 12.49,
                             "530 ~ 1140 calories", MenuChoice::Rice,
                             MenuChoice::Vegetables, MenuChoice::Vegetarian));
    vMeal.push_back(MenuItem("Cauliflower Bowl", 13.49, "480 ~ 1110 calories",
                             MenuChoice::Vegetables, MenuChoice::Vegetarian,
                             MenuChoice::Cheese));
    vMeal.push_back(MenuItem("Chickpea Korma Bowl", 12.49,
                             "480 ~ 1110 calories", MenuChoice::Vegan,
                             MenuChoice::Vegetarian, MenuChoice::Vegetables));
    vMeal.push_back(MenuItem("Fries and Falafel Bowl", 12.49,
                             "160 ~ 930 calories", MenuChoice::Fries,
                             MenuChoice::Vegetables, MenuChoice::Vegan));
    vMeal.push_back(MenuItem("Fries and Beef Bowl", 12.99, "160 ~ 930 calories",
                             MenuChoice::Fries, MenuChoice::Vegetables,
                             MenuChoice::Beef));
    vMeal.push_back(MenuItem("Fries and Chicken Bowl", 12.99,
                             "160 ~ 930 calories", MenuChoice::Fries,
                             MenuChoice::Vegetables, MenuChoice::Chicken));
    vMeal.push_back(MenuItem("Chicken Pita Wrap", 12.99, "590 ~ 1140 calories",
                             MenuChoice::Chicken, MenuChoice::Vegetables,
                             MenuChoice::Cheese));
    vMeal.push_back(MenuItem("Beef Pita Wrap", 12.99, "590 ~ 1140 calories",
                             MenuChoice::Beef, MenuChoice::Vegetables,
                             MenuChoice::Cheese));
    vMeal.push_back(MenuItem("Falafel Pita Wrap", 12.49, "590 ~ 1140 calories",
                             MenuChoice::Vegetarian, MenuChoice::Vegetables,
                             MenuChoice::Vegan));
    vMeal.push_back(MenuItem("Cauliflower Pita Wrap", 13.49,
                             "590 ~ 1140 calories", MenuChoice::Cheese,
                             MenuChoice::Vegetables, MenuChoice::Vegetarian));
    vMeal.push_back(MenuItem("Chickpea Korma Pita Wrap", 12.49,
                             "590 ~ 1140 calories", MenuChoice::Vegan,
                             MenuChoice::Vegetables, MenuChoice::Vegetarian));
  }
};
