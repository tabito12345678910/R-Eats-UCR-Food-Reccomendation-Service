#include "../external/libqrencode/qrencode.h"
#include "../headers/restaurants.hpp"
#include "../src/QRCodeModule.cpp"
#include "../src/vRestaurants.cpp"
#include <iostream>
#include <string>
#include <vector>

using std::cout;
using std::string;
using std::vector;

int main() {
  vectorRestaurants vRestaurants;
  string option;
  string os;

  cout << "Welcome to app store\n";
  cout << "What Restaurant app: ";
  cin >> option;
  cout << std::endl << std::endl;

  cout << "What OS? (android/iphone): ";
  cin >> os;
  cout << std::endl;

  // restaurantOption holds a pointer to the restaurant that the user chose
  Restaurant *restaurantOption = vRestaurants.getRestaurantByName(option);
  if (restaurantOption != nullptr) {
    vector<string> links;
    string link = restaurantOption->getLink(os);
    if (link != "Invalid OS") {
      links.push_back(link);
      QRCodeModule qrModule;
      qrModule.displayLinkAsQRCode(links);
    } else {
      cout << "Invalid Operating System \n";
    }
  }

  return 0;
}
