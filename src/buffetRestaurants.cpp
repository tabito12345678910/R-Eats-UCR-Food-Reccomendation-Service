#include "../headers/hibachi.hpp"
#include "../headers/pandaExpress.hpp"

using std::cout;
using std::endl;
using std::vector;

void PandaExpress::greeter() {
  cout << name << " Menu\n"
       << std::fixed << std::showpoint << std::setprecision(2)
       << "Prices: Small(1 entree & 1 side): $" << priceS
       << " Calories: " << calS << "\n Medium (2 entree & 1 side): $" << priceM
       << " Calories: " << calM << "\nLarge(3 entree & 1 side): $" << priceL
       << " Calories: " << calL << endl;
}

void Hibachi::greeter() {
  cout << name << " Menu\n"
       << std::fixed << std::showpoint << std::setprecision(2)
       << "Prices: Small(2 entree & 1 side): $" << priceS
       << " Calories: " << calS << "\n Medium (3 entree & 1 side): $" << priceM
       << " Calories: " << calM << "\nLarge(4 entree & 1 side): $" << priceL
       << " Calories: " << calL << endl;
}
