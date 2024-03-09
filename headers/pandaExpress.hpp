#include "buffetRestaurant.hpp"
#include <string>
using namespace std;
using std::string;

class PandaExpress : public buffetRestaurant {

public:
  PandaExpress()
      : meal("Chinese cuisine, protein + rice/noodles"), priceS(8.40),
        priceM(9.90), priceL(11.40), priceSDrink(2.59), priceMDrink(2.99),
        priceLDrink(3.39) {

    calS = "240 ~ 1010";
    calM = "390 ~1500";
    calL = "540 ~ 1990";

    iphoneLink = "https://apps.apple.com/us/app/panda-express-chinese-kitchen/"
                 "id903990394";
    androidLink =
        "https://play.google.com/store/apps/details?id=com.pandaexpress.app";

    restaurantName = "Panda Express";
    vNameVariations = {restaurantName, "panda", "express"};

    vLocation.push_back(Location::HUB);
    vDrinks.push_back(Beverages::SodaFountain);
    vNation.push_back(Nationality::Chinese);

    vMenu.push_back(MenuChoice::Protein);
    vMenu.push_back(MenuChoice::Chicken);
    vMenu.push_back(MenuChoice::Beef);
    vMenu.push_back(MenuChoice::Rice);
    vMenu.push_back(MenuChoice::Shrimp);
    vMenu.push_back(MenuChoice::Vegetarian);
    vMenu.push_back(MenuChoice::Noodles); // added for chowmein
    // Eggplant Tofu!
    vMenu.push_back(MenuChoice::Vegetarian);
    vMenu.push_back(MenuChoice::Vegan);
    // There are desserts
    vMenu.push_back(MenuChoice::Dessert);

    // Entrees
    // Print each string in ui when
    vEntree.push_back(Entree("Orange Chicken", MenuChoice::Chicken));
    vEntree.push_back(
        Entree("String Bean Chicken Breast", MenuChoice::Chicken));
    vEntree.push_back(Entree("Kung Pao Chicken", MenuChoice::Chicken));
    vEntree.push_back(Entree("Mushroom Chicken", MenuChoice::Chicken));
    vEntree.push_back(Entree("Beijing Beef", MenuChoice::Beef));
    vEntree.push_back(Entree("Brocolli Beef", MenuChoice::Beef));
    vEntree.push_back(Entree("Black Pepper Angus Steak", MenuChoice::Beef));
    vEntree.push_back(Entree("Honey Walnut Shrimp", MenuChoice::Shrimp));
    vEntree.push_back(Entree("Grilled Teriyaki Chicken", MenuChoice::Chicken));
    vEntree.push_back(
        Entree("Honey Sesame Chicken Breast", MenuChoice::Chicken));
    vEntree.push_back(Entree("Black Pepper Chicken", MenuChoice::Chicken));
    vEntree.push_back(Entree("Eggplant Tofu", MenuChoice::Vegan));
    // Sides

    vSide.push_back(Side("Chow Mein", MenuChoice::Noodles));
    vSide.push_back(Side("White Steamed Rice", MenuChoice::Rice));
    vSide.push_back(Side("Brown Steamed Rice", MenuChoice::Rice));
    vSide.push_back(Side("Fried Rice", MenuChoice::Rice));
    vSide.push_back(Side("Mixed Vegetables", MenuChoice::Vegan));
  }

  void PandaGreeter();

private:
  double priceS, priceM, priceL, priceSDrink, priceMDrink, priceLDrink;
  string meal;
};
