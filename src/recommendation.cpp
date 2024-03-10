#include "../headers/recommendation.hpp"
using namespace std;

void UserPreference::PrintMeals() {
  cout << endl;
  vectorRestaurants restaurants;
  for (int i = 0; i < restaurants.getRestaurants().size(); ++i) {
    int count = 0;
    // loop scans for restaurants that meet user's preferences
    for (int j = 0; j < restaurants.getRestaurant(i).getMenu().size(); ++j) {
      if (restaurants.getRestaurant(i).getMenu().at(j) == pref1) {
        count = count + 1;
      } else if (restaurants.getRestaurant(i).getMenu().at(j) == pref2) {
        count = count + 1;
      } else if (restaurants.getRestaurant(i).getMenu().at(j) == pref3) {
        count = count + 1;
      }
    }
    // count = 3 means that the restaurant includes all preferences
    if (count == 3) {
      // loop scans to find all meals that matches users preferences and prints
      // them for non buffet restaurants
      if (!restaurants.getRestaurant(i).getMeal().empty()) {
        for (int k = 0; k < restaurants.getRestaurant(i).getMeal().size();
             ++k) {
          Restaurant rest = restaurants.getRestaurant(i);
          MenuItem meal = restaurants.getRestaurant(i).getMeal().at(k);
          PrintMealThatMatchPref(rest, meal);
        }
        if (CheckIfCoffeeOrTeaWanted()) {
          cout << endl
               << "***Prices/Calories for the Coffee/Tea are for the medium "
                  "sizes.***"
               << endl;
        }
        cout << endl << endl;
      }
      // buffet restaurants
      else {
        CheckIfCoffeeOrTeaWanted();
        // excludes buffet restaurants when wanting coffee or tea because buffet
        // restaurants dont have coffee or tea
        if (wantsCoffeeOrTea == false) {
          cout << "Recommendations from "
               << restaurants.getRestaurant(i).getName() << ": " << endl;
          if (restaurants.getRestaurant(i).getName() == "Panda Express") {
            PandaExpress panda;
            panda.PandaGreeter();
            cout << "Entrees:" << endl;
            for (int k = 0; k < panda.getEntree().size(); ++k) {
              Entree ent = panda.getEntree().at(k);
              PrintEntreeThatMatchPref(ent);
            }

            cout << "Sides:" << endl;
            for (int k = 0; k < panda.getSide().size(); ++k) {
              Side side = panda.getSide().at(k);
              PrintSideThatMatchPref(side);
            }
            if (preferredSide == false) {
              for (int k = 0; k < panda.getSide().size(); ++k) {
                includesMeal = true;
                cout << panda.getSide().at(k).getSideItemName() << endl;
              }
            }
            cout << endl;
          } else if (restaurants.getRestaurant(i).getName() == "Hibachi") {
            Hibachi hiba;
            hiba.HibaGreeter();
            cout << "Entrees:" << endl;
            for (int k = 0; k < hiba.getEntree().size(); ++k) {
              Entree ent = hiba.getEntree().at(k);
              PrintEntreeThatMatchPref(ent);
            }

            cout << "Sides:" << endl;
            for (int k = 0; k < hiba.getSide().size(); ++k) {
              Side side = hiba.getSide().at(k);
              PrintSideThatMatchPref(side);
            }
            if (preferredSide == false) {
              for (int k = 0; k < hiba.getSide().size(); ++k) {
                includesMeal = true;
                cout << hiba.getSide().at(k).getSideItemName() << endl;
              }
            }
            cout << endl;
          }
        }
      }
    }
  }
  if (includesMeal == false) { // no meal matches user's preferences
    cout << "There are no meals on campus that match your preferences :("
         << endl
         << endl;
  }
}

