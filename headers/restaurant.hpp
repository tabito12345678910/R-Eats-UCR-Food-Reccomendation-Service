#include <iostream>
#include <vector>

enum class MenuChoice { Chicken, Steak, Vegetarian, Vegan };

enum class Nationality { Japanese, Chinese, American, Halal, Mexican };

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
  std::vector<MenuChoice> vChoices;
  std::vector<Nationality> vNation;
};

// NOTE  testing purposes
class SampleRestaurant : public Restaurant {
public:
  SampleRestaurant() {
    // You can hard code more values since it is a vector
    vChoices.push_Back(MenuChoice::Steak);
    vNation.push_back(Nationality::American);
  }
};
