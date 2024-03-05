#include "../external/libqrencode/qrencode.h"
#include "../headers/restaurants.hpp"
#include "../src/QRCodeModule.cpp"
#include "../src/vRestaurants.cpp"
#include <iostream>
#include <string>
#include <vector>

using std::cout;
using std::endl;
using std::string;
using std::transform;
using std::vector;

void test1();
void test2();
void test3();

int main() {
  // hardcoded link test
  test1();

  // hardcoded restaurant test
  test2();

  // Real test using user input
  test3();

  return 0;
}

// test using given link
void test1() {
  vector<string> sample = {"https://example.com"};
  QRCodeModule QRsample;
  QRsample.displayLinkAsQRCode(sample);
  // Passed
  cout << "Passed the first sample test. Now... Next one!!" << endl << endl;
}

// Test using hardcoded restaurant
void test2() {
  cout << "Test two, hardcoded values!" << endl;
  vector<string> links;
  vectorRestaurants vRestaurants;

  string restaurantName = "Habit";
  string os = "iphone";

  Restaurant *pRestaurant = vRestaurants.getRestaurantByName(restaurantName);
  if (pRestaurant) {
    vector<string> links;
    string link = pRestaurant->getLink(os);
    cout << "Link: " << link << endl;
    QRCodeModule qrModule;
    vector<string> vlinks;
    vlinks.push_back(link);
    qrModule.displayLinkAsQRCode(vlinks);
  } else {
    cout << "Invalid restaurant" << endl;
  }
  cout << "End of Test 2 \n";
}

// Test using userInput
void test3() {
  cout << "Welcome to test3\n";
  vectorRestaurants vRestaurants;
  string option;
  string os;

  // WARNING  The inputs are not sanitized
  //
  cout << "Welcome to app store\n";
  cout << "What Restaurant app: ";

  cin >> option;
  cout << endl << endl;

  cout << "What OS? (android/iphone): ";
  cin >> os;
  cout << endl;

  // restaurantOption holds a pointer to the restaurant that the user chose
  Restaurant *restaurantOption = vRestaurants.getRestaurantByName(option);
  if (restaurantOption != nullptr) {
    vector<string> links;
    string link = restaurantOption->getLink(os);
    cout << "Link: " << link << endl;

    if (link != "Invalid OS") {
      links.push_back(link);
      QRCodeModule qrModule;
      qrModule.displayLinkAsQRCode(links);
    } else {
      cout << "Invalid OS" << endl;
    }
  }
}
