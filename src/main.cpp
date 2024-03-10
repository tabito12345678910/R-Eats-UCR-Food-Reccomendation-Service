#include "../headers/menu.hpp"
#include "../headers/vRestaurants.hpp"
#include <iostream>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main() {
  vectorRestaurants vRestaurants;
  unsigned int track = 1;
  unsigned int status = 0;
  unsigned int diet = dietarySelect(vRestaurants);
  if (diet == 2) {
    cout << "Quiting Program" << endl;
    return 0;
  }
  unsigned int allergy = allergySelect(vRestaurants);
  if (allergy == 2) {
    cout << "Quiting Program" << endl;
    return 0;
  }

  while (status == 0 && track < 4) {
    status = menuSelect(diet, allergy, vRestaurants);
    track++;
  }

  if (status == 2) {
    return 0; // quit the program nothing occurs
  } else if (status > 2) {
    return -1; // any other number is faulty
  }

  cout << "Displaying Resturant Options" << endl;
  int list = 1;
  vector<Restaurant> test = vRestaurants.getRestaurants();
  for (auto value : test) {
    cout << list << "." << value.getName() << endl;
    list++;
    vector<MenuItem> test2 = value.getMenuItems();
    for (auto item : test2) {
      cout << item.getItemName() << " - " << item.getCost() << ", ";
    }
    cout << endl;
  }

  return 0;
}
