#include "../headers/eta.hpp"
#include <vector>
#include "gtest/gtest.h"

using namespace std;

// Mock implementation of vectorRestaurants
class MockEta : public Eta{
public:
    int mockgetEta(string from, Location to) { // from should be a user input and to should be the
                                 // location of the recommended restaurant
    vector<Place> EtaToRecommended = getVPlace();
    for (unsigned int i = 0; i < EtaToRecommended.size(); ++i) {
      if (from == EtaToRecommended.at(i).getFrom() &&
          to == EtaToRecommended.at(i).getTo()) {
        return EtaToRecommended.at(i).getMinutes();
      }
    }
    return -1; // error if returns -1
    }
};

TEST(MockGetEtaTest, testmockgetEta) {
    // Setup
    MockEta mockEta;
   
    // Test cases
    EXPECT_EQ(mockEta.getEta("Hub", Location::HUB), 0);
    EXPECT_EQ(mockEta.getEta("MSE", Location::HUB), 5);
    EXPECT_EQ(mockEta.getEta("BigSprings", Location::Glenmore), 5);
    EXPECT_EQ(mockEta.getEta("Sproul", Location::MSE), 13);
    EXPECT_EQ(mockEta.getEta("EntemologyMuseum", Location::MSE), -1);
    EXPECT_NE(mockEta.getEta("Hub", Location::HUB), 10);
}