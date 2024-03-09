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
        Restaurant cur = vRestaurants.getRestaurant(i);
        for(unsigned int j = 0; j < cur.getMenuChoices().size(); j++) {
            if(cur.getMenuChoices().at(j) == pref) {
                found = true;
            }
        }
        if(found == false) {
            vRestaurants.getRestaurants().erase(vRestaurants.getRestaurants().begin() + i);
        }
    }
}

//functions to make: remove by cuisines, remove by allergy, removeItem 
void removeByCuisine(vectorRestaurants& vRestaurants, Nationality pref) {
    for(int i = vRestaurants.getRestaurants().size()-1; i >= 0; i--) {
        Restaurant cur = vRestaurants.getRestaurant(i);
        if(cur.getNationality() != pref) {
            vRestaurants.getRestaurants().erase(vRestaurants.getRestaurants().begin() + i);
        }
    }
}

void removeItem(vectorRestaurants& vRestaurants, MenuChoice pref) {
    for(int i = vRestaurants.getRestaurants().size()-1; i >= 0; i--) {
        bool found = false;
        Restaurant cur = vRestaurants.getRestaurant(i);
        for(int j = cur.getMenuItems().size()-1; j >= 0; j--) {
            MenuItem curItem = cur.getMenuItems().at(j);
            if(curItem.getChoOne() == pref || curItem.getChoTwo() == pref || curItem.getChoThree() == pref) {
                found = true;
            }
            if(found == false) {
                vRestaurants.getRestaurant(i).getMenuItems().erase(vRestaurants.getRestaurant(i).getMenuItems().begin() + j);
            }
        }
    }
}