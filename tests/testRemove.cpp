#pragma once
#include "../headers/restaurant.hpp"
#include "../headers/vRestaurants.hpp"
#include <algorithm>
#include <iostream>
#include <vector>
#include "gtest/gtest.h"

using namespace std;

// using std::cin;
// using std::cout;
// using std::endl;
// using std::string;

TEST(MainCalls, removeRestaurantByMenu) {
    vectorRestaurants();
    removeRestaurantByMenu(vectorRestaurants, MenuChoice pref);

}