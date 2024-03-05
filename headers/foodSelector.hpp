#include "foodOptions.hpp"
#include <algorithm>

unsigned int selectingMeat() {
    string choice;
    while(choice != "back") {
        choice = meatOptions(); //show meat options and pick
        transform(choice.begin(), choice.end(), choice.begin(), [](unsigned char c){ return std::tolower(c); });
        if (choice == "back") {
            cout << "Backing" << endl;
        } else if (choice == "beef"){
            cout << "Beef added" << endl;
        } else if (choice == "chicken") {
            cout << "Chicken added" << endl;
        } else if (choice == "pork") {
            cout << "Pork added" << endl;
        } else if (choice == "turkey") {
            cout << "Turkey added" << endl;
        } else if (choice == "all") {
            cout << "All Proteins added" << endl;
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
            cout << "Backing" << endl;
        } else if (choice == "crab"){
            cout << "Crab added" << endl;
        } else if (choice == "salmon") {
            cout << "Salmon added" << endl;
        } else if (choice == "scallops") {
            cout << "Scallops added" << endl;
        } else if (choice == "shrimp") {
            cout << "Shrimp added" << endl;
        } else if (choice == "tuna") {
            cout << "Tuna added" << endl;
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
            cout << "Backing" << endl;
        } else if (choice == "bread"){
            cout << "Bread added" << endl;
        } else if (choice == "fries") {
            cout << "Fries added" << endl;
        } else if (choice == "noodles") {
            cout << "Noodles added" << endl;
        } else if (choice == "rice") {
            cout << "Rice added" << endl;
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
        transform(choice.begin(), choice.end(), choice.begin(), [](unsigned char c){ return std::tolower(c); });
        if (choice == "back") {
            cout << "Backing" << endl;
        } else if (choice == "american"){
            cout << "American added" << endl;
        } else if (choice == "chinese") {
            cout << "Chinese added" << endl;
        } else if (choice == "japanese") {
            cout << "Japanese added" << endl;
        } else if (choice == "mediterranean") {
            cout << "Mediterranean added" << endl;
        } else if (choice == "mexican") {
            cout << "Mexican added" << endl;
        } else {
        cout << "Invalid Response: Try Again" << endl;
        }
    }
    return 0; //0 signals main to continue asking for food prefs
}

unsigned int selectingDairy() {
    string choice;
    while(choice != "back") {
        choice = dairyOptions(); //show dairy options and pick
        transform(choice.begin(), choice.end(), choice.begin(), [](unsigned char c){ return std::tolower(c); });
        if (choice == "back") {
            cout << "Backing" << endl;
        } else if (choice == "cheese"){
            cout << "Cheese added" << endl;
        } else if (choice == "milk") {
            cout << "Milk added" << endl;
        } else {
        cout << "Invalid Response: Try Again" << endl;
        }
    }
    return 0; //0 signals main to continue asking for food prefs
}

unsigned int selectingDrink() {
    string choice;
    while(choice != "back") {
        choice = drinkOptions(); //show drink options and pick
        transform(choice.begin(), choice.end(), choice.begin(), [](unsigned char c){ return std::tolower(c); });
        if (choice == "back") {
            cout << "Backing" << endl;
        } else if (choice == "coffee"){
            cout << "Coffee added" << endl;
        } else if (choice == "tea") {
            cout << "Tea added" << endl;
        } else {
        cout << "Invalid Response: Try Again" << endl;
        }
    }
    return 0; //0 signals main to continue asking for food prefs
}