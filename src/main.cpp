#include "../headers/menu.hpp"
#include "../headers/vRestaurants.hpp"
#include "../headers/learnMore.hpp"
#include "../headers/eta.hpp"
#include <iostream>
#include <vector>
#include <algorithm>
using std::cin;
using std::cout;
using std::endl;
using std::string;

int main() {
  string mainStatus;
  string from;
  while (mainStatus != "quit") 
  {  
    string restaurantChoice = "NULL";
    vectorRestaurants vRestaurants;
    vector<MenuChoice> preferences;
    unsigned int track = 0;
    unsigned int status = 0;

    unsigned int diet = dietarySelect(vRestaurants, preferences);
    if (diet == 2) {
      cout << "Quiting Program" << endl;
      return 0;
    } else if (diet != 1 && diet != 5) {
      track++;
    }
    
    unsigned int allergy = allergySelect(vRestaurants);
    if (allergy == 2) {
      cout << "Quiting Program" << endl;
      return 0;
    }

    while (status == 0 && track < 3) {
      status = menuSelect(diet, allergy, vRestaurants, preferences, track);
      track++;
    }

    if (status == 2) {
      return 0; // quit the program nothing occurs
    } else if (status > 2) {
      return -1; // any other number is faulty
    }

    UserPreference user = UserPreference(preferences.at(0),preferences.at(1),preferences.at(2));
    vector<Restaurant> menu = vRestaurants.getRestaurants();
    while (restaurantChoice != "quit" && restaurantChoice != "q" && restaurantChoice != "again") {
      unsigned int endStatus;
      user.PrintMeals();
      cout << "Enter restaurant to learn more" << endl;
      cin >> restaurantChoice;
      cin.clear();
      cin.ignore(256, '\n');
      std::transform(restaurantChoice.begin(), restaurantChoice.end(), restaurantChoice.begin(),
                    [](unsigned char c) { return std::tolower(c); });
        while (restaurantChoice != "quit" && restaurantChoice != "q" && restaurantChoice != "again") {
          
          if(vRestaurants.isValid(menu, ChronicTacos()) && ChronicTacos().isOptionValid(restaurantChoice)) {
            endStatus = learnMore(from, ChronicTacos()); 
          } else if (vRestaurants.isValid(menu, CoffeeBean()) && CoffeeBean().isOptionValid(restaurantChoice)) {
            endStatus = learnMore(from, CoffeeBean());
          } else if (vRestaurants.isValid(menu, Habit()) && Habit().isOptionValid(restaurantChoice)) {
            endStatus = learnMore(from, Habit());
          } else if (vRestaurants.isValid(menu, HalalShack()) && HalalShack().isOptionValid(restaurantChoice)) {
            endStatus = learnMore(from, HalalShack());
          } else if (vRestaurants.isValid(menu, Hibachi()) && Hibachi().isOptionValid(restaurantChoice)) {
            endStatus = learnMore(from, Hibachi());
          } else if (vRestaurants.isValid(menu, PandaExpress()) && PandaExpress().isOptionValid(restaurantChoice)) {
            endStatus = learnMore(from, PandaExpress());
          } else if (vRestaurants.isValid(menu, Starbucks()) && Starbucks().isOptionValid(restaurantChoice)) {
            endStatus = learnMore(from, Starbucks());
          } else if (vRestaurants.isValid(menu, Subway()) && Subway().isOptionValid(restaurantChoice)) {
            endStatus = learnMore(from, Subway());
          } else {
            cout << "Invalid Response: Try Again" << endl;
            cin >> restaurantChoice;
            cin.clear();
            cin.ignore(256, '\n');
            std::transform(restaurantChoice.begin(), restaurantChoice.end(), restaurantChoice.begin(),
                        [](unsigned char c) { return std::tolower(c); });
          }
          if(endStatus == 1) {
            cout << "Quiting Program" << endl;
            return 0;
          } else {
            break;
          }
        }
      
      
    }
  }
  return 0;
}
