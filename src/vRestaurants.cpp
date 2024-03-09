#include "../headers/vRestaurants.hpp"
#include "../headers/restaurants.hpp"
#include <stdexcept>

vectorRestaurants::vectorRestaurants() {
<<<<<<< HEAD
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
=======
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
>>>>>>> refs/remotes/origin/tsaka014/algo
    nameToRestaurant[restaurant.getName()] = restaurant;
  }
};

<<<<<<< HEAD
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

const vector<Restaurant> &vectorRestaurants::getRestaurants() const {
=======
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
>>>>>>> refs/remotes/origin/tsaka014/algo
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
<<<<<<< HEAD
  throw runtime_error("SMOKE");
=======
  throw runtime_error("Invalid Restaurant Name");
>>>>>>> refs/remotes/origin/tsaka014/algo
};
