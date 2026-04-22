#ifndef WARDROBE_H
#define WARDROBE_H

#include <string>
#include <vector>

/*
 Wardrobe class holds all of the clothingitem objects.
 */

class Wardrobe {
private:
    vector <ClothingItem> items;

public:
    Wardrobe();
    void addItem(const ClothingItem& item);
    void removeItem(string name);
    vector<ClothingItem>> getItems();
    vector<ClothingItem>> getItemsbyCategory();
    vector<ClothingItem>> getItemsByBrand();
    vector<ClothingItem>> getItemsByStyle();
    vector<ClothingItem>> getItemsByBrand();
    vector<ClothingItem>> getItemsByWeather();
    vector<ClothingItem>> getItemsByColor();
    ClothingItem getRandomItem(string category);
    
};

#endif  

