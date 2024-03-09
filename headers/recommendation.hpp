#ifndef RECOMMENDATION_HPP
#define RECOMMENDATION_HPP
#include "restaurants.hpp"
#include "vRestaurants.hpp" 

#include <iostream>
#include <vector>
#include <string>
using namespace std;

class UserPreference { 
    private:
        //user preferences
        MenuChoice pref1;
        MenuChoice pref2;
        MenuChoice pref3;
        //check if campus has meal that matches preference
        bool includesMeal = false;
    public:
        //constructor
        UserPreference(MenuChoice p1, MenuChoice p2, MenuChoice p3): pref1(p1), pref2(p2), pref3(p3){}
        //get preference
        MenuChoice getPref1(){return pref1;}
        MenuChoice getPref2(){return pref2;}
        MenuChoice getPref3(){return pref3;}
        void PrintMeals();

};



#endif

