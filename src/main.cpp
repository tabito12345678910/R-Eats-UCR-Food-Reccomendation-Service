#include "../headers/restaurant.hpp"
#include <iostream>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::string;

string menu() {
  string choice;
  cout << endl << "Enter food type or cuisines ";
  cout << endl;
  cout << "Food types:" << endl
       << "1. Chicken" << endl
       << "2. Beef" << endl
       << "3. Pork" << endl
       << "4. Vegetarian" << endl
       << "5. Vegan" << endl
       << "6. Mushrooms" << endl
       << "7. Fries" << endl
       << "8. Rice" << endl
       << "9. Beans" << endl
       << "10. Shrimp" << endl
       << "11. Vegetables" << endl
       << "12. Tuna" << endl
       << "13. Salmon" << endl
       << "14. Scallops" << endl
       << "15. Crab" << endl
       << "16. Dessert" << endl;
  cout << endl;
  cout << "Cuisines:" << endl
       << "1. Japanese" << endl
       << "2. Chinese" << endl
       << "3. American" << endl
       << "4. Halal" << endl
       << "5. Mexican" << endl;
  cin >> choice;

  // fix buffer just in case non-numeric choice entered
  // also gets rid of newline character
  cin.clear();
  cin.ignore(256, '\n');
  return choice;
}

int main() {
  vectorRestaurant vMenus; // class that holds all restaurants

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
