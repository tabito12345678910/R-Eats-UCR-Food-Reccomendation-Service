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
void test4();

int main() {
  // hardcoded link test
  test1();

  // hardcoded restaurant test
  test2();

  // The cleaned up version you should be using
  test3();

  // Real test using user input
  test4();

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

  Restaurant pRestaurant = vRestaurants.getRestaurantByName(restaurantName);
  if (pRestaurant.getLink(os) != "Invalid OS") {
    vector<string> links;
    string link = pRestaurant.getLink(os);
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

// NOTE  This should be the proper way to actually do it hardcoded
void test3() {
  cout << "Test 3" << endl << endl;
  Restaurant pRestaurant = ChronicTacos();
  string OperatingSystem = "android";
  if (pRestaurant.getLink(OperatingSystem) != "Invalid OS") {
    vector<string> vlink = {pRestaurant.getLink(OperatingSystem)};
    cout << "Link: " << vlink.at(0) << endl;
    QRCodeModule qrModule;
    qrModule.displayLinkAsQRCode(vlink);
  } else {
    cout << "pRestaurant is kinda nullptr lol\n";
  }
}

// Test using userInput
void test4() {
  cout << "\nWelcome to test4\n";
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

  // restaurantOption Should hold the dynamic object
  Restaurant restaurantOption = vRestaurants.getRestaurantByName(option);
  if (restaurantOption.getLink(os) != "Invalid OS") {
    vector<string> links;
    string link = restaurantOption.getLink(os);
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
