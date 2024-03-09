#include "../headers/recommendation.hpp"

int main(){
    UserPreference test = UserPreference(MenuChoice::Beef, MenuChoice::Fries, MenuChoice::Bread);
    test.PrintMeals();
    return 0;
}