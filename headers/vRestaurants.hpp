<<<<<<< HEAD
#ifndef VRESTAURANTS_HPP
#define VRESTAURANTS_HPP
#include "restaurants.hpp" 
=======
#pragma once
#include "restaurants.hpp"

>>>>>>> refs/remotes/origin/tsaka014/algo
#include <unordered_map>
#include <vector>

class vectorRestaurants {
public:
  vectorRestaurants();
  ~vectorRestaurants();

<<<<<<< HEAD
  Restaurant getRestaurant(int index);
  const vector<Restaurant> &getRestaurants() const;
=======
  vector<Restaurant> &getRestaurants();
  Restaurant getRestaurant(int index);
>>>>>>> refs/remotes/origin/tsaka014/algo
  Restaurant getRestaurantByName(const std::string &name);

private:
  vector<Restaurant> vRestaurants;
  std::unordered_map<std::string, Restaurant> nameToRestaurant;
};

#endif
