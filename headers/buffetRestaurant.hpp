#ifndef BUFFETRESTAURANT
#define BUFFETRESTAURANT

#include "restaurant.hpp"

using std::vector;
// For takeout restaurants like PandaExpress / Hibachi
class buffetRestaurant : public Restaurant {
  void greeter();

protected:
  double priceS, priceM, priceL;

  // I don't think this is used
  /* vector<std::string, std::double, std::int> vMenu; */
};

#endif
