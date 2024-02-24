#include "../include/buffetRestaurant.h"

using std::cout;
using std::endl;
using std::vector;

buffetRestaurant::greeter() {
  cout << name << " Menu\n"
       << std::fixed << std::showpoint << std::setprecision(2)
       << "Prices: Small(1 entree & 1 side): $" << priceS
       << " Medium (2 entree & 1 side): $" << priceM
       << "\nLarge(3 entree & 1 side): $" << priceL << endl;
}
