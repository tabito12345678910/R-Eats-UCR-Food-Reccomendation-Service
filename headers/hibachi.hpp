#include "buffetRestaurant.hpp"
#pragma once
class Hibachi : public buffetRestaurant {
public:
  void greeter();
  Hibachi() : meal("Poke Bowls"), priceS(12.50), priceM(13), priceL(14.5) {
    calS = "120 ~ 390";
    calM = "230 ~ 1020";
    calL = "290 ~ 1200";
    /* meal = "Poke Bowls";
    priceS = 12.50;
    priceM = 13.00;
    priceL = 14.50; */
    restaurantName = "Hibachi";
    vNameVariations = {restaurantName, "hibachisan", "hibachi"};

    // Hibachi doesn't have a an app nor a website lol
    androidLink = "https://www.menuwithprice.com/menu/hibachi-san/";
    iphoneLink = "https://www.menuwithprice.com/menu/hibachi-san/";

    vLocation.push_back(Location::HUB);
    vDrinks.push_back(Beverages::SodaFountain);
    vNation.push_back(Nationality::Japanese);

    vMenu.push_back(MenuChoice::Chicken);
    vMenu.push_back(MenuChoice::Beef);
    vMenu.push_back(MenuChoice::Pork);
    vMenu.push_back(MenuChoice::Rice);
    vMenu.push_back(MenuChoice::Shrimp);
    vMenu.push_back(MenuChoice::Vegetables);
    vMenu.push_back(MenuChoice::Salmon);
    vMenu.push_back(MenuChoice::Tuna);
    vMenu.push_back(MenuChoice::Scallops);
    vMenu.push_back(MenuChoice::Crab);
    // Tofu!
    vMenu.push_back(MenuChoice::Vegetarian);
    vMenu.push_back(MenuChoice::Vegan);
    vMenu.push_back(MenuChoice::Seafood);
    //Entrees
    vEntree.push_back(Entree("Grilled Chicken", MenuChoice::Chicken));
    vEntree.push_back(Entree("Tri-Tip Beef", MenuChoice::Beef));
    vEntree.push_back(Entree("Shrimp Tempura", MenuChoice::Shrimp));
    vEntree.push_back(Entree("Spam", MenuChoice::Pork));
    vEntree.push_back(Entree("Original Ahi Tuna", MenuChoice::Tuna));
    vEntree.push_back(Entree("Siracha Ahi Tuna", MenuChoice::Tuna));
    vEntree.push_back(Entree("Original Salmon", MenuChoice::Salmon));
    vEntree.push_back(Entree("Spicy Yuzu Salmon", MenuChoice::Salmon));
    vEntree.push_back(Entree("Kimchi Shrimp", MenuChoice::Shrimp));
    vEntree.push_back(Entree("Creamy Bay Scallops", MenuChoice::Scallops));
    vEntree.push_back(Entree("Crab Mix", MenuChoice::Crab));
    vEntree.push_back(Entree("Spicy Crab Mix", MenuChoice::Crab));
    vEntree.push_back(Entree("Tofu", MenuChoice::Vegan));
    //Sides
    vSide.push_back(Side("Sushi Rice", MenuChoice::Rice));
    vSide.push_back(Side("Brown Rice", MenuChoice::Rice));
    vSide.push_back(Side("Mixed Salad", MenuChoice::Vegan));
  }

private:
  double priceS, priceM, priceL;
  string meal;
};
