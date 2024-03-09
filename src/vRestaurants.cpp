#include "../headers/vRestaurants.hpp"
#include "../headers/restaurants.hpp"
#include <stdexcept>

vectorRestaurants::vectorRestaurants() {
  vRestaurants.push_back(ChronicTacos());
  vRestaurants.push_back(CoffeeBean());
  vRestaurants.push_back(Habit());
  vRestaurants.push_back(HalalShack());
  vRestaurants.push_back(Hibachi());
  vRestaurants.push_back(PandaExpress());
  vRestaurants.push_back(Starbucks());
  vRestaurants.push_back(Subway());

  // Required for the getRestaurantByName
  for (Restaurant &restaurant : vRestaurants) {
    nameToRestaurant[restaurant.getName()] = restaurant;
  }
};

vectorRestaurants::~vectorRestaurants() {
  vRestaurants.clear();
  nameToRestaurant.clear();
};

Restaurant vectorRestaurants::getRestaurant(int index) {
  if (index < static_cast<int>(vRestaurants.size())) {
    return vRestaurants[index];
  }
  throw runtime_error("Invalud restaurant index");
};

vector<Restaurant> &vectorRestaurants::getRestaurants() {
  return vRestaurants;
};

// Not very efficient
/* vectorRestaurants::Restaurant *getRestaurantByName(const std::string &name) {
  for (Restaurant *res : vRestaurants) {
    // Make sure you grab restaurantName
    if (res->getName() == name) {
      return res;
    }
  }
  return nullptr;
}; */

// Superior unorder map data structure
Restaurant vectorRestaurants::getRestaurantByName(const std::string &name) {
  auto it = nameToRestaurant.find(name);
  if (it != nameToRestaurant.end()) {
    return it->second;
  }
  throw runtime_error("Invalid Restaurant Name");
};
