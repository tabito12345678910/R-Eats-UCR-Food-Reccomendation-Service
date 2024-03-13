#include "../headers/menu.hpp"
#include <vector>
#include "gtest/gtest.h"
//also includes foodOptions and remove
using namespace std;

class MockVectorRestaurants : public vectorRestaurants{
public:
};
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
      throw "Invalid Response: Try Again"; //changed to throw for testing
    }
  }
  return 1; // 0 signals main to continue asking for food prefs
}


TEST(MockfoodSelector, testmockselectingMeat) {
    MockVectorRestaurants mockRestaurants;
   
    // Test cases
    EXPECT_EQ(mockselectingMeat(mockRestaurants, "back"), 1);
    EXPECT_EQ(mockselectingMeat(mockRestaurants, "BACK"), 1); //have to call twice or else won't enter loop
    EXPECT_EQ(mockselectingMeat(mockRestaurants, "beef"), 0); 
    EXPECT_EQ(mockselectingMeat(mockRestaurants, "chicken"), 0);
    EXPECT_EQ(mockselectingMeat(mockRestaurants, "pork"), 0);
    EXPECT_EQ(mockselectingMeat(mockRestaurants, "turkey"), 0);
    EXPECT_NE(mockselectingMeat(mockRestaurants, "all"), 1);
    EXPECT_ANY_THROW(mockselectingMeat(mockRestaurants, "abc"));
}

unsigned int mockselectingSeafood(vectorRestaurants vRestaurants, string input) {
  string choice = input;
  while (choice != "back") {
    //choice = seafoodOptions(); // show seafood options and pick
    transform(choice.begin(), choice.end(), choice.begin(),
              [](unsigned char c) { return std::tolower(c); });
    if (choice == "back") {
      cout << "Backing" << endl;
    } else if (choice == "crab") {
      cout << "Crab added" << endl;
      removeRestaurantByMenu(vRestaurants, MenuChoice::Crab);
      removeItemsByPref(vRestaurants, MenuChoice::Crab);
      return 0;
    } else if (choice == "salmon") {
      cout << "Salmon added" << endl;
      removeRestaurantByMenu(vRestaurants, MenuChoice::Salmon);
      removeItemsByPref(vRestaurants, MenuChoice::Salmon);
      return 0;
    } else if (choice == "scallops") {
      cout << "Scallops added" << endl;
      removeRestaurantByMenu(vRestaurants, MenuChoice::Scallops);
      removeItemsByPref(vRestaurants, MenuChoice::Scallops);
      return 0;
    } else if (choice == "shrimp") {
      cout << "Shrimp added" << endl;
      removeRestaurantByMenu(vRestaurants, MenuChoice::Shrimp);
      removeItemsByPref(vRestaurants, MenuChoice::Shrimp);
      return 0;
    } else if (choice == "tuna") {
      cout << "Tuna added" << endl;
      removeRestaurantByMenu(vRestaurants, MenuChoice::Tuna);
      removeItemsByPref(vRestaurants, MenuChoice::Tuna);
      return 0;
    } else if (choice == "all") {
      cout << "All Seafood added" << endl;
      removeRestaurantByMenu(vRestaurants, MenuChoice::Seafood);
      removeItemsByPref(vRestaurants, MenuChoice::Seafood);
      return 0;
    } else {
      throw "Invalid Response: Try Again"; //changed to throw for testing
    }
  }
  return 1; // 0 signals main to continue asking for food prefs
}

TEST(MockfoodSelector, testmockselectingSeafood) {
    MockVectorRestaurants mockRestaurants;
   
    // Test cases
    EXPECT_EQ(mockselectingSeafood(mockRestaurants, "back"), 1);
    EXPECT_EQ(mockselectingSeafood(mockRestaurants, "BACK"), 1); //have to call twice or else won't enter loop
    EXPECT_EQ(mockselectingSeafood(mockRestaurants, "crab"), 0); 
    EXPECT_EQ(mockselectingSeafood(mockRestaurants, "salmon"), 0);
    EXPECT_EQ(mockselectingSeafood(mockRestaurants, "scallops"), 0);
    EXPECT_EQ(mockselectingSeafood(mockRestaurants, "shrimp"), 0);
    EXPECT_EQ(mockselectingSeafood(mockRestaurants, "tuna"), 0);
    EXPECT_NE(mockselectingSeafood(mockRestaurants, "all"), 1);
    EXPECT_ANY_THROW(mockselectingSeafood(mockRestaurants, "abc"));
}

