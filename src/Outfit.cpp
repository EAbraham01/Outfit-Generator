#include "Outfit.h"
#include <iostream>

Outfit::Outfit() : top(nullptr), bottom(nullptr), shoes(nullptr), style(""){};

Outfit::Outfit(ClothingItem* t, ClothingItem* b, ClothingItem* s, std::string style) : top(t), bottom(b), style(style){};

void Outfit::setTop(ClothingItem* t){
    std::cout << "[Outfit::setTop] not yet implemented\n";
}
void Outfit::setBottom(ClothingItem* b){
    std::cout << "[Outfit::setBottom] not yet implemented\n";
}
void Outfit::setShoes(ClothingItem* s){
    std::cout << "[Outfit::setShoes] not yet implemented\n";
}
void Outfit::getTop() const{
    std::cout << "[Outfit::getTop] not yet implemented\n";
}
void Outfit::getBottom() const{
    std::cout << "[Outfit::getBottom] not yet implemented\n";
}
void Outfit::getShoes() const{
    std::cout << "[Outfit::getShoes] not yet implemented\n";
}
bool Outfit::complete() const{
    //TODO: Implement later
    return true;
}
bool Outfit::hasTop() const{
    //TODO: Implement later
    return true;
}
bool Outfit::hasBottom() const{
    //TODO: Implement later
    return true;
}
bool Outfit::hasShoes() const{
    //TODO: Implement later
    return true;
}
void Outfit::display() const{
    std::cout << "[Outfit::display] not yet implemented\n";
}
;

