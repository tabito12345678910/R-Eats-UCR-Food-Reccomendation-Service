#include "../headers/recommendation.hpp"

int main() {
  UserPreference test =
      UserPreference(MenuChoice::Beef, MenuChoice::Shrimp, MenuChoice::Rice);
  test.PrintMeals();
  return 0;
}
