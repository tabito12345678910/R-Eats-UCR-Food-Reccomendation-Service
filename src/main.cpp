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
  vector<MenuChoice> preferences;
  unsigned int track = 0;
  unsigned int status = 0;
  unsigned int diet = dietarySelect(vRestaurants, preferences);
  if (diet == 2) {
    cout << "Quiting Program" << endl;
    return 0;
  } else if (diet != 1 && diet != 5) {
    track++;
  }
  unsigned int allergy = allergySelect(vRestaurants);
  if (allergy == 2) {
    cout << "Quiting Program" << endl;
    return 0;
  }

  while (status == 0 && track < 3) {
    status = menuSelect(diet, allergy, vRestaurants, preferences, track);
    track++;
  }

  if (status == 2) {
    return 0; // quit the program nothing occurs
  } else if (status > 2) {
    return -1; // any other number is faulty
  }
  UserPreference user = UserPreference(preferences.at(0),preferences.at(1),preferences.at(2));
  user.PrintMeals();

  return 0;
}
