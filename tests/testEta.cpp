#include "../headers/eta.hpp"
#include <vector>
#include "gtest/gtest.h"

using namespace std;

// Mock implementation of vectorRestaurants

//


TEST(MockGetEtaTest, testmockgetEta) {
    // Setup
    Eta mockEta;
    // Test cases
    EXPECT_EQ(mockEta.getEta("Hub", Location::HUB), 0);
    EXPECT_EQ(mockEta.getEta("MSE", Location::HUB), 5);
    EXPECT_EQ(mockEta.getEta("BigSprings", Location::Glenmore), 5);
    EXPECT_EQ(mockEta.getEta("Sproul", Location::MSE), 13);
    EXPECT_EQ(mockEta.getEta("EntemologyMuseum", Location::MSE), -1);
    EXPECT_NE(mockEta.getEta("Hub", Location::HUB), 10);
}