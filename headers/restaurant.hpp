#include <iostream>
#include <vector>

enum class MenuChoice { Chicken, Steak, Vegetarian, Vegan };

enum class Nationality { Japanese, Chinese, American, Halal, Mexican };

enum class Location {
  Hub,
  UniversityVillage,
  Glenmore,
  BetweenOrbachAndCollegeOfMedicine
};

// virtual class
class Restaurant {
public:
  virtual ~Restaurant() {}

  virtual void addMenuChoice(MenuChoice choice) {
    MenuChoice.push_back(choice);
  }

  virtual const std::vector<MenuChoice> &getMenuChoices() const {
    return vChoices;
  }

protected:
  // These are vectors as of now, probably change it to strings or plain enums
  // This visually makes the code look clean
  std::vector<MenuChoice> vChoices;
  std::vector<Nationality> vNation;
  std::vector<Location> vLocation;
  /* Location vLocation; // plain enum, keeping the v for namesake */
};

// NOTE  testing purposes
class SampleRestaurant : public Restaurant {
public:
  SampleRestaurant() {
    // You can hard code more values since it is a vector
    vChoices.push_Back(MenuChoice::Steak);
    vNation.push_back(Nationality::American);
    vLocation.push_back(Location::Hub);
  }
};
