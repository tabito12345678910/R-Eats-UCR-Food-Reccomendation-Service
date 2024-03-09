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
            return 0;
        } else if (choice == "chicken") {
            cout << "Chicken added" << endl;
            removeRestaurantByMenu(vRestaurants, MenuChoice::Chicken);
            return 0;
        } else if (choice == "pork") {
            cout << "Pork added" << endl;
            removeRestaurantByMenu(vRestaurants, MenuChoice::Pork);
            return 0;
        } else if (choice == "turkey") {
            cout << "Turkey added" << endl;
            removeRestaurantByMenu(vRestaurants, MenuChoice::Turkey);
            return 0;
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
            return 0;
        } else if (choice == "salmon") {
            cout << "Salmon added" << endl;
            removeRestaurantByMenu(vRestaurants, MenuChoice::Salmon);
            return 0;
        } else if (choice == "scallops") {
            cout << "Scallops added" << endl;
            removeRestaurantByMenu(vRestaurants, MenuChoice::Scallops);
            return 0;
        } else if (choice == "shrimp") {
            cout << "Shrimp added" << endl;
            removeRestaurantByMenu(vRestaurants, MenuChoice::Shrimp);
            return 0;
        } else if (choice == "tuna") {
            cout << "Tuna added" << endl;
            removeRestaurantByMenu(vRestaurants, MenuChoice::Tuna);
            return 0;
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
            return 0;
        } else if (choice == "fries") {
            cout << "Fries added" << endl;
            removeRestaurantByMenu(vRestaurants, MenuChoice::Fries);
            return 0;
        } else if (choice == "noodles") {
            cout << "Noodles added" << endl;
            removeRestaurantByMenu(vRestaurants, MenuChoice::Noodles);
            return 0;
        } else if (choice == "rice") {
            cout << "Rice added" << endl;
            removeRestaurantByMenu(vRestaurants, MenuChoice::Rice);
            return 0;
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
            removeByCuisine(vRestaurants, Nationality::American);
            return 0;
        } else if (choice == "chinese") {
            cout << "Chinese added" << endl;
            removeByCuisine(vRestaurants, Nationality::Chinese);
            return 0;
        } else if (choice == "japanese") {
            cout << "Japanese added" << endl;
            removeByCuisine(vRestaurants, Nationality::Japanese);
            return 0;
        } else if (choice == "mediterranean") {
            cout << "Mediterranean added" << endl;
            removeByCuisine(vRestaurants, Nationality::Mediterranean);
            return 0;
        } else if (choice == "mexican") {
            cout << "Mexican added" << endl;
            removeByCuisine(vRestaurants, Nationality::Mexican);
            return 0;
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
            return 0;
            removeRestaurantByMenu(vRestaurants, MenuChoice::Cheese);
            return 0;
        } else if (choice == "milk") {
            cout << "Milk added" << endl;
            removeRestaurantByMenu(vRestaurants, MenuChoice::Milk);
            return 0;
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
            return 0;
            
        } else if (choice == "fountain") {
            cout << "Fountain Drink added" << endl;
        } else if (choice == "tea") {
            cout << "Tea added" << endl;
            removeRestaurantByMenu(vRestaurants, MenuChoice::Tea);
            return 0;
        } else {
        cout << "Invalid Response: Try Again" << endl;
        }
    }
    return 1; //0 signals main to continue asking for food prefs
}

#endif