unsigned int mockselectingDishes(vectorRestaurants vRestaurants, string input) {
  string choice = input;
  while (choice != "back") {
    //choice = dishOptions(); // show dish options and pick
    transform(choice.begin(), choice.end(), choice.begin(),
              [](unsigned char c) { return std::tolower(c); });
    if (choice == "back") {
      cout << "Backing" << endl;
    } else if (choice == "bread") {
      cout << "Bread added" << endl;
      removeRestaurantByMenu(vRestaurants, MenuChoice::Bread);
      removeItemsByPref(vRestaurants, MenuChoice::Bread);
      return 0;
    } else if (choice == "fries") {
      cout << "Fries added" << endl;
      removeRestaurantByMenu(vRestaurants, MenuChoice::Fries);
      removeItemsByPref(vRestaurants, MenuChoice::Fries);
      return 0;
    } else if (choice == "noodles") {
      cout << "Noodles added" << endl;
      removeRestaurantByMenu(vRestaurants, MenuChoice::Noodles);
      removeItemsByPref(vRestaurants, MenuChoice::Noodles);
      return 0;
    } else if (choice == "rice") {
      cout << "Rice added" << endl;
      removeRestaurantByMenu(vRestaurants, MenuChoice::Rice);
      removeItemsByPref(vRestaurants, MenuChoice::Rice);
      return 0;
    } else {
      throw  "Invalid Response: Try Again"; //changed for testing purposes
    }
  }
  return 1; // 0 signals main to continue asking for food prefs
}
TEST(MockfoodSelector, testmockselectingDishes) {
    MockVectorRestaurants mockRestaurants;
   
    // Test cases
    EXPECT_EQ(mockselectingDishes(mockRestaurants, "back"), 1);
    EXPECT_EQ(mockselectingDishes(mockRestaurants, "BACK"), 1); //have to call twice or else won't enter loop
    EXPECT_EQ(mockselectingDishes(mockRestaurants, "bread"), 0); 
    EXPECT_EQ(mockselectingDishes(mockRestaurants, "fries"), 0);
    EXPECT_EQ(mockselectingDishes(mockRestaurants, "noodles"), 0);
    EXPECT_EQ(mockselectingDishes(mockRestaurants, "rice"), 0);
    EXPECT_ANY_THROW(mockselectingDishes(mockRestaurants, "abc"));
}

unsigned int mockselectingCuisine(vectorRestaurants vRestaurants, string input) {
  string choice = input;
  while (choice != "back") {
    //choice = cuisineOptions(); // show cuisine options and pick
    transform(choice.begin(), choice.end(), choice.begin(),
              [](unsigned char c) { return std::tolower(c); });
    if (choice == "back") {
      cout << "Backing" << endl;
    } else if (choice == "american") {
      cout << "American added" << endl;
      removeByCuisine(vRestaurants, Nationality::American);
      return 0;
    } else if (choice == "chinese") {
      cout << "Chinese added" << endl;
      removeByCuisine(vRestaurants, Nationality::Chinese);
      return 0;
    } else if (choice == "japanese") {
      cout << "Japanese added" << endl;
      removeByCuisine(vRestaurants, Nationality::Japanese);
      return 0;
    } else if (choice == "mediterranean") {
      cout << "Mediterranean added" << endl;
      removeByCuisine(vRestaurants, Nationality::Mediterranean);
      return 0;
    } else if (choice == "mexican") {
      cout << "Mexican added" << endl;
      removeByCuisine(vRestaurants, Nationality::Mexican);
      return 0;
    } else {
      throw "Invalid Response: Try Again" ;
    }
  }
  return 1; // 0 signals main to continue asking for food prefs
}

