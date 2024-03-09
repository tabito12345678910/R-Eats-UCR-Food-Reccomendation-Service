#ifndef FOODSELECTOR_HPP
#define FOODSELECTOR_HPP
#include "foodOptions.hpp"
#include "remove.hpp"
#include <algorithm>

unsigned int selectingMeat(vectorRestaurants& vRestaurants) {
    string choice;
    while(choice != "back") {
        choice = meatOptions(); //show meat options and pick
        transform(choice.begin(), choice.end(), choice.begin(), [](unsigned char c){ return std::tolower(c); });
        if (choice == "back") {
            cout << "Backing" << endl;
        } else if (choice == "beef"){
            cout << "Beef added" << endl;
            removeRestaurantByMenu(vRestaurants, MenuChoice::Beef);
        } else if (choice == "chicken") {
            cout << "Chicken added" << endl;
            removeRestaurantByMenu(vRestaurants, MenuChoice::Chicken);
        } else if (choice == "pork") {
            cout << "Pork added" << endl;
            removeRestaurantByMenu(vRestaurants, MenuChoice::Pork);
        } else if (choice == "turkey") {
            cout << "Turkey added" << endl;
            removeRestaurantByMenu(vRestaurants, MenuChoice::Turkey);
        } else if (choice == "all") {
            cout << "All Proteins added" << endl;
            removeRestaurantByMenu(vRestaurants, MenuChoice::Protein);
            return 0;
        } else {
           cout << "Invalid Response: Try Again" << endl;
        }
    }
    return 1; //0 signals main to continue asking for food prefs
}

unsigned int selectingSeafood(vectorRestaurants& vRestaurants) {
    string choice;
    while(choice != "back") {
        choice = seafoodOptions(); //show seafood options and pick
        transform(choice.begin(), choice.end(), choice.begin(), [](unsigned char c){ return std::tolower(c); });
        if (choice == "back") {
            cout << "Backing" << endl;
        } else if (choice == "crab"){
            cout << "Crab added" << endl;
            removeRestaurantByMenu(vRestaurants, MenuChoice::Crab);
        } else if (choice == "salmon") {
            cout << "Salmon added" << endl;
            removeRestaurantByMenu(vRestaurants, MenuChoice::Salmon);
        } else if (choice == "scallops") {
            cout << "Scallops added" << endl;
            removeRestaurantByMenu(vRestaurants, MenuChoice::Scallops);
        } else if (choice == "shrimp") {
            cout << "Shrimp added" << endl;
            removeRestaurantByMenu(vRestaurants, MenuChoice::Shrimp);
        } else if (choice == "tuna") {
            cout << "Tuna added" << endl;
            removeRestaurantByMenu(vRestaurants, MenuChoice::Tuna);
        } else if (choice == "all") {
            cout << "All Seafood added" << endl;
            removeRestaurantByMenu(vRestaurants, MenuChoice::Seafood);
            return 0;
        } else {
        cout << "Invalid Response: Try Again" << endl;
        }
    }
    return 1; //0 signals main to continue asking for food prefs
}

unsigned int selectingDishes(vectorRestaurants& vRestaurants) {
    string choice;
    while(choice != "back") {
        choice = dishOptions(); //show dish options and pick
        transform(choice.begin(), choice.end(), choice.begin(), [](unsigned char c){ return std::tolower(c); });
        if (choice == "back") {
            cout << "Backing" << endl;
        } else if (choice == "bread"){
            cout << "Bread added" << endl;
            removeRestaurantByMenu(vRestaurants, MenuChoice::Bread);
        } else if (choice == "fries") {
            cout << "Fries added" << endl;
            removeRestaurantByMenu(vRestaurants, MenuChoice::Fries);
        } else if (choice == "noodles") {
            cout << "Noodles added" << endl;
            removeRestaurantByMenu(vRestaurants, MenuChoice::Noodles);
        } else if (choice == "rice") {
            cout << "Rice added" << endl;
            removeRestaurantByMenu(vRestaurants, MenuChoice::Rice);
        } else {
        cout << "Invalid Response: Try Again" << endl;
        }
    }
    return 1; //0 signals main to continue asking for food prefs
}

unsigned int selectingCuisine(vectorRestaurants& vRestaurants) {
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
    return 1; //0 signals main to continue asking for food prefs
}

unsigned int selectingDairy(vectorRestaurants& vRestaurants) {
    string choice;
    while(choice != "back") {
        choice = dairyOptions(); //show dairy options and pick
        transform(choice.begin(), choice.end(), choice.begin(), [](unsigned char c){ return std::tolower(c); });
        if (choice == "back") {
            cout << "Backing" << endl;
        } else if (choice == "cheese"){
            cout << "Cheese added" << endl;
            removeRestaurantByMenu(vRestaurants, MenuChoice::Cheese);
        } else if (choice == "milk") {
            cout << "Milk added" << endl;
            removeRestaurantByMenu(vRestaurants, MenuChoice::Milk);
        } else {
        cout << "Invalid Response: Try Again" << endl;
        }
    }
    return 1; //0 signals main to continue asking for food prefs
}

unsigned int selectingDrink(unsigned int diet, vectorRestaurants& vRestaurants) {
    string choice;
    while(choice != "back") {
        choice = drinkOptions(); //show drink options and pick
        transform(choice.begin(), choice.end(), choice.begin(), [](unsigned char c){ return std::tolower(c); });
        if (choice == "back") {
            cout << "Backing" << endl;
        } else if (choice == "coffee"){
            cout << "Coffee added" << endl;
            removeRestaurantByMenu(vRestaurants, MenuChoice::Coffee);
            if(diet == 4) {
                return 2;
            }
            
        } else if (choice == "fountain") {
            cout << "Fountain Drink added" << endl;
        } else if (choice == "tea") {
            cout << "Tea added" << endl;
            removeRestaurantByMenu(vRestaurants, MenuChoice::Tea);
        } else {
        cout << "Invalid Response: Try Again" << endl;
        }
    }
    return 1; //0 signals main to continue asking for food prefs
}

#endif
