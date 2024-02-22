#ifndef RESTAURANT_HPP
#define RESTAURANT_HPP

#include <iomanip>
#include <iostream>
#include <string>
#include <vector>

enum class MenuChoice {
  Chicken,
  Beef,
  Pork,
  Turkey,
  Vegetarian,
  Vegan,
  Vegetables,
  Salad,
  Mushrooms, // Portabella slaps
  Fries,
  Rice,
  Noodles, // added for chowmein
  Burger,
  Sandwich,
  Shrimp,
  Tuna, // added seafood can be allergens
  Salmon,
  Scallops,
  Crab,
  Burritos, // added broad mexican dishes
  Tacos,
  Dessert
};

enum class Nationality { Japanese, Chinese, American, Halal, Mexican };

enum class Location {
  HUB,
  UniversityVillage,
  Glenmore,
  Orbach,
  Chung,
  EastCampus,
  MSE
};

enum class Beverages { Coffee, Tea, SodaFountain };

// virtual class
struct MenuItem {
  std::string itemName;
  double itemCost;
};

class Restaurant {
public:
  virtual ~Restaurant() {}
};
// virtual greeter() {} // plaeholder

/*virtual void addMenuChoice(MenuChoice choice) {
=======
virtual greeter() {} // plaeholder

virtual void addMenuChoice(MenuChoice choice) {
  MenuChoice.push_back(choice);
} */

/*virtual const std::vector<MenuChoice> &getMenuChoices() const {
  return vChoices;
}*/

/*protected:
  // These are vectors as of now, probably change it to strings or plain enums
  // This visually makes the code look clean
  std::string meal; //the meal restaurant is known for
  std::vector<MenuChoice> vChoices;
  std::vector<Beverages> vDrinks;
  std::vector<Nationality> vNation;
  std::vector<Location> vLocation;
  std::string restaurant_name;
//  std::vector<std::string, std::double, std::int>
//      vMenu; // name, price, calories
   Location vLocation; // plain enum, keeping the v for namesake
};  */

// For takeout restaurants like PandaExpress / Hibachi
/*class buffetRestaurant : public Restaurant {
  void greeter() {
    // Will display the dollar sign values for
    std::cout << name << " Menu\n"
              << std::fixed << std::showpoint << std::setprecision(2)
              << "Prices: Small(1 entree & 1 side): $" << priceS
              << " Medium (2 entree & 1 side): $" << priceM
              << "\nLarge(3 entree & 1 side): $" << priceL << endl;
  } */

protected:
std::double priceS, priceM, priceL;
std::vector <
    //};
    std::vector<std::string, std::double, std::int>
        vMenu;      // name, price, calories
Location vLocation; // plain enum, keeping the v for namesake
}
;

// For takeout restaurants like PandaExpress / Hibachi
class buffetRestaurant : public Restaurant {
  void greeter() {
    // Will display the dollar sign values for
    std::cout << name << " Menu\n"
              << std::fixed << std::showpoint << std::setprecision(2)
              << "Prices: Small(1 entree & 1 side): $" << priceS
              << " Medium (2 entree & 1 side): $" << priceM
              << "\nLarge(3 entree & 1 side): $" << priceL << endl;
  }

protected:
  std::double priceS, priceM, priceL, priceSDrink, priceMDrink,
      priceLDrink; // added drinks
  std::vector <
};

// NOTE  testing purposes
class SampleRestaurant : public Restaurant {
public:
  SampleRestaurant() {
    // You can hard code more values since it is a vector
    vChoices.push_back(MenuChoice::Steak);
    vNation.push_back(Nationality::American);
    vLocation.push_back(Location::HUB);
  }
};

#endif /* RESTAURANT_HPP */