TEST(MockfoodSelector, testmockselectingCuisine) {
    MockVectorRestaurants mockRestaurants;
   
    // Test cases
    EXPECT_EQ(mockselectingCuisine(mockRestaurants, "back"), 1);
    EXPECT_EQ(mockselectingCuisine(mockRestaurants, "BACK"), 1); //have to call twice or else won't enter loop
    EXPECT_EQ(mockselectingCuisine(mockRestaurants, "american"), 0); 
    EXPECT_EQ(mockselectingCuisine(mockRestaurants, "chinese"), 0);
    EXPECT_EQ(mockselectingCuisine(mockRestaurants, "japanese"), 0);
    EXPECT_EQ(mockselectingCuisine(mockRestaurants, "mediterranean"), 0);
    EXPECT_EQ(mockselectingCuisine(mockRestaurants, "mexican"), 0);
    EXPECT_ANY_THROW(mockselectingCuisine(mockRestaurants, "abc"));
}

unsigned int mockselectingDairy(vectorRestaurants vRestaurants, string input) {
  string choice = input;
  while (choice != "back") {
    //choice = dairyOptions(); // show dairy options and pick
    transform(choice.begin(), choice.end(), choice.begin(),
              [](unsigned char c) { return std::tolower(c); });
    if (choice == "back") {
      cout << "Backing" << endl;
    } else if (choice == "cheese") {
      cout << "Cheese added" << endl;
      return 0;
      removeRestaurantByMenu(vRestaurants, MenuChoice::Cheese);
      removeItemsByPref(vRestaurants, MenuChoice::Cheese);
      return 0;
    } else if (choice == "milk") {
      cout << "Milk added" << endl;
      removeRestaurantByMenu(vRestaurants, MenuChoice::Milk);
      removeItemsByPref(vRestaurants, MenuChoice::Milk);
      return 0;
    } else {
      throw "Invalid Response: Try Again" ; //changed for testing purposes
    }
  }
  return 1; // 0 signals main to continue asking for food prefs
}

TEST(MockfoodSelector, testmockselectingDairy) {
    MockVectorRestaurants mockRestaurants;
   
    // Test cases
    EXPECT_EQ(mockselectingDairy(mockRestaurants, "back"), 1);
    EXPECT_EQ(mockselectingDairy(mockRestaurants, "BACK"), 1); //have to call twice or else won't enter loop
    EXPECT_EQ(mockselectingDairy(mockRestaurants, "cheese"), 0); 
    EXPECT_EQ(mockselectingDairy(mockRestaurants, "milk"), 0);
    EXPECT_ANY_THROW(mockselectingDairy(mockRestaurants, "abc"));
}

unsigned int mockselectingDrink(unsigned int diet,
                            vectorRestaurants vRestaurants, string input) {
  string choice = input;
  while (choice != "back") {
    //choice = drinkOptions(); // show drink options and pick
    transform(choice.begin(), choice.end(), choice.begin(),
              [](unsigned char c) { return std::tolower(c); });
    if (choice == "back") {
      cout << "Backing" << endl;
    } else if (choice == "coffee") {
      cout << "Coffee added" << endl;
      removeRestaurantByMenu(vRestaurants, MenuChoice::Coffee);
      removeItemsByPref(vRestaurants, MenuChoice::Coffee);
      if (diet == 4) {
        return 2;
      }
      return 0;

    } else if (choice == "fountain") {
      cout << "Fountain Drink added" << endl;
      return 0;
    } else if (choice == "tea") {
      cout << "Tea added" << endl;
      removeRestaurantByMenu(vRestaurants, MenuChoice::Tea);
      removeItemsByPref(vRestaurants, MenuChoice::Tea);
      return 0;
    } else {
      throw "Invalid Response: Try Again"; //changed for testing
    }
  }
  return 1; // 0 signals main to continue asking for food prefs
}

TEST(MockfoodSelector, testmockselectingDrink) {
    MockVectorRestaurants mockRestaurants;

    // Test cases
    EXPECT_EQ(mockselectingDrink(0, mockRestaurants, "back"), 1);
    EXPECT_EQ(mockselectingDrink(1, mockRestaurants, "BACK"), 1); //have to call twice or else won't enter loop
    EXPECT_EQ(mockselectingDrink(0, mockRestaurants, "coffee"), 0); 
    EXPECT_EQ(mockselectingDrink(4, mockRestaurants, "coffee"), 2);
    EXPECT_EQ(mockselectingDrink(1, mockRestaurants, "fountain"), 0);
    EXPECT_EQ(mockselectingDrink(0, mockRestaurants, "tea"), 0);
    EXPECT_NE(mockselectingDrink(4, mockRestaurants, "fountain"), 2);
    EXPECT_ANY_THROW(mockselectingDrink(1, mockRestaurants, "abc"));
}

