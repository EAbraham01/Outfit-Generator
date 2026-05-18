#include "Wardrobe.h"
#include <iostream>


Wardrobe::Wardrobe() : itemCount(0){};
void Wardrobe::addItem(const ClothingItem& item){
    items.push_back(item);
    itemCount++;
}
void Wardrobe::removeItem(const ClothingItem& item){
    for(auto it = items.begin(); it != items.end(); ++it){
        if (*it == item){
            items.erase(it);
            itemCount--;
            return;
        }
    }
    
}
std::vector<ClothingItem> Wardrobe::getItems(){
    return items;
}
std::vector<ClothingItem> Wardrobe::getItemsbyCategory(){
    //TODO: Implement later
    return {};
}
std::vector<ClothingItem> Wardrobe::getItemsByPrice(){
    //TODO: Implement later
    return {};
}
std::vector<ClothingItem> Wardrobe::getItemsByStyle(){
    //TODO: Implement later
    return {};
}
std::vector<ClothingItem> Wardrobe::getItemsByBrand(){
    //TODO: Implement later
    return {};
}
std::vector<ClothingItem> Wardrobe::getItemsByWeather(){
    //TODO: Implement later
    return {};
}
std::vector<ClothingItem> Wardrobe::getItemsByColor(){
    //TODO: Implement later
    return {};
}
ClothingItem Wardrobe::getRandomItem(std::string category){
    return ClothingItem("", Casual, Red, 0.0, Top, "");
}

int Wardrobe::getItemCount() const{
    return itemCount;
};



