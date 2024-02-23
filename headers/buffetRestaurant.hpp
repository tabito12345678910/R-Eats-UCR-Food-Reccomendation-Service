#ifndef BUFFETRESTAURANT
#define BUFFETRESTAURANT

#include "restaurant.hpp"

// For takeout restaurants like PandaExpress / Hibachi
class buffetRestaurant : public Restaurant {
  void greeter();

protected:
  // TODO  Do we really need the price of a drink?
  //    You come for the food, and the price of a drink is second thought
  //    Due to microeconomics and inelastic demand for a drink
  //    Also, removes clutter!
  std::double priceS, priceM, priceL, priceSDrink, priceMDrink,
      priceLDrink; // added drinks

  std::vector<std::string, std::double, std::int> vMenu;
};

#endif
