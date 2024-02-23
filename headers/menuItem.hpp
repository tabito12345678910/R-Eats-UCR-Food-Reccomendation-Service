
// THe file of all the anumeration classes
enum class MenuChoice {
  Chicken,
  Beef,
  Pork,
  Turkey,
  Vegetarian,
  Vegan,
  Vegetables,
  Salad,
  Mushrooms, // Portabella slaps
  Fries,
  Rice,
  Noodles, // added for chowmein
  Burger,
  Sandwich,
  Shrimp,
  Tuna, // added seafood can be allergens
  Salmon,
  Scallops,
  Crab,
  Burritos, // added broad mexican dishes
  Tacos,
  Dessert
};

enum class Nationality { Japanese, Chinese, American, Halal, Mexican };

enum class Location {
  HUB,
  UniversityVillage,
  Glenmore,
  Orbach,
  Chung,
  EastCampus,
  MSE
};

enum class Beverages { Coffee, Tea, SodaFountain };

// virtual class
struct MenuItem {
  std::string itemName;
  double itemCost;
};
