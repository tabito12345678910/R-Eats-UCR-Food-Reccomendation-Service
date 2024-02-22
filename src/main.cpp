#include "../headers/restaurants.hpp"
#include <vector>

using namespace std;

int main() {
  vector<*Restaurant> vCombinedMenus;
  // allocating memory
  // TODO  Write a class for vCombinedMenus
  // include constructor and destructor
  // FIX  MOVE THIS TO ITS OWN HEADERS FILE
  Restaurant *panda = new PandaExpress();
  Restaurant *halal = new Halal();
  vCombinedMenus.push_back(panda);

  cout << "hellow world" << endl;

  // Clearing memory
  for (size_t i = 0; i < vCombinedMenus.size(); ++i) {
    delete vCombinedMenus.at(vCombinedMenus.size() - 1);
    vCombinedMenus.pop_back();
  }
  return 0;
}
