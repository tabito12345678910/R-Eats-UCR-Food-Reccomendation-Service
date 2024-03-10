#ifndef FOODOPTIONS_HPP
#define FOODOPTIONS_HPP
#include <iostream>

using std::cin;
using std::cout;
using std::endl;
using std::string;

string meatOptions() { // displays meat options when "Meat" is selected
  string choice;
  cout << endl
       << "Protein Options" << endl
       << "1. Beef" << endl
       << "2. Chicken" << endl
       << "3. Pork" << endl
       << "4. Turkey" << endl
       << "5. All" << endl
       << "6. [Back]" << endl; //"Back" to go back to food preferences

  cin >> choice;
  cin.clear();
  cin.ignore(256, '\n');
  return choice;
}

string seafoodOptions() { // displays meat options when "Seafood" is selected
  string choice;
  cout << endl
       << "Seafood Options" << endl
       << "1. Crab" << endl
       << "2. Salmon" << endl
       << "3. Scallops" << endl
       << "4. Shrimp" << endl
       << "5. Tuna" << endl
       << "6. [Back]" << endl; //"Back" to go back to food preferences

  cin >> choice;
  cin.clear();
  cin.ignore(256, '\n');
  return choice;
}

string dishOptions() { // displays meat options when "Dishes" is selected
  string choice;
  cout << endl
       << "Dishes Options" << endl
       << "1. Bread" << endl
       << "2. Fries" << endl
       << "3. Noodles" << endl
       << "4. Rice" << endl
       << "5. [Back]" << endl; //"Back" to go back to food preferences

  cin >> choice;
  cin.clear();
  cin.ignore(256, '\n');
  return choice;
}

string cuisineOptions() { // displays meat options when "Cuisine" is selected
  string choice;
  cout << endl
       << "Cuisine Options:" << endl
       << "1. American" << endl
       << "2. Chinese" << endl
       << "3. Japanese" << endl
       << "4. Mediterranean" << endl
       << "5. Mexican" << endl
       << "6. [Back]" << endl; //"Back" to go back to food preferences

  cin >> choice;
  cin.clear();
  cin.ignore(256, '\n');
  return choice;
}

string dairyOptions() { // displays meat options when "Dairy" is selected
  string choice;
  cout << endl
       << "Dairy Options:" << endl
       << "1. Cheese" << endl
       << "2. Milk" << endl
       << "3. [Back]" << endl; //"Back" to go back to food preferences

  cin >> choice;
  cin.clear();
  cin.ignore(256, '\n');
  return choice;
}

string drinkOptions() { // displays meat options when "Drinks" is selected
  string choice;
  cout << endl
       << "Drink Options:" << endl
       << "1. Coffee" << endl
       << "2. Tea" << endl
       << "3. [Back]" << endl; //"Back" to go back to food preferences4
  cin >> choice;
  cin.clear();
  cin.ignore(256, '\n');
  return choice;
}

#endif
