#pragma once
#include "restaurant.hpp"
#include "vRestaurants.hpp"
#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

void removeRestaurantByMenu(vectorRestaurants &vRestaurants, MenuChoice pref) {
  for (int i = vRestaurants.getRestaurants().size() - 1; i >= 0; i--) {
    bool found = false;
    Restaurant currentRestaurant = vRestaurants.getRestaurant(i);

    cout << currentRestaurant.getName() << endl;
    for (unsigned int j = 0; j < currentRestaurant.getMenu().size();
         j++) {
      if (currentRestaurant.getMenu().at(j) == pref) {
        found = true;
      }
    }
    if (found == false) {
      vRestaurants.getRestaurants().erase(
          vRestaurants.getRestaurants().begin() + i);
    }
  }
}
