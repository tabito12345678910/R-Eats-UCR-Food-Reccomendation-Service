#include "../headers/restaurant.hpp"
#include "../headers/vRestaurants.hpp"
#include "../headers/remove.hpp"
#include <vector>
#include "gtest/gtest.h"

using namespace std;

TEST(MainCalls, removeRestaurantByMenu) {
    vectorRestaurants testRestaurants;
    EXPECT_NO_THROW(removeRestaurantByMenu(testRestaurants, MenuChoice::Beef););
}