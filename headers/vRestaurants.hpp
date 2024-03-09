#ifndef VRESTAURANTS_HPP
#define VRESTAURANTS_HPP
#include "restaurants.hpp" 
#include <unordered_map>
#include <vector>

class vectorRestaurants {
public:
  vectorRestaurants();
  ~vectorRestaurants();

  Restaurant getRestaurant(int index);
  const vector<Restaurant> &getRestaurants() const;
  Restaurant getRestaurantByName(const std::string &name);

private:
  vector<Restaurant> vRestaurants;
  std::unordered_map<std::string, Restaurant> nameToRestaurant;
};

#endif
