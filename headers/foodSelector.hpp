#include "foodOptions.hpp"
#include <algorithm>

unsigned int selectingMeat() {
    string choice;
    while(choice != "back") {
        choice = meatOptions(); //show meat options and pick
        transform(choice.begin(), choice.end(), choice.begin(), [](unsigned char c){ return std::tolower(c); });
        if (choice == "back") {
        
        } else if (choice == "beef"){

        } else if (choice == "chicken") {

        } else if (choice == "pork") {

        } else if (choice == "turkey") {

        } else {
        cout << "Invalid Response: Try Again" << endl;
        }
    }
    return 0; //0 signals main to continue asking for food prefs
}

unsigned int selectingSeafood() {
    string choice;
    while(choice != "back") {
        choice = seafoodOptions(); //show seafood options and pick
        transform(choice.begin(), choice.end(), choice.begin(), [](unsigned char c){ return std::tolower(c); });
        if (choice == "back") {

        } else if (choice == "crab"){

        } else if (choice == "salmon") {

        } else if (choice == "scallops") {

        } else if (choice == "shrimp") {

        } else if (choice == "tuna") {

        } else {
        cout << "Invalid Response: Try Again" << endl;
        }
    }
    return 0; //0 signals main to continue asking for food prefs
}

unsigned int selectingDishes() {
    string choice;
    while(choice != "back") {
        choice = dishOptions(); //show dish options and pick
        transform(choice.begin(), choice.end(), choice.begin(), [](unsigned char c){ return std::tolower(c); });
        if (choice == "back") {

        } else if (choice == "burger"){

        } else if (choice == "burritos") {

        } else if (choice == "fries") {

        } else if (choice == "noodles") {

        } else if (choice == "rice") {

        } else if (choice == "salad") {

        } else if (choice == "sandwich") {

        } else if (choice == "tacos") {

        } else {
        cout << "Invalid Response: Try Again" << endl;
        }
    }
    return 0; //0 signals main to continue asking for food prefs
}

unsigned int selectingCuisine() {
    string choice;
    while(choice != "back") {
        choice = cuisineOptions(); //show cuisine options and pick
        std::transform(choice.begin(), choice.end(), choice.begin(), [](unsigned char c){ return std::tolower(c); });
        if (choice == "back") {

        } else if (choice == "american"){

        } else if (choice == "chinese") {

        } else if (choice == "japanese") {

        } else if (choice == "mediterranean") {

        } else if (choice == "mexican") {

        } else {
        cout << "Invalid Response: Try Again" << endl;
        }
    }
    return 0; //0 signals main to continue asking for food prefs
}