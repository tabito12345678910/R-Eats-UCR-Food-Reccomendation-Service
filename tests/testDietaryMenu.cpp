#include "../headers/dietaryMenu.hpp"
//#include "../headers/vRestaurants.hpp"
#include <vector>
#include "gtest/gtest.h"

using namespace std;

// Mock implementation of vectorRestaurants
class MockVectorRestaurants : public vectorRestaurants{
public:
};

//allergyDisplay and dietaryDisplay are just output and taking in an input call, so I did not test them, assuming they work
unsigned int mockallergySelect(vectorRestaurants vRestaurants, string input) {
  string choice = input;

  while (choice != "quit") {
    // choice = allergyDisplay();
    std::transform(choice.begin(), choice.end(), choice.begin(),
                   [](unsigned char c) {
                     return std::tolower(c);
                   }); // ideally make "choice" lowercase for input conviences

    if (choice == "quit") {
      return 2;
    } else if (choice == "dairy") {
      // leave only resturants and menu items that are vegan
      cout << "Removed Dairy" << endl;
      return 7;

    } else if (choice == "seafood") {
      // remove menu items that have seafood
      cout << "Removed Seafood" << endl;
      return 6;

    } else if (choice == "none") {
      cout << "No Restrictions" << endl;
      return 1;
    } else { // invalid response
      throw "Invalid Response: Try Again"; //changed from cout to throw
    }
  }
  return 2;
}

//hard inputs choice instead of calling dietaryDisplay
unsigned int mockdietarySelect(vectorRestaurants vRestaurants, string input) {

  string choice = input;

  while (choice != "quit") {
    //choice = dietaryDisplay();
    std::transform(choice.begin(), choice.end(), choice.begin(),
                   [](unsigned char c) {
                     return std::tolower(c);
                   }); // ideally make "choice" lowercase for input conviences

    if (choice == "quit") {
      return 2;
    } else if (choice == "vegetarian") {
      // leave only resturants and menu items that are vegetarian
      removeRestaurantByMenu(vRestaurants, MenuChoice::Vegetarian);
      removeItemsByPref(vRestaurants, MenuChoice::Vegetarian);
      return 3;

    } else if (choice == "vegan") {
      // leave only resturants and menu items that are vegan
      removeRestaurantByMenu(
          vRestaurants,
          MenuChoice::Vegan); // removes restaurants without Vegan options
      removeItemsByPref(vRestaurants, MenuChoice::Vegan);
      return 4;

    } else if (choice == "pescatarian") {
      return 5;
    } else if (choice == "none") {
      cout << "No Restrictions" << endl;
      return 1;
    } else { // invalid response
      throw "Invalid Response: Try Again";
    }
  }
  return 2; // 2 signals main that program is quitting, exits program and ends
}

TEST(DietarySelectTest, mockallergySelect) {

    MockVectorRestaurants vRestaurants;
    EXPECT_EQ(mockallergySelect(vRestaurants, "quit"), 2);
    EXPECT_EQ(mockallergySelect(vRestaurants, "QUIT"), 2); //have to call twice or else won't enter loop
    EXPECT_EQ(mockallergySelect(vRestaurants, "dairy"), 7);
    EXPECT_EQ(mockallergySelect(vRestaurants, "seafood"), 6);
    EXPECT_NE(mockallergySelect(vRestaurants, "none"), 2);
    EXPECT_ANY_THROW(mockallergySelect(vRestaurants, "abc"));
    // Ensure the appropriate filtering functions are called
}

// Test the dietarySelect function
TEST(DietarySelectTest, TestmockdietarySelect) {

    MockVectorRestaurants vRestaurants;
    EXPECT_EQ(mockdietarySelect(vRestaurants, "quit"), 2);
    EXPECT_EQ(mockdietarySelect(vRestaurants, "QUIT"), 2); //have to call twice or else won't enter loop
    EXPECT_EQ(mockdietarySelect(vRestaurants, "vegetarian"), 3);
    EXPECT_EQ(mockdietarySelect(vRestaurants, "vegan"), 4);
    EXPECT_EQ(mockdietarySelect(vRestaurants, "pescatarian"), 5);
    EXPECT_NE(mockdietarySelect(vRestaurants, "none"), 2);
    EXPECT_ANY_THROW(mockdietarySelect(vRestaurants, "abc"));
    // Ensure the appropriate filtering functions are called
}


unsigned int mockselectingMeat(vectorRestaurants vRestaurants, string input) {
  string choice = input;
  while (choice != "back") {
    //choice = meatOptions(); // show meat options and pick
    transform(choice.begin(), choice.end(), choice.begin(),
              [](unsigned char c) { return std::tolower(c); });
    if (choice == "back") {
      cout << "Backing" << endl;
    } else if (choice == "beef") {
      cout << "Beef added" << endl;
      removeRestaurantByMenu(vRestaurants, MenuChoice::Beef);
      removeItemsByPref(vRestaurants, MenuChoice::Beef);
      return 0;
    } else if (choice == "chicken") {
      cout << "Chicken added" << endl;
      removeRestaurantByMenu(vRestaurants, MenuChoice::Chicken);
      removeItemsByPref(vRestaurants, MenuChoice::Chicken);
      return 0;
    } else if (choice == "pork") {
      cout << "Pork added" << endl;
      removeRestaurantByMenu(vRestaurants, MenuChoice::Pork);
      removeItemsByPref(vRestaurants, MenuChoice::Pork);
      return 0;
    } else if (choice == "turkey") {
      cout << "Turkey added" << endl;
      removeRestaurantByMenu(vRestaurants, MenuChoice::Turkey);
      removeItemsByPref(vRestaurants, MenuChoice::Turkey);
      return 0;
    } else if (choice == "all") {
      cout << "All Proteins added" << endl;
      removeRestaurantByMenu(vRestaurants, MenuChoice::Protein);
      removeItemsByPref(vRestaurants, MenuChoice::Protein);
      return 0;
    } else {
      cout << "Invalid Response: Try Again" << endl;
    }
  }
  return 1; // 0 signals main to continue asking for food prefs
}

TEST(MockfoodSelector, testmockselectingMeat) {
    MockVectorRestaurants mockRestaurants;
   
    // Test cases
    EXPECT_EQ(mockselectingMeat(mockRestaurants, "back"), 1);
}