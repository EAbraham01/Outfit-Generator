#include "Wardrobe.h"
#include <iostream>
#include <stdexcept>


Wardrobe::Wardrobe(){}
void Wardrobe::addItem(const ClothingItem& item){
    items.push_back(item);
}
bool Wardrobe::removeItem(const ClothingItem& item){
    for(auto it = items.begin(); it != items.end(); ++it){
        if (*it == item){
            items.erase(it);
            return true;
        }
    }
    std::cout << "Item not found." << std::endl;
    return false;
}
const std::vector<ClothingItem>& Wardrobe::getItems() const{
    return items;
}
std::vector<ClothingItem> Wardrobe::getItemsByCategory(){
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
std::vector<ClothingItem> Wardrobe::getItemsByColor(){
    //TODO: Implement later
    return {};
}
ClothingItem Wardrobe::getRandomItem(Category category){
    //TODO: Implement later
    throw std::runtime_error("getRandomItem not implemented");
}

int Wardrobe::getItemCount() const{
    return items.size();
}

void Wardrobe::display() const {
    if (items.empty()){ 
        std::cout << "Your wardrobe is empty." << std::endl;
        return;
    }

    for (int i = 0; i < items.size(); i++){
        std::cout << "Item " << i + 1 << ":" << std::endl;
        items[i].printItem();
    }
}



