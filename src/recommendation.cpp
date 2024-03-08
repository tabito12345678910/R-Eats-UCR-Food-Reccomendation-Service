#include "../headers/recommendation.hpp"


vector<Restaurant> UserPreference::RestaurantsThatIncludePreferences(){
    vectorRestaurants restaurants;
    vector<Restaurant> vIncludesPreference;
        for(int i = 0; i<restaurants.getRestaurants().size(); ++i){
            int count = 0;
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
            if(count == 3){
                vIncludesPreference.push_back(restaurants.getRestaurant(i));
                includesMeal = true;
            }
        }

    return vIncludesPreference;
}


void UserPreference::printMeals(vector<Restaurant> vIncludesPref){
    if(includesMeal == false){
        cout<<"No Restaurant on Campus has meals that match your "<<endl;
    }
    else{
        
    }
}


