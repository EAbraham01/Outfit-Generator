#include "ClothingItem.h"
#include <iostream>

ClothingItem::ClothingItem(std::string name, Style style, Color color, double price, Category category, std::string brand) : name(name), style(style), color(color), price(price), category(category), brand(brand){};

/*void ClothingItem::setName() const{
    std::cout << "[ClothingItem::setName] not yet implemented" << endl;
}
void ClothingItem::setStyle() const{
    std::cout << "[ClothingItem::setStyle] not yet implemented" << endl;
}
void ClothingItem::setColor() const{
    std::cout << "[ClothingItem::setColor] not yet implemented" << endl;
}
void ClothingItem::setPrice() const{
    std::cout << "[ClothingItem::setPrice] not yet implemented" << endl;
}
void ClothingItem::setCategory() const{
    std::cout << "[ClothingItem::setCategory] not yet implemented" << endl;
}
void ClothingItem::setBrand() const{
    std::cout << "[ClothingItem::setBrand] not yet implemented" << endl;
}
void ClothingItem::setWeather() const{
    std::cout << "[ClothingItem::setWeather] not yet implemented" << endl;
}
void ClothingItem::setID() const{
    std::cout << "[ClothingItem::setID] not yet implemented" << endl;
}*/
std::string ClothingItem::getName() const{
    return name;
}
Style ClothingItem::getStyle() const{
    return style;
}
Color ClothingItem::getColor() const{
    return color;
}
double ClothingItem::getPrice() const{
    return price;
}
Category ClothingItem::getCategory() const{
    return category;
}
std::string ClothingItem::getBrand() const{
    return brand;
}

std::string ClothingItem::styleToString(Style style){
    switch(style){
        case Casual: return "Casual";
        case Formal: return "Formal";
        case Sporty: return "Sporty";
        case Streetwear: return "Streetwear";
        case Vintage: return "Vintage";
        default: return "Unknown";
    }
}

std::string ClothingItem::colorToString(Color color){
    switch(color){
        case Red: return "Red";
        case Blue: return "Blue";
        case Green: return "Green";
        case Yellow: return "Yellow";
        case Black: return "Black";
        case White: return "White";
        case Gray: return "Gray";
        case Brown: return "Brown";
        case Pink: return "Pink";
        case Purple: return "Purple";
        case Orange: return "Orange";
        default: return "Unknown";
    }
}

std::string ClothingItem::categoryToString(Category category){
    switch(category){
        case Top: return "Top";
        case Bottom: return "Bottom";
        case Shoes: return "Shoes";
        default: return "Unknown";
    }
}


//string ClothingItem::getWeather(); const;
//int ClothingItem::getID() const;
void ClothingItem::printItem() const{
    std::cout << "Clothing Item: " << std::endl;
    std::cout << "Name: " << name << std::endl;
    std::cout << "Style: " << styleToString(style) << std::endl;
    std::cout << "Color: " << colorToString(color) << std::endl;
    std::cout << "Category: " << categoryToString(category) << std::endl;
    std::cout << "Brand: " << brand << std::endl;
    
}

bool ClothingItem::operator==(const ClothingItem& other) const{
    if (name != other.name)
        return false;
    if (style != other.style)
        return false;
    if (color != other.color)
        return false;
    if (category != other.category)
        return false;
    if (brand != other.brand)
        return false;
    
    return true;
}
