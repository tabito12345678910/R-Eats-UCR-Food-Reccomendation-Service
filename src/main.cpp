#include "../headers/restaurants.hpp"
#include <iostream>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::string;

void meatOptions() { //displays meat options when "Meat" is selected
  cout << "Meat Options" << endl
       << "1. Beef" << endl
       << "2. Chicken" << endl
       << "3. Pork" << endl
       << "4. Turkey" << endl
       << "5. [Back]" << endl; //"Back" to see other food preferences 
}

void seafoodOptions() {
  cout << "Seafood Options" << endl
       << "1. Crab" << endl
       << "2. Salmon" << endl
       << "3. Scallops" << endl
       << "4. Shrimp" << endl
       << "5. Tuna" << endl
       << "6. [Back]" << endl;
}

void dishOptions() {
  cout << "Dishes Options" << endl
       << "1. Burger" << endl
       << "2. Burritos" << endl
       << "3. Fries" << endl
       << "4. Noodles" << endl
       << "5. Rice" << endl
       << "6. Salad" << endl
       << "7. Sandwich" << endl
       << "8. Tacos" << endl
       << "9. [Back]" << endl;
}

void cuisineOptions() {
  cout << "Cuisine Options:" << endl
       << "1. American" << endl
       << "2. Chinese" << endl
       << "3. Japanese" << endl
       << "4. Mediterranean" << endl
       << "5. Mexican" << endl
       << "6. [Back]" << endl;
}

string menu() {
  string choice;
  cout << endl << "Enter food type or cuisines ";
  cout << endl;
  // TODO Put the result into a unsigned int
  //    Then into a hash table that holds all restaurants with that enum
  cout << "Food Preferences:" << endl
       << "1. Meats:" << endl
       << "2. Seafood:" << endl
       << "3. Vegetarian" << endl
       << "4. Vegan" << endl
       << "5. Vegetables" << endl
       << "6. Dishs:" << endl
       << "7. Dessert" << endl
       << "8. Cuisines:" << endl
       << "9. No preference" << endl; // default
  cin >> choice;

  // fix buffer just in case non-numeric choice entered
  // also gets rid of newline character
  cin.clear();
  cin.ignore(256, '\n');
  return choice;
}

int main() {
  /* vectorRestaurant vMenus; // class that holds all restaurants */

  string choice = menu();
  if (choice == "quit") {
    cout << "quitting program" << endl;
  } else if (choice == "Chicken") {
    cout << "Chicken" << endl;
  } else {
    cout << "testing" << endl;
  }
  // fix buffer just in case non-numeric choice entered
  return 0;
}
