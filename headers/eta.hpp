#include "place.hpp"
#include <iostream>
#include <string>
#include <vector>
using namespace std;
using std::vector;
#pragma once

class Eta {
public:
  Eta() {
    // non hub destinations are all closest starbucks locations
    // for ui, please provide the strings below as options for current locations
    // of user, and have them select one.
    vPlace.push_back(Place("hub", Location::HUB, 0));
    vPlace.push_back(Place("hub", Location::Chung, 7));
    vPlace.push_back(Place("lot30", Location::HUB, 12));
    vPlace.push_back(Place("lot30", Location::Chung, 21));
    vPlace.push_back(Place("ssc", Location::HUB, 12));
    vPlace.push_back(Place("ssc", Location::Chung, 7));
    vPlace.push_back(Place("mse", Location::HUB, 5));
    vPlace.push_back(Place("mse", Location::MSE, 0));
    vPlace.push_back(Place("src", Location::HUB, 11));
    vPlace.push_back(Place("src", Location::MSE, 8));
    vPlace.push_back(Place("nd", Location::HUB, 12));
    vPlace.push_back(Place("nd", Location::MSE, 8));
    vPlace.push_back(Place("bigsprings", Location::HUB, 14));
    vPlace.push_back(Place("bigsprings", Location::Glenmore, 5));
    vPlace.push_back(Place("winstonchung", Location::HUB, 9));
    vPlace.push_back(Place("winstonchung", Location::Chung, 0));
    vPlace.push_back(Place("orbachlibrary", Location::HUB, 9));
    vPlace.push_back(Place("orbachlibrary", Location::Chung, 0));
    vPlace.push_back(Place("sproul", Location::HUB, 5));
    vPlace.push_back(Place("sproul", Location::MSE, 13));
    vPlace.push_back(Place("dorms", Location::HUB, 14));
    vPlace.push_back(Place("dorms", Location::Chung, 6));
    vPlace.push_back(Place("riveralibrary", Location::HUB, 4));
    vPlace.push_back(Place("riveralibrary", Location::Chung, 7));
    vPlace.push_back(Place("entemologymuseum", Location::HUB, 10));
    vPlace.push_back(Place("entemologymuseum", Location::Chung, 10));
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
