#include "../headers/restaurants.hpp"
#include <iostream>
#include <vector>
#include <algorithm>

using std::cin;
using std::cout;
using std::endl;
using std::string;

string meatOptions() { //displays meat options when "Meat" is selected
  string choice;
  cout << "Meat Options" << endl
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
  cout << "Seafood Options" << endl
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
  cout << "Dishes Options" << endl
       << "1. Burger" << endl
       << "2. Burritos" << endl
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
  cout << "Cuisine Options:" << endl
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

unsigned int selectingMeat() {
  string choice;
  while(choice != "back") {
    choice = meatOptions(); //show meat options and pick
    std::transform(choice.begin(), choice.end(), choice.begin(), [](unsigned char c){ return std::tolower(c); });
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
    std::transform(choice.begin(), choice.end(), choice.begin(), [](unsigned char c){ return std::tolower(c); });
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
    std::transform(choice.begin(), choice.end(), choice.begin(), [](unsigned char c){ return std::tolower(c); });
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

string menu() {
  string choice;
  cout << endl << "Welcome to R'Eats" << endl;
  cout << endl << "Enter food type or cuisines " << endl;
  // TODO Put the result into a unsigned int
  //    Then into a hash table that holds all restaurants with that enum
  //
  cout << "Food Preferences:" << endl
       << "1. Meat:" << endl
       << "2. Seafood:" << endl
       << "3. Vegetarian" << endl
       << "4. Vegan" << endl
       << "5. Vegetables" << endl
       << "6. Dishes:" << endl
       << "7. Dessert" << endl
       << "8. Cuisines:" << endl
       << "9. None" << endl // default; will give every and all options; using "None" rather than "No Preference" to avoid using getline 
       << "10. [Done]" << endl
       << "11. [Quit]" << endl; //quit option

  cin >> choice;

  // fix buffer just in case non-numeric choice entered
  // also gets rid of newline character
  cin.clear();
  cin.ignore(256, '\n');
  return choice;
}

unsigned int menuSelect() {
  /* vectorRestaurant vMenus; // class that holds all restaurants */

  string choice;
  
  while(choice != "quit") {
    choice = menu();
    std::transform(choice.begin(), choice.end(), choice.begin(), [](unsigned char c){ return std::tolower(c); }); //ideally make "choice" lowercase for input conviences

    if (choice == "quit") {
      cout << "Quitting Program" << endl;
    } else if (choice == "meat") {
      return selectingMeat(); //selector for meat options; returns 0 if back 1 if any other option

    } else if (choice == "seafood") {
      return selectingSeafood(); //selector for seafood options; returns 0 if back 1 if any other option

    } else if (choice == "vegetarian") {
      //add Vegetarian to preferences

    } else if (choice == "vegan") {
      //add Vegan to preferences


    } else if (choice == "vegetables") {
      //add Vegetables to preferences


    } else if (choice == "dishes") {
      return selectingDishes(); //selector for dish options; returns 0 if back 1 if any other option
      
    } else if (choice == "dessert") {
      //add Dessert to preferences


    } else if (choice == "cuisines") {
      return selectingCuisine(); //selector for cuisine options; returns 0 if back 1 if any other option
      
    } else if (choice == "none") {
      //if none, show user all restaurant options, default


    } else if (choice == "done") {
      return 1; //signals main that program is done and should display restaurant options that fit prefs

    } else { //invalid response
      cout << "Invalid Response: Try Again" << endl;
    }
  }
  return 2; //2 signals main that program is quitting, exits program and ends
}

int main() {

  return 0;
}