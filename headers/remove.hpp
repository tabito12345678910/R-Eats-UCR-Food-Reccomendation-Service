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
    for (unsigned int j = 0; j < currentRestaurant.getMenu().size(); j++) {
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

// functions to make: remove by cuisines, remove by allergy, removeItem
void removeByCuisine(vectorRestaurants &vRestaurants, Nationality pref) {
  for (int i = vRestaurants.getRestaurants().size() - 1; i >= 0; i--) {
    Restaurant cur = vRestaurants.getRestaurant(i);
    if (cur.getNationality() != pref) {
      vRestaurants.getRestaurants().erase(
          vRestaurants.getRestaurants().begin() + i);
    }
  }
}

void removeItem(vector<MenuItem> &vMeal, MenuChoice pref) {
  for (int i = vMeal.size() - 1; i >= 0; i--) {
    if (vMeal.at(i).getChoOne() != pref && vMeal.at(i).getChoTwo() != pref &&
        vMeal.at(i).getChoThree() != pref) {
      vMeal.erase(vMeal.begin() + i);
    }
  }
}

void removeItemsByPref(vectorRestaurants &vRestaurants, MenuChoice pref) {
  for (int i = 0; i < vRestaurants.getRestaurants().size(); i++) {
    removeItem(vRestaurants.getRestaurant(i).getMenuItems(), pref);
  }
}
