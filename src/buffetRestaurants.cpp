#include "../headers/hibachi.hpp"
#include "../headers/pandaExpress.hpp"

using std::cout;
using std::endl;
using std::vector;

void PandaExpress::PandaGreeter() {
  cout << endl
       << std::fixed << std::showpoint << std::setprecision(2)
       << "Prices: " << endl
       << "Small(1 entree & 1 side): $" << priceS << " Calories: " << calS
       << endl
       << "Medium (2 entree & 1 side): $" << priceM << " Calories: " << calM
       << endl
       << "Large(3 entree & 1 side): $" << priceL << " Calories: " << calL
       << endl
       << endl;

  // Should below this be commented?
  //<< "Prices: Small(1 entree & 1 side): $" << priceS
  << " Calories: " << calS << "\n Medium (2 entree & 1 side): $" << priceM
  << " Calories: " << calM << "\nLarge(3 entree & 1 side): $" << priceL
  << " Calories: " << calL << endl;
}
// FIX is the formatting correct Prices:
void Hibachi::HibaGreeter() {
  cout << endl
       << std::fixed << std::showpoint << std::setprecision(2)
       << "Prices: " << endl
       << "Small(2 entree & 1 side): $" << priceS << " Calories: " << calS
       << endl
       << "Medium (3 entree & 1 side): $" << priceM << " Calories: " << calM
       << endl
       << "Large(4 entree & 1 side): $" << priceL << " Calories: " << calL
       << endl
       << endl;
  // Should below this be commented?
  //<< "Prices: Small(2 entree & 1 side): $" << priceS
  << " Calories: " << calS << "\n Medium (3 entree & 1 side): $" << priceM
  << " Calories: " << calM << "\nLarge(4 entree & 1 side): $" << priceL
  << " Calories: " << calL << endl;
}
