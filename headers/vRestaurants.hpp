#ifndef VRESTAURANTS_HPP
#define VRESTAURANTS_HPP
#include "restaurants.hpp"
#include <unordered_map>
#include <vector>

class vectorRestaurants {
public:
  vectorRestaurants();
  ~vectorRestaurants();


  Restaurant &getRestaurant(int index);
  vector<Restaurant> &getRestaurants();

  //vector<Restaurant> &getRestaurants();
  //Restaurant &getRestaurant(int index);

  Restaurant &getRestaurantByName(const std::string &name);
  bool isValid(vector<Restaurant> restaurants, Restaurant restaurant);

private:
  vector<Restaurant> vRestaurants;
  std::unordered_map<std::string, Restaurant> nameToRestaurant;
};

#endif
