// For takeout restaurants like PandaExpress / Hibachi
class buffetRestaurant : public Restaurant {
  void greeter() {
    // Will display the dollar sign values for
    std::cout << name << " Menu\n"
              << std::fixed << std::showpoint << std::setprecision(2)
              << "Prices: Small(1 entree & 1 side): $" << priceS
              << " Medium (2 entree & 1 side): $" << priceM
              << "\nLarge(3 entree & 1 side): $" << priceL << std::endl;
  }

protected:
  std::double priceS, priceM, priceL;
  std::vector <
      //};
      std::vector<std::string, std::double, std::int>
          vMenu;      // name, price, calories
  Location vLocation; // plain enum, keeping the v for namesake
};

// For takeout restaurants like PandaExpress / Hibachi
class buffetRestaurant : public Restaurant {
  void greeter() {
    // Will display the dollar sign values for
    std::cout << name << " Menu\n"
              << std::fixed << std::showpoint << std::setprecision(2)
              << "Prices: Small(1 entree & 1 side): $" << priceS
              << " Medium (2 entree & 1 side): $" << priceM
              << "\nLarge(3 entree & 1 side): $" << priceL << std::endl;
  }

protected:
  // TODO  Do we really need the price of a drink?
  //    You come for the food, and the price of a drink is second thought
  //    Due to microeconomics and inelastic demand for a drink
  //    Also, removes clutter!
  std::double priceS, priceM, priceL, priceSDrink, priceMDrink,
      priceLDrink; // added drinks

  // NOTE  Man, I was going to make a vector here, but i forgot what...
  /* std::vector < */
};