void mockremoveRestaurantByMenu(vectorRestaurants vRestaurants, MenuChoice pref) {
  for (int i = vRestaurants.getRestaurants().size() - 1; i >= 0; i--) {
    bool found = false;
    Restaurant currentRestaurant = vRestaurants.getRestaurant(i);

    cout << currentRestaurant.getName() << endl;
    for (unsigned int j = 0; j < currentRestaurant.getMenu().size(); j++) {
      if (currentRestaurant.getMenu().at(j) == pref) {

        for (unsigned int j = 0; j < currentRestaurant.getMenuChoices().size();
             j++) {
          if (currentRestaurant.getMenuChoices().at(j) == pref) {
            found = true;
          }
        }
        if (found == false) {
          vRestaurants.getRestaurants().erase(
              vRestaurants.getRestaurants().begin() + i);
        }
      }
    }
  }
}
TEST(MockfoodRemove, testmockremoveRestaurantByMenu) {
    // Create a mock vectorRestaurants object
    MockVectorRestaurants mockRestaurants;
  //first test to check if BEEF is there
  bool beefFoundBeforeRemoval = false;
    for (int i = mockRestaurants.getRestaurants().size() - 1; i >= 0; i--) {
      Restaurant currentRestaurant = mockRestaurants.getRestaurant(i);
        for (const auto& menuChoice : currentRestaurant.getMenu()) {
            if (menuChoice == MenuChoice::Beef) {
                beefFoundBeforeRemoval = true;
                break;
            }
        }
        if (beefFoundBeforeRemoval) {
            break;
        }
    }
//remove beef
    mockremoveRestaurantByMenu(mockRestaurants, MenuChoice::Beef);
//check if beef has been removed
    bool beefFound = false;
    for (int i = mockRestaurants.getRestaurants().size() - 1; i >= 0; i--) {
      Restaurant currentRestaurant = mockRestaurants.getRestaurant(i);
        for (const auto& menuChoice : currentRestaurant.getMenu()) {
            if (menuChoice == MenuChoice::Beef) {
                beefFound = true;
                break;
            }
        }
        if (beefFound) {
            break;
        }
    }
    EXPECT_TRUE(beefFoundBeforeRemoval); 
    EXPECT_FALSE(beefFound); 
}


// functions to make: remove by cuisines, remove by allergy, removeItem
void mockremoveByCuisine(vectorRestaurants vRestaurants, Nationality pref) {
  for (int i = vRestaurants.getRestaurants().size() - 1; i >= 0; i--) {
    Restaurant cur = vRestaurants.getRestaurant(i);
    if (cur.getNationality() != pref) {
      vRestaurants.getRestaurants().erase(
          vRestaurants.getRestaurants().begin() + i);
    }
  }
}
TEST(MockfoodRemove, testmockremoveByCuisine) {
    // Create a mock vectorRestaurants object
    MockVectorRestaurants mockRestaurants;
  //check if america is inside nationalities
    bool AmericanFoundbefore = false;
    for (int i = mockRestaurants.getRestaurants().size() - 1; i >= 0; i--) {
      Restaurant currentRestaurant = mockRestaurants.getRestaurant(i);
        if (currentRestaurant.getNationality() == Nationality::American) {
              AmericanFoundbefore = true;
                break;
            }
    }
    //remove america
    mockremoveByCuisine(mockRestaurants, Nationality::American);
    //check if been removed
    bool AmericanFound = false;
    for (int i = mockRestaurants.getRestaurants().size() - 1; i >= 0; i--) {
      Restaurant currentRestaurant = mockRestaurants.getRestaurant(i);
        if (currentRestaurant.getNationality() == Nationality::American) {
              AmericanFound = true;
                break;
            }
    }
    EXPECT_TRUE(AmericanFoundbefore); 
    EXPECT_FALSE(AmericanFound); 
}


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
