#include "../headers/recommendation.hpp"
using namespace std;

void UserPreference::PrintMeals() {
  cout << endl;
  vectorRestaurants restaurants;
  for (int i = 0; i < restaurants.getRestaurants().size(); ++i) {
    int count = 0;
    Restaurant currRestaurant = restaurants.getRestaurant(i);
    // loop scans for restaurants that meet user's preferences
    for (int j = 0; j < currRestaurant.getMenu().size(); ++j) {
      auto menuChoice = currRestaurant.getMenu().at(j);
      if (menuChoice == pref1 || menuChoice == pref2 || menuChoice == pref3) {
        ++count;
      }
    }
    // count = 3 means that the restaurant includes all preferences
    if (count == 3) {
      // loop scans to find all meals that matches users preferences and prints
      // them for non buffet restaurants
      if (!currRestaurant.getMeal().empty()) {
        for (const auto &meal : currRestaurant.getMeal()) {
          PrintMealThatMatchPref(currRestaurant, meal);
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
        // excludes buffet restaurants when wanting coffee or tea because buffet
        // restaurants dont have coffee or tea
        if (CheckIfCoffeeOrTeaWanted() == false) {
          cout << "Recommendations from " << currRestaurant.getName() << ": "
               << endl;
          if (currRestaurant.getName() == "Panda Express") {
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
          } else if (currRestaurant.getName() == "Hibachi") {
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

// rewritting because redundant code
// If you missed a case, well, I got it
void UserPreference::PrintMealThatMatchPref(Restaurant rest, MenuItem item) {
  includesProtein = false;
  CheckIfProteinIncluded(item);

  // Adding preferences and choices into a vector to be sorted
  vector<MenuChoice> sortedPrefs = {pref1, pref2, pref3};
  vector<MenuChoice> sortedChoices = {item.getChoice1(), item.getChoice2(),
                                      item.getChoice3()};

  // Sorting the choices to make them equal to each other
  sort(sortedPrefs.begin(), sortedPrefs.end());
  sort(sortedChoices.begin(), sortedChoices.end());

  if (sortedPrefs == sortedChoices) {
    includesMeal = true;
    cout << "Recommendation from " << rest.getName() << ": " << endl;
    cout << item.getItemName() << " Price: " << item.getItemCost()
         << ", Calories: " << item.getCalories() << endl
         << endl;
    if (includesProtein) {
      FixMenuItem(item);
    }
  }
  /* else {
    // TEST  This code is for testing purposes
    cout << "Preference not found in" << rest.getName() << endl;
  } */
}

// Checks for the protein, then changes the preference to that protein
void UserPreference::CheckIfProteinIncluded(MenuItem &item) {
  if (item.getChoice1() == MenuChoice::Protein) {
    if (pref1 == MenuChoice::Beef || pref1 == MenuChoice::Chicken ||
        pref1 == MenuChoice::Pork) {
      item.ChangeChoice1(pref1);
      includesProtein = true;
      return;
    }
  }
  if (item.getChoice2() == MenuChoice::Protein) {
    if (pref2 == MenuChoice::Beef || pref2 == MenuChoice::Chicken ||
        pref2 == MenuChoice::Pork) {
      item.ChangeChoice2(pref2);
      includesProtein = true;
      return;
    }
  }
  if (item.getChoice3() == MenuChoice::Protein) {
    if (pref3 == MenuChoice::Beef || pref3 == MenuChoice::Chicken ||
        pref3 == MenuChoice::Pork) {
      item.ChangeChoice3(pref3);
      includesProtein = true;
      return;
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

// If the user wants a tea/coffe, returns true!
bool UserPreference::CheckIfCoffeeOrTeaWanted() {
  return pref1 == MenuChoice::Coffee || pref1 == MenuChoice::Tea ||
         pref2 == MenuChoice::Coffee || pref2 == MenuChoice::Tea ||
         pref3 == MenuChoice::Coffee || pref3 == MenuChoice::Tea;
}

void UserPreference::PrintEntreeThatMatchPref(Entree ent) {
  if (ent.getEntreeChoice() == pref1 || ent.getEntreeChoice() == pref2 ||
      ent.getEntreeChoice() == pref3) {
    includesMeal = true;
    cout << ent.getEntreeItemName() << endl;
  }
}

void UserPreference::PrintSideThatMatchPref(Side sid) {
  if (sid.getSideChoice() == pref1 || sid.getSideChoice() == pref2 ||
      sid.getSideChoice() == pref3) {
    includesMeal = true;
    HasPreferredSide();
    cout << sid.getSideItemName() << endl;
  }
}
