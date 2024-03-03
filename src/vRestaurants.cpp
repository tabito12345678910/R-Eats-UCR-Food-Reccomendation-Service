#include "../headers/vRestaurants.hpp"

vectorRestaurants::vectorRestaurants() {
  vRestaurants.push_back(new ChronicTacos());
  vRestaurants.push_back(new CoffeeBean());
  vRestaurants.push_back(new Habit());
  vRestaurants.push_back(new HalalShack());
  vRestaurants.push_back(new Hibachi());
  vRestaurants.push_back(new PandaExpress());
  vRestaurants.push_back(new Starbucks());
  vRestaurants.push_back(new Subway());

  for (Restaurant *restaurant : vRestaurants) {
    nameToRestaurant[restaurant->getName()] = restaurant;
  }
};

vectorRestaurants::~vectorRestaurants() {
  /* for (size_t i = 0; i < vRestaurants.size(); ++i) {
    delete vRestaurants.at(i);
    vRestaurants.pop_front();
  } */
  for (Restaurant *restaurant : vRestaurants) {
    delete restaurant;
  }
};

Restaurant *vectorRestaurants::getRestaurant(int index) {
  if (index < vRestaurants.size()) {
    return vRestaurants.at(index);
  }

  return nullptr;
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
Restaurant *vectorRestaurants::getRestaurantByName(const std::string &name) {
  auto it = nameToRestaurant.find(name);
  if (it != nameToRestaurant.end()) {
    return it->second;
  }
  return nullptr;
};
