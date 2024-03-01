#include "../headers/buffetRestaurant.hpp"
#include "../headers/restaurant.hpp"
#include "../headers/restaurants.hpp"
#include "gtest/gtest.h"

TEST(RestaurantTestsChronicTacos, ChronicTacosConstructor) {
    EXPECT_NO_THROW({ChronicTacos testChronicTacos();});
}

TEST(RestaurantTestsChronicTacos, ChronicTacosVectors) {
    ChronicTacos testChronicTacos;
    EXPECT_EQ(testChronicTacos.getLocation(), Location::HUB);
    EXPECT_EQ(testChronicTacos.getBeverage(), Beverages::SodaFountain);
    EXPECT_EQ(testChronicTacos.getNationality(), Nationality::Mexican);
}

TEST(RestaurantTestsCoffeeBean, CoffeeBeanConstructor) {
    EXPECT_NO_THROW({CoffeeBean testCoffeeBean();});
}

// TEST(RestaurantTestsCoffeeBean, CoffeeBeanVectors) {
//     CoffeeBean *testCoffeeBean = new CoffeeBean(); 
//     EXPECT_EQ(testCoffeeBean.getLocation(), Location::HUB);
//     EXPECT_EQ(testCoffeeBean.getNationality(), Nationality::American);
// }


TEST(RestaurantTestsHabit, HabitConstructor) {
    EXPECT_NO_THROW({Habit testHabit();});
}    

TEST(RestaurantTestsHabit, HabitVectors) {
    Habit testHabit;
    EXPECT_EQ(testHabit.getLocation(), Location::HUB);
    EXPECT_EQ(testHabit.getNationality(), Nationality::American);
}

TEST(RestaurantTestsHalalShack, HalalShackConstructor) {
    EXPECT_NO_THROW({HalalShack testHalalShack();});
}

TEST(RestaurantTestsHalalShack, HalalShackVectors) {
    HalalShack testHalalShack;
    EXPECT_EQ(testHalalShack.getLocation(), Location::HUB);
    EXPECT_EQ(testHalalShack.getNationality(), Nationality::Mediterranean);
}

TEST(RestaurantTestsHibachi, HibachiConstructor) {
    EXPECT_NO_THROW({Hibachi testHibachi();});
}

TEST(RestaurantTestsHibachi, HibachiVectors) {
    Hibachi testHibachi;
    EXPECT_EQ(testHibachi.getLocation(), Location::HUB);
    EXPECT_EQ(testHibachi.getNationality(), Nationality::Japanese);
}

TEST(RestaurantTestsPandaExpress, PandaExpressConstructor) {
    EXPECT_NO_THROW({PandaExpress testPandaExpress();});
}

TEST(RestaurantTestsPandaExpress, PandaExpressVectors) {
    PandaExpress testPandaExpress;
    EXPECT_EQ(testPandaExpress.getLocation(), Location::HUB);
    EXPECT_EQ(testPandaExpress.getNationality(), Nationality::Chinese);
}

TEST(RestaurantTestsStarbucks, StarbucksConstructor) {
    EXPECT_NO_THROW({Starbucks testStarbucks();});
}

TEST(RestaurantTestsStarbucks, StarbucksVectors) {
    Starbucks testStarbucks;
    EXPECT_EQ(testStarbucks.getLocation(), Location::MSE);
    //EXPECT_EQ(testStarbucks.getLocation(), Location::Glenmore);
    EXPECT_EQ(testStarbucks.getNationality(), Nationality::American);
}

TEST(RestaurantTestsSubway, SubwayConstructor) {
    EXPECT_NO_THROW({Subway testSubway();});
}

TEST(RestaurantTestsSubway, SubwayVectors) {
    Subway testSubway;
    EXPECT_EQ(testSubway.getLocation(), Location::HUB);
    EXPECT_EQ(testSubway.getNationality(), Nationality::American);
}