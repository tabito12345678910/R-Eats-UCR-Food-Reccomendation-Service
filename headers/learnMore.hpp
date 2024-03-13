#ifndef LEARNMORE_HPP
#define LEARNMORE_HPP
#include "../external/libqrencode/qrencode.h"
#include "../src/QRCodeModule.cpp"

#include "eta.hpp"
#include "restaurant.hpp"
#include "vRestaurants.hpp"
#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

using std::cin;
using std::cout;
using std::endl;
using std::string;

unsigned int learnMore(string from, Restaurant to) {
  string OperatingSystem = "iphone";
  cout << "Phone Operating System?(android/iphone)" << OperatingSystem;
  cin >> OperatingSystem;
  cin.clear();
  cin.ignore(256, '\n');

  string choice = "NULL";
  Eta eta;
  cout << "ETA to " << to.getName() << ": "
       << eta.getEta(from, to.getLocation()) << " Minutes" << endl;

  cout << endl
       << "Learn more about " << to.getName() << " using the QRCode below"
       << endl;
  // insert QRCode for Restaurant
  if (true) {
    vector<string> vlink = {to.getLink(OperatingSystem)};
    QRCodeModule qrModule;
    qrModule.displayLinkAsQRCode(vlink);
  }

  cout << endl << "[Back]" << endl << "[Quit]" << endl;
  cin >> choice;
  cin.clear();
  cin.ignore(256, '\n');
  std::transform(choice.begin(), choice.end(), choice.begin(),
                 [](unsigned char c) { return std::tolower(c); });
  while (choice != "back" && choice != "quit" && choice != "q") {
    cout << "Invalid Response: Try Again" << endl;
    cin >> choice;
    cin.clear();
    cin.ignore(256, '\n');
    std::transform(choice.begin(), choice.end(), choice.begin(),
                   [](unsigned char c) { return std::tolower(c); });
  }
  if (choice == "back") {
    return 2;
  } else {
    return 1;
  }
}

#endif
