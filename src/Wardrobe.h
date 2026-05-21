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

public:
    Wardrobe();
    void addItem(const ClothingItem& item);
    bool removeItem(const ClothingItem& item);
    const std::vector<ClothingItem>& getItems() const;
    std::vector<ClothingItem> getItemsByCategory();
    std::vector<ClothingItem> getItemsByPrice();
    std::vector<ClothingItem> getItemsByStyle();
    std::vector<ClothingItem> getItemsByBrand();
    std::vector<ClothingItem> getItemsByColor();
    ClothingItem getRandomItem(Category category);
    int getItemCount() const;
    void display() const;
    
};

#endif  

