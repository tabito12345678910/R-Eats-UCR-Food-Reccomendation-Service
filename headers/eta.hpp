#include "place.hpp"
#include <iostream>
#include <string>
#include <vector>
using namespace std;
using std::vector;

class Eta {
public:
  Eta() {
    // non hub destinations are all closest starbucks locations
    // for ui, please provide the strings below as options for current locations
    // of user, and have them select one.
    vPlace.push_back(Place("Hub", Location::HUB, 0));
    vPlace.push_back(Place("Hub", Location::Chung, 7));
    vPlace.push_back(Place("Lot30", Location::HUB, 12));
    vPlace.push_back(Place("Lot30", Location::Chung, 21));
    vPlace.push_back(Place("SSC", Location::HUB, 12));
    vPlace.push_back(Place("SSC", Location::Chung, 7));
    vPlace.push_back(Place("MSE", Location::HUB, 5));
    vPlace.push_back(Place("MSE", Location::MSE, 0));
    vPlace.push_back(Place("SRC", Location::HUB, 11));
    vPlace.push_back(Place("SRC", Location::MSE, 8));
    vPlace.push_back(Place("ND", Location::HUB, 12));
    vPlace.push_back(Place("ND", Location::MSE, 8));
    vPlace.push_back(Place("BigSprings", Location::HUB, 14));
    vPlace.push_back(Place("BigSprings", Location::Glenmore, 5));
    vPlace.push_back(Place("WinstonChung", Location::HUB, 9));
    vPlace.push_back(Place("WinstonChung", Location::Chung, 0));
    vPlace.push_back(Place("OrbachLibrary", Location::HUB, 9));
    vPlace.push_back(Place("OrbachLibrary", Location::Chung, 0));
    vPlace.push_back(Place("Sproul", Location::HUB, 5));
    vPlace.push_back(Place("Sproul", Location::MSE, 13));
    vPlace.push_back(Place("Dorms", Location::HUB, 14));
    vPlace.push_back(Place("Dorms", Location::Chung, 6));
    vPlace.push_back(Place("RiveraLibrary", Location::HUB, 4));
    vPlace.push_back(Place("RiverraLibrary", Location::Chung, 7));
    vPlace.push_back(Place("EntemologyMuseum", Location::HUB, 10));
    vPlace.push_back(Place("EntemologyMuseum", Location::Chung, 10));
  }

  vector<Place> getVPlace() { return vPlace; }

  int getEta(string from,
             Location to) { // from should be a user input and to should be the
                            // location of the recommended restaurant
    vector<Place> EtaToRecommended = getVPlace();
    for (unsigned int i = 0; i < EtaToRecommended.size(); ++i) {
      if (from == EtaToRecommended.at(i).getFrom() &&
          to == EtaToRecommended.at(i).getTo()) {
        return EtaToRecommended.at(i).getMinutes();
      }
    }
    return -1; // error if returns -1
  }

private:
  vector<Place> vPlace;
};
