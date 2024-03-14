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
    EXPECT_EQ(mockEta.getEta("hub", Location::HUB), 0);
    EXPECT_EQ(mockEta.getEta("mse", Location::HUB), 5);
    EXPECT_EQ(mockEta.getEta("bigsprings", Location::Glenmore), 5);
    EXPECT_EQ(mockEta.getEta("sproul", Location::MSE), 13);
    EXPECT_EQ(mockEta.getEta("entemologymuseum", Location::MSE), -1);
    EXPECT_NE(mockEta.getEta("hub", Location::HUB), 10);
}