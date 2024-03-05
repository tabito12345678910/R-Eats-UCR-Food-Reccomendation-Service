#include "../headers/restaurants.hpp"
#include "../headers/menu.hpp"
#include <iostream>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main() {
  unsigned int track = 0;
  unsigned int diet = dietarySelect();
  while(track == 0) {
    track = menuSelect(diet);
  }
  if (track == 2) {
    return 0; //quit the program nothing occurs
  } else if (track > 2) {
    return -1; //any other number is faulty 
  }
  cout << "Program done. Display Resturant Options" << endl;
  
  return 0;
}