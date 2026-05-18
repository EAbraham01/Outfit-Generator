#ifndef WARDROBE_H
#define WARDROBE_H

#include <string>
#include <vector>
#include "User.h"
#include "Outfit.h"

/*
 Wardrobe class holds all of the clothingitem objects.
 */

class Wardrobe {
private:
    std::vector <ClothingItem> items;
    int itemCount;

public:
    Wardrobe();
    void addItem(const ClothingItem& item);
    void removeItem(const ClothingItem& item);
    std::vector<ClothingItem> getItems();
    std::vector<ClothingItem> getItemsbyCategory();
    std::vector<ClothingItem> getItemsByPrice();
    std::vector<ClothingItem> getItemsByStyle();
    std::vector<ClothingItem> getItemsByBrand();
    std::vector<ClothingItem> getItemsByWeather();
    std::vector<ClothingItem> getItemsByColor();
    ClothingItem getRandomItem(Category category);
    int getItemCount() const;
    std::string display() const;
    
};

#endif  