void UserPreference::PrintMealThatMatchPref(Restaurant rest, MenuItem item) {
  includesProtein = false;
  CheckIfProteinIncluded(item);
  if (item.getChoice1() == pref1) {
    if (item.getChoice2() == pref2) {
      if (item.getChoice3() == pref3) {
        includesMeal = true;
        cout << "Recommendation from " << rest.getName() << ": " << endl;
        cout << item.getItemName() << " Price: " << item.getItemCost()
             << ", Calories: " << item.getCalories() << endl
             << endl;
        if (includesProtein == true) {
          FixMenuItem(item);
        }
      }
    } else if (item.getChoice2() == pref3) {
      if (item.getChoice3() == pref2) {
        includesMeal = true;
        cout << "Recommendation from " << rest.getName() << ": " << endl;
        cout << item.getItemName() << " Price: " << item.getItemCost()
             << ", Calories: " << item.getCalories() << endl
             << endl;
        if (includesProtein == true) {
          FixMenuItem(item);
        }
      }
    }
  } else if (item.getChoice1() == pref2) {
    if (item.getChoice2() == pref1) {
      if (item.getChoice3() == pref3) {
        includesMeal = true;
        cout << "Recommendation from " << rest.getName() << ": " << endl;
        cout << item.getItemName() << " Price: " << item.getItemCost()
             << ", Calories: " << item.getCalories() << endl
             << endl;
        if (includesProtein == true) {
          FixMenuItem(item);
        }
      }
    } else if (item.getChoice2() == pref3) {
      if (item.getChoice3() == pref1) {
        includesMeal = true;
        cout << "Recommendation from " << rest.getName() << ": " << endl;
        cout << item.getItemName() << " Price: " << item.getItemCost()
             << ", Calories: " << item.getCalories() << endl
             << endl;
        if (includesProtein == true) {
          FixMenuItem(item);
        }
      }
    }
  } else if (item.getChoice1() == pref3) {
    if (item.getChoice2() == pref1) {
      if (item.getChoice3() == pref2) {
        includesMeal = true;
        cout << "Recommendation from " << rest.getName() << ": " << endl;
        cout << item.getItemName() << " Price: " << item.getItemCost()
             << ", Calories: " << item.getCalories() << endl
             << endl;
        if (includesProtein == true) {
          FixMenuItem(item);
        }
      }
    } else if (item.getChoice2() == pref2) {
      if (item.getChoice3() == pref1) {
        includesMeal = true;
        cout << "Recommendation from " << rest.getName() << ": " << endl;
        cout << item.getItemName() << " Price: " << item.getItemCost()
             << ", Calories: " << item.getCalories() << endl
             << endl;
        if (includesProtein == true) {
          FixMenuItem(item);
        }
      }
    }
  }
}

void UserPreference::CheckIfProteinIncluded(MenuItem &item) {
  if (item.getChoice1() == MenuChoice::Protein) {
    if (pref1 == MenuChoice::Beef) {
      item.ChangeChoice1(MenuChoice::Beef);
      includesProtein = true;
    } else if (pref1 == MenuChoice::Chicken) {
      item.ChangeChoice1(MenuChoice::Chicken);
      includesProtein = true;
    } else if (pref1 == MenuChoice::Pork) {
      item.ChangeChoice1(MenuChoice::Pork);
      includesProtein = true;
    }
  } else if (item.getChoice2() == MenuChoice::Protein) {
    if (pref2 == MenuChoice::Beef) {
      item.ChangeChoice1(MenuChoice::Beef);
      includesProtein = true;
    } else if (pref2 == MenuChoice::Chicken) {
      item.ChangeChoice1(MenuChoice::Chicken);
      includesProtein = true;
    } else if (pref2 == MenuChoice::Pork) {
      item.ChangeChoice1(MenuChoice::Pork);
      includesProtein = true;
    }
  } else if (item.getChoice3() == MenuChoice::Protein) {
    if (pref3 == MenuChoice::Beef) {
      item.ChangeChoice1(MenuChoice::Beef);
      includesProtein = true;
    } else if (pref3 == MenuChoice::Chicken) {
      item.ChangeChoice1(MenuChoice::Chicken);
      includesProtein = true;
    } else if (pref3 == MenuChoice::Pork) {
      item.ChangeChoice1(MenuChoice::Pork);
      includesProtein = true;
    }
  }
}

void UserPreference::FixMenuItem(MenuItem &item) {
  if (item.CheckIfChoice1Changed()) {
    item.FixChoice1();
  } else if (item.CheckIfChoice2Changed()) {
    item.FixChoice2();
  } else if (item.CheckIfChoice3Changed()) {
    item.FixChoice3();
  }
}

bool UserPreference::CheckIfCoffeeOrTeaWanted() {
  if (pref1 == MenuChoice::Coffee || pref1 == MenuChoice::Tea) {
    wantsCoffeeOrTea = true;
  }
  if (pref2 == MenuChoice::Coffee || pref2 == MenuChoice::Tea) {
    wantsCoffeeOrTea = true;
  }
  if (pref3 == MenuChoice::Coffee || pref2 == MenuChoice::Tea) {
    wantsCoffeeOrTea = true;
  }
  return wantsCoffeeOrTea;
}

void UserPreference::PrintEntreeThatMatchPref(Entree ent) {
  if (ent.getEntreeChoice() == pref1) {
    includesMeal = true;
    cout << ent.getEntreeItemName() << endl;
  } else if (ent.getEntreeChoice() == pref2) {
    includesMeal = true;
    cout << ent.getEntreeItemName() << endl;
  } else if (ent.getEntreeChoice() == pref3) {
    includesMeal = true;
    cout << ent.getEntreeItemName() << endl;
  }
}

void UserPreference::PrintSideThatMatchPref(Side sid) {
  if (sid.getSideChoice() == pref1) {
    includesMeal = true;
    HasPreferredSide();
    cout << sid.getSideItemName() << endl;
  } else if (sid.getSideChoice() == pref2) {
    includesMeal = true;
    HasPreferredSide();
    cout << sid.getSideItemName() << endl;
  } else if (sid.getSideChoice() == pref3) {
    includesMeal = true;
    HasPreferredSide();
    cout << sid.getSideItemName() << endl;
  }
}
