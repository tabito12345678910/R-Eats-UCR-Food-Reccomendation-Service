#include "../headers/recommendation.hpp"

<<<<<<< HEAD
void UserPreference::PrintMeals(){
    vectorRestaurants restaurants;
    for(int i = 0; i<restaurants.getRestaurants().size(); ++i){
        int count = 0;
        //loop scans for restaurants that meet user's preferences
        for(int j = 0; j<restaurants.getRestaurant(i).getMenu().size(); ++j){
            if(restaurants.getRestaurant(i).getMenu().at(j)==pref1){
                count = count + 1;
            }
            else if(restaurants.getRestaurant(i).getMenu().at(j)==pref2){
                count = count + 1;
            }
            else if(restaurants.getRestaurant(i).getMenu().at(j)==pref3){
                count = count + 1;
            }
        }
        //count = 3 means that the restaurant includes all preferences
        if(count == 3){
            includesMeal = true;
            cout<<"Recommendations from "<<restaurants.getRestaurant(i).getName()<<": "<<endl;
            //loop scans to find all meals that matches users preferences and prints them
            if(!(restaurants.getRestaurant(i).getMeal().empty())){
                for(int k = 0; k<restaurants.getRestaurant(i).getMeal().size(); ++k){
                    if(restaurants.getRestaurant(i).getMeal().at(k).getChoice1()==pref1){
                        if(restaurants.getRestaurant(i).getMeal().at(k).getChoice2()==pref2){
                            if(restaurants.getRestaurant(i).getMeal().at(k).getChoice3()==pref3){
                                MenuItem meal = restaurants.getRestaurant(i).getMeal().at(k);
                                cout<<meal.getItemName()<<" Price: "<<meal.getItemCost()<<" Calories: "<<meal.getCalories()<<endl;
                            }
                        }
                        else if(restaurants.getRestaurant(i).getMeal().at(k).getChoice2()==pref3){
                            if(restaurants.getRestaurant(i).getMeal().at(k).getChoice3()==pref2){
                                MenuItem meal = restaurants.getRestaurant(i).getMeal().at(k);
                                cout<<meal.getItemName()<<" Price: "<<meal.getItemCost()<<" Calories: "<<meal.getCalories()<<endl;
                            }
                        }
                    }
                    else if(restaurants.getRestaurant(i).getMeal().at(k).getChoice1()==pref2){
                        if(restaurants.getRestaurant(i).getMeal().at(k).getChoice2()==pref1){
                            if(restaurants.getRestaurant(i).getMeal().at(k).getChoice3()==pref3){
                                MenuItem meal = restaurants.getRestaurant(i).getMeal().at(k);
                                cout<<meal.getItemName()<<" Price: "<<meal.getItemCost()<<" Calories: "<<meal.getCalories()<<endl;
                            }
                        }
                        else if(restaurants.getRestaurant(i).getMeal().at(k).getChoice2()==pref3){
                            if(restaurants.getRestaurant(i).getMeal().at(k).getChoice3()==pref1){
                                MenuItem meal = restaurants.getRestaurant(i).getMeal().at(k);
                                cout<<meal.getItemName()<<" Price: "<<meal.getItemCost()<<" Calories: "<<meal.getCalories()<<endl;
                            }
                        }
                    }
                    else if(restaurants.getRestaurant(i).getMeal().at(k).getChoice1()==pref3){
                        if(restaurants.getRestaurant(i).getMeal().at(k).getChoice2()==pref1){
                            if(restaurants.getRestaurant(i).getMeal().at(k).getChoice3()==pref2){
                                MenuItem meal = restaurants.getRestaurant(i).getMeal().at(k);
                                cout<<meal.getItemName()<<" Price: "<<meal.getItemCost()<<" Calories: "<<meal.getCalories()<<endl;
                            }
                        }
                        else if(restaurants.getRestaurant(i).getMeal().at(k).getChoice2()==pref2){
                            if(restaurants.getRestaurant(i).getMeal().at(k).getChoice3()==pref1){
                                MenuItem meal = restaurants.getRestaurant(i).getMeal().at(k);
                                cout<<meal.getItemName()<<" Price: "<<meal.getItemCost()<<" Calories: "<<meal.getCalories()<<endl;
                            }
                        }
                    }
                }
            }
            //buffet restaurants
            else{
                if(restaurants.getRestaurant(i).getName() == "Panda Express"){
                    PandaExpress panda;
                    panda.PandaGreeter();
                    cout<<"Entrees:"<<endl;
                    for(int k = 0; k<panda.getEntree().size(); ++k){
                        if(panda.getEntree().at(k).getEntreeChoice() == pref1){
                            cout<<panda.getEntree().at(k).getEntreeItemName()<<endl;
                        }
                        else if(panda.getEntree().at(k).getEntreeChoice() == pref2){
                            cout<<panda.getEntree().at(k).getEntreeItemName()<<endl;
                        }
                        else if(panda.getEntree().at(k).getEntreeChoice() == pref3){
                            cout<<panda.getEntree().at(k).getEntreeItemName()<<endl;
                        }
                    }
                    cout<<"Sides:"<<endl;
                    bool preferredSide = false;
                    for(int k = 0; k<panda.getSide().size(); ++k){
                        if(panda.getSide().at(k).getSideChoice() == pref1){
                            preferredSide = true;
                            cout<<panda.getSide().at(k).getSideItemName()<<endl;
                        }
                        else if(panda.getSide().at(k).getSideChoice() == pref2){
                            preferredSide = true;
                            cout<<panda.getSide().at(k).getSideItemName()<<endl;
                        }
                        else if(panda.getSide().at(k).getSideChoice() == pref3){
                            preferredSide = true;
                            cout<<panda.getSide().at(k).getSideItemName()<<endl;
                        }
                    }
                    if(preferredSide == false){
                        for(int k = 0; k<panda.getSide().size(); ++k){
                            cout<<panda.getSide().at(k).getSideItemName()<<endl;
                        }
                    }
                }
                else if(restaurants.getRestaurant(i).getName() == "Hibachi"){
                    Hibachi hiba;
                    hiba.HibaGreeter();
                    for(int k = 0; k<hiba.getEntree().size(); ++k){
                        if(hiba.getEntree().at(k).getEntreeChoice() == pref1){
                            cout<<hiba.getEntree().at(k).getEntreeItemName()<<endl;
                        }
                        else if(hiba.getEntree().at(k).getEntreeChoice() == pref2){
                            cout<<hiba.getEntree().at(k).getEntreeItemName()<<endl;
                        }
                        else if(hiba.getEntree().at(k).getEntreeChoice() == pref3){
                            cout<<hiba.getEntree().at(k).getEntreeItemName()<<endl;
                        }
                    }
                    cout<<"Sides:"<<endl;
                    bool preferredSide = false;
                    for(int k = 0; k<hiba.getSide().size(); ++k){
                        if(hiba.getSide().at(k).getSideChoice() == pref1){
                            preferredSide = true;
                            cout<<hiba.getSide().at(k).getSideItemName()<<endl;
                        }
                        else if(hiba.getSide().at(k).getSideChoice() == pref2){
                            preferredSide = true;
                            cout<<hiba.getSide().at(k).getSideItemName()<<endl;
                        }
                        else if(hiba.getSide().at(k).getSideChoice() == pref3){
                            preferredSide = true;
                            cout<<hiba.getSide().at(k).getSideItemName()<<endl;
                        }
                    }
                    if(preferredSide == false){
                        for(int k = 0; k<hiba.getSide().size(); ++k){
                            cout<<hiba.getSide().at(k).getSideItemName()<<endl;
                        }
                    }   
                }
            }  
        }
    }
    if(includesMeal==false){
        cout<<"There are no meals on campus that match your preferences :("<<endl;
    }
}




=======
vector<Restaurant> UserPreference::RestaurantsThatIncludePreferences() {
  vectorRestaurants restaurants;
  vector<Restaurant> vIncludesPreference;
  for (int i = 0; i < restaurants.getRestaurants().size(); ++i) {
    int count = 0;
    for (int j = 0; j < restaurants.getRestaurant(i).getMenu().size(); ++j) {
      if (restaurants.getRestaurant(i).getMenu().at(j) == pref1) {
        count = count + 1;
      } else if (restaurants.getRestaurant(i).getMenu().at(j) == pref2) {
        count = count + 1;
      } else if (restaurants.getRestaurant(i).getMenu().at(j) == pref3) {
        count = count + 1;
      }
    }
    if (count == 3) {
      vIncludesPreference.push_back(restaurants.getRestaurant(i));
      includesMeal = true;
    }
  }

  return vIncludesPreference;
}

void UserPreference::printMeals(vector<Restaurant> vIncludesPref) {
  if (includesMeal == false) {
    cout << "No Restaurant on Campus has meals that match your " << endl;
  } else {
  }
}
>>>>>>> refs/remotes/origin/tsaka014/algo
