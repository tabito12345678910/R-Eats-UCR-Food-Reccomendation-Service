#ifndef FOODOPTIONS_HPP
#define FOODOPTIONS_HPP
#include <iostream>

using std::cin;
using std::cout;
using std::endl;
using std::string;

string meatOptions() { //displays meat options when "Meat" is selected
    string choice;
    cout << endl << "Meat Options" << endl
        << "1. Beef" << endl
        << "2. Chicken" << endl
        << "3. Pork" << endl
        << "4. Turkey" << endl
        << "5. [Back]" << endl; //"Back" to go back to food preferences 
    
    cin >> choice;
    cin.clear();
    cin.ignore(256, '\n');
    return choice;
}

string seafoodOptions() { //displays meat options when "Seafood" is selected
    string choice;
    cout << endl << "Seafood Options" << endl
        << "1. Crab" << endl
        << "2. Salmon" << endl
        << "3. Scallops" << endl
        << "4. Shrimp" << endl
        << "5. Tuna" << endl
        << "6. [Back]" << endl; //"Back" to go back to food preferences
    
    cin >> choice;
    cin.clear();
    cin.ignore(256, '\n');
    return choice;
}

string dishOptions() { //displays meat options when "Dishes" is selected
    string choice;
    cout << endl << "Dishes Options" << endl
        << "1. Burger" << endl
        << "2. Burrito" << endl
        << "3. Fries" << endl
        << "4. Noodles" << endl
        << "5. Rice" << endl
        << "6. Salad" << endl
        << "7. Sandwich" << endl
        << "8. Tacos" << endl
        << "9. [Back]" << endl; //"Back" to go back to food preferences
    
    cin >> choice;
    cin.clear();
    cin.ignore(256, '\n');
    return choice;
}

string cuisineOptions() { //displays meat options when "Cuisine" is selected
    string choice;
    cout << endl << "Cuisine Options:" << endl
        << "1. American" << endl
        << "2. Chinese" << endl
        << "3. Japanese" << endl
        << "4. Mediterranean" << endl
        << "5. Mexican" << endl
        << "6. [Back]" << endl; //"Back" to go back to food preferences

    cin >> choice;
    cin.clear();
    cin.ignore(256, '\n');
    return choice;
}

#endif