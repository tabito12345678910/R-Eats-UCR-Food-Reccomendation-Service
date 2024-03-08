#pragma once
#include "vRestaurants.hpp"
#include "restaurant.hpp"
#include <vector>
#include <algorithm> 
#include <iostream>
using namespace std; 

void removeRestaurantByMenu(vectorRestaurants& vRestaurants, MenuChoice pref) {
    for(int i = vRestaurants.getRestaurants().size()-1; i >= 0; i--) {
        bool found = false;
        Restaurant* cur = vRestaurants.getRestaurant(i);
        cout << cur->getName() << endl;
        for(unsigned int j = 0; j < cur->getMenuChoices().size(); j++) {
            if(cur->getMenuChoices().at(j) == pref) {
                found = true;
            }
        }
        if(found == false) {
            vRestaurants.getRestaurants().erase(vRestaurants.getRestaurants().begin() + i);
        }
    }
}
