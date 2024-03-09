#ifndef BUFFETRESTAURANT
#define BUFFETRESTAURANT

#include "restaurant.hpp"
#include <string>
using namespace std;
using std::string;

using std::vector;
// For takeout restaurants like PandaExpress / Hibachi
class buffetRestaurant : public Restaurant {



  protected:
    double priceS, priceM, priceL;
    string calS, calM, calL;

    string name;

    

  // I don't think this is used
  /* vector<std::string, std::double, std::int> vMenu; */
};

#endif
