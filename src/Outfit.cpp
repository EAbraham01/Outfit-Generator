#include "Outfit.h"
#include <iostream>

Outfit::Outfit() : top(nullptr), bottom(nullptr), shoes(nullptr), style(Casual){};

Outfit::Outfit(ClothingItem* t, ClothingItem* b, ClothingItem* s, Style style) : top(t), bottom(b), shoes(s), style(style){};

void Outfit::setTop(ClothingItem* t){
    top = t;
}
void Outfit::setBottom(ClothingItem* b){
   bottom = b;
}
void Outfit::setShoes(ClothingItem* s){
    shoes = s;
}
ClothingItem* Outfit::getTop() const{
    return top;
}
ClothingItem* Outfit::getBottom() const{
    return bottom;
}
ClothingItem* Outfit::getShoes() const{
    return shoes;
}
bool Outfit::complete() const{
    //TODO: Implement later
    return (hasTop() && hasBottom() && hasShoes());
}
bool Outfit::hasTop() const{
    //TODO: Implement later
    return top != nullptr;
}
bool Outfit::hasBottom() const{
    //TODO: Implement later
    return bottom != nullptr;
}
bool Outfit::hasShoes() const{
    //TODO: Implement later
    return shoes != nullptr;
}
void Outfit::display() const{
    if(!complete()){
        std::cout << "The outfit is incomplete." << std::endl;
        return;
    }
    std::cout << "----Your Outfit----" << std::endl;
    std::cout << "Top: " << std::endl;
    top->printItem();
    std::cout << "Bottom: " << std::endl;
    bottom->printItem();
    std::cout << "Shoes: " << std::endl;
    shoes->printItem();
}
;

