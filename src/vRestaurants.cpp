#include "../headers/vRestaurants.hpp"

vectorRestaurants::vectorRestaurants() {
  Restaurant *chronic = new ChronicTacos();
  Restaurant *bean = new CoffeeBean();
  Restaurant *hab = new Habit();
  Restaurant *halal = new HalalShack();
  Restaurant *hibach = new Hibachi();
  Restaurant *panda = new PandaExpress();
  Restaurant *starb = new Starbucks();
  Restaurant *sub = new Subway();
};

vectorRestaurants::~vectorRestaurants() {
  for (size_t i = 0; i < vRestaurants.size(); ++i) {
    delete vRestaurants.at(i);
    vRestaurants.pop_front();
  }
};
