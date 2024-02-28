#include "../headers/buffetRestaurant.hpp"
#include "../headers/restaurant.hpp"
#include "../headers/restaurants.hpp"
#include "gtest/gtest.h"

TEST(RestaurantTestsChronicTacos, ChronicTacosConstructor) {
    EXPECT_NO_THROW({ChronicTacos testChronicTacos();});
}

TEST(RestaurantTestsCoffeeBean, CoffeeBeanConstructor) {
    EXPECT_NO_THROW({CoffeeBean testCoffeeBean();});
}

TEST(RestaurantTestsHabit, HabitConstructor) {
    EXPECT_NO_THROW({Habit testHabit();});
}

TEST(RestaurantTestsHalalShack, HalalShackConstructor) {
    EXPECT_NO_THROW({HalalShack testHalalShack();});
}

TEST(RestaurantTestsHibachi, HibachiConstructor) {
    EXPECT_NO_THROW({Hibachi testHibachi();});
}

TEST(RestaurantTestsPandaExpress, PandaExpressConstructor) {
    EXPECT_NO_THROW({PandaExpress testPandaExpress();});
}

TEST(RestaurantTestsStarbucks, StarbucksConstructor) {
    EXPECT_NO_THROW({Starbucks testStarbucks();});
}

TEST(RestaurantTestsSubway, SubwayConstructor) {
    EXPECT_NO_THROW({Subway testSubway();});
}