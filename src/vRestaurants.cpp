#include "../headers/vRestaurants.hpp"
#include "../headers/restaurants.hpp"
#include <stdexcept>

vectorRestaurants::vectorRestaurants()
    : vRestaurants{ChronicTacos(), CoffeeBean(),   Habit(),     HalalShack(),
                   Hibachi(),      PandaExpress(), Starbucks(), Subway()} {
  for (auto &restaurant : vRestaurants) {
    nameToRestaurant[restaurant.getName()] = restaurant;
  }
}

vectorRestaurants::~vectorRestaurants() {
  vRestaurants.clear();
  nameToRestaurant.clear();
};

Restaurant &vectorRestaurants::getRestaurant(int index) {
  if (index < vRestaurants.size()) {
    return vRestaurants.at(index);
  }
  throw runtime_error("Couldn't grab restaurant");
}

vector<Restaurant> &vectorRestaurants::getRestaurants() {
  return vRestaurants;
};

// Superior unorder map data structure
Restaurant &vectorRestaurants::getRestaurantByName(const std::string &name) {
  auto it = nameToRestaurant.find(name);
  if (it != nameToRestaurant.end()) {
    return it->second;
  }
  throw runtime_error("Invalid Restaurant Name");
};

bool vectorRestaurants::isValid(vector<Restaurant> restaurants,
                                Restaurant restaurant) {
  for (auto search : restaurants) {
    if (search.getName() == restaurant.getName()) {
      return true;
    }
  }
  return false;
}
