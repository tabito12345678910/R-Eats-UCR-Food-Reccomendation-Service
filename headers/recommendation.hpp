#ifndef RECOMMENDATION_HPP
#define RECOMMENDATION_HPP
#include "restaurants.hpp"
#include "vRestaurants.hpp"
#include <iostream>
#include <string>
#include <vector>
using namespace std;

class UserPreference {
private:
  // user preferences
  MenuChoice pref1;
  MenuChoice pref2;
  MenuChoice pref3;
  // check if campus has meal that matches preference
  bool includesMeal = false;
  bool includesProtein = false;
  /* bool wantsCoffeeOrTea = false; */
  bool preferredSide = false;

public:
  // constructor
  UserPreference();
  UserPreference(MenuChoice p1, MenuChoice p2, MenuChoice p3)
      : pref1(p1), pref2(p2), pref3(p3) {}
  // get preference
  MenuChoice getPref1() { return pref1; }
  MenuChoice getPref2() { return pref2; }
  MenuChoice getPref3() { return pref3; }
  // set preference
  void setPref1(MenuChoice pr1) { pref1 = pr1; }
  void setPref2(MenuChoice pr2) { pref2 = pr2; }
  void setPref3(MenuChoice pr3) { pref3 = pr3; }
  void PrintMeals();
  void CheckIfProteinIncluded(MenuItem &item);
  bool CheckIfCoffeeOrTeaWanted();
  void HasPreferredSide() { preferredSide = true; }
  void PrintMealThatMatchPref(Restaurant rest, MenuItem item);
  void PrintEntreeThatMatchPref(Entree ent);
  void PrintSideThatMatchPref(Side sid);
  void FixMenuItem(MenuItem &item);
};

#endif
