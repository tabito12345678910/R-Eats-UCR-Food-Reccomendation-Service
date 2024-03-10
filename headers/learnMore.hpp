#ifndef LEARNMORE_HPP
#define LEARNMORE_HPP
#include <iostream>
#include "restaurant.hpp"
#include "vRestaurants.hpp"
#include "eta.hpp"
#include <algorithm>
#include <vector>
using namespace std;

using std::cin;
using std::cout;
using std::endl;
using std::string;

unsigned int learnMore(string from, Restaurant to) {
    string choice = "NULL";
    Eta eta;
    cout << "Coming from " << from << " Going to " << to.getName() << endl;
    cout << "ETA: " << eta.getEta(from, to.getLocation()) << " Minutes" << endl;

    cout << endl << "Learn more about " << to.getName() << " using the QRCode below" << endl;
    //insert QRCode for Restaurant

    cout << endl << "[Back]" << endl << "[Quit]" << endl;
    cin >> choice;
        cin.clear();
        cin.ignore(256, '\n');
        std::transform(choice.begin(), choice.end(), choice.begin(),
                    [](unsigned char c) { return std::tolower(c); });
    while (choice != "back" && choice != "quit" && choice != "q")
    {
        cout << "Invalid Response: Try Again" << endl;
        cin >> choice;
        cin.clear();
        cin.ignore(256, '\n');
        std::transform(choice.begin(), choice.end(), choice.begin(),
                    [](unsigned char c) { return std::tolower(c); });
    }
    if(choice == "back") {
        return 2;
    } else {
        return 1;
    }
}

#endif