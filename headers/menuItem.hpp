#ifndef MENUITEM_HPP
#define MENUITEM_HPP
#include <string>
#pragma once 
using namespace std;
// THe file of all the anumeration classes
enum class MenuChoice {
  Protein, // for options where you can choose between chicken, beef, pork
  Chicken,
  Beef,
  Pork,
  Turkey,
  Vegetarian,
  Vegan,
  Vegetables,
  Fries,
  Rice,
  Noodles, // added for chowmein
  Bread,
  Cheese, // added dairy options
  Milk,
  Coffee,
  Tea,
  Shrimp,
  Tuna, // added seafood can be allergens
  Salmon,
  Scallops,
  Crab,
  Snacks, //slightly diff nuance from dessert so added, cuz user wouldnt think chips and salsa = dessert
  Dessert,
  Seafood
};

enum class Nationality { Japanese, Chinese, American, Mediterranean, Mexican };

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
class MenuItem {
private:
  string itemName;
  double itemCost;
  MenuChoice choice1;
  MenuChoice choice2;
  MenuChoice choice3;
  string calories;

public:
  // ADD CALORIES ONCE U GET BETTER PICTURES OF MENUS
  MenuItem(string in, double ic, string cal, MenuChoice cho1, MenuChoice cho2,
           MenuChoice cho3)
      : itemName(in), itemCost(ic), calories(cal), choice1(cho1), choice2(cho2),
        choice3(cho3) {} // constructor each meal has two menuChoices assigned
  //getters
  string getItemName(){return itemName;}
  double getItemCost(){return itemCost;}
  string getCalories(){return calories;}
  MenuChoice getChoice1(){return choice1;}
  MenuChoice getChoice2(){return choice2;}
  MenuChoice getChoice3(){return choice3;}
};

// MenuItem but for buffetclass
class Entree {
private:
  string itemName;
  MenuChoice choice1;

public:
  Entree(string in, MenuChoice cho1)
      : itemName(in), choice1(cho1) {
  } // constructor each meal has two menuChoices assigned
  //getter
  string getEntreeItemName(){return itemName;}
  MenuChoice getEntreeChoice(){return choice1;}
};

class Side {
private:
  string itemName;
  MenuChoice choice1;

public:
  Side(string in, MenuChoice cho1)
      : itemName(in), choice1(cho1) {
  } // constructor each meal has two menuChoices assigned
  //getter
  string getSideItemName(){return itemName;}
  MenuChoice getSideChoice(){return choice1;}
};
#endif
