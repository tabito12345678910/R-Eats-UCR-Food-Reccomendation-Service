#include "../headers/vRestaurants.hpp"
#include "../headers/restaurants.hpp"
#include <stdexcept>

vectorRestaurants::vectorRestaurants() {
  ChronicTacos chronic;
  CoffeeBean bean;
  Habit hab;
  HalalShack halal;
  Hibachi hiba;
  PandaExpress panda;
  Starbucks starb;
  Subway sub;

  // Every single object is pushed alphabetically
  //    We can easily push this into an enum class if we want to
  vRestaurants.push_back(chronic);
  vRestaurants.push_back(bean);
  vRestaurants.push_back(hab);
  vRestaurants.push_back(halal);
  vRestaurants.push_back(hiba);
  vRestaurants.push_back(panda);
  vRestaurants.push_back(starb);
  vRestaurants.push_back(sub);

  // Required for the getRestaurantByName
  for (Restaurant restaurant : vRestaurants) {
    nameToRestaurant[restaurant.getName()] = restaurant;
  }
};

vectorRestaurants::~vectorRestaurants(){
    /* for (size_t i = 0; i < vRestaurants.size(); ++i) {
      delete vRestaurants.at(i);
      vRestaurants.pop_front();
    } */
    /* for (Restaurant *restaurant : vRestaurants) {
      delete restaurant;
    } */
};

Restaurant vectorRestaurants::getRestaurant(int index) {
  if (index < vRestaurants.size()) {
    return vRestaurants.at(index);
  }
  throw runtime_error("SMOKE");
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
  throw runtime_error("SMOKE");
};
