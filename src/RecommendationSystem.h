#ifndef RECOMMENDATIONSYSTEM_H
#define RECOMMENDATIONSYSTEM_H

#include <string>
#include <vector>

/*
 RecommendationSystem class will help the user create outfits from user input.
 */
class Recipe {
private:
    Wardrobe& wardrobe;
    User& user;
    
    ClothingItem random(vector<ClothingItem>& items);
    

public:
    RecommendationSystem(Wardrobe& wardrobe, User& user);
    
    Outfit generateOutfit();
    Outfit generateByStyle();
    Outfit generateByWeather();
    Outfit generateByBudget();
    Outfit generateByColor();
    void displayOutfit(const Outfit& outfit);
};

#endif

