#include "../header/buffetRestaurant.hpp"
#include "gtest/gtest.h"

TEST(RestaurantTests, testingGreeter) {
  Rectangle rect;
  EXPECT_NO_THROW({Rectangle rect;});
  EXPECT_EQ(rect.get_width(), 0);
  EXPECT_EQ(rect.get_height(), 0);
}