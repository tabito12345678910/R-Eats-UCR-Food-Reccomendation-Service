#include "menuItem.hpp"
#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Place {
private:
  string from; // location user is in currently
  Location to; // location the program is recommending user to go to
  int minutes; // How many minutes it takes for user to get from current
               // location to recommended restaurant by walk
public:
  Place(string f, Location t, int m) : from(f), to(t), minutes(m) {}
  string getFrom() { return from; }
  Location getTo() { return to; }
  int getMinutes() { return minutes; }
};
