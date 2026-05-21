#include "ClothingItem.h"
#include <iostream>

ClothingItem::ClothingItem(const std::string& name, Style style, Color color, double price, Category category, const std::string& brand) : name(name), style(style), color(color), price(price), category(category), brand(brand){};

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

std::string ClothingItem::styleToString(Style style) const{
    switch(style){
        case Casual: return "Casual";
        case Formal: return "Formal";
        case Sporty: return "Sporty";
        case Streetwear: return "Streetwear";
        case Vintage: return "Vintage";
        default: return "Unknown";
    }
}

std::string ClothingItem::colorToString(Color color) const{
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

std::string ClothingItem::categoryToString(Category category) const{
    switch(category){
        case Top: return "Top";
        case Bottom: return "Bottom";
        case Shoes: return "Shoes";
        default: return "Unknown";
    }
}

void ClothingItem::printItem() const{
    std::cout << "Clothing Item: " << std::endl;
    std::cout << "Name: " << name << std::endl;
    std::cout << "Style: " << styleToString(style) << std::endl;
    std::cout << "Color: " << colorToString(color) << std::endl;
    std::cout << "Category: " << categoryToString(category) << std::endl;
    std::cout << "Brand: " << brand << std::endl;
    std::cout << "Price: " << price << std::endl;
    
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
    if (price != other.price)
        return false;
    
    return true;
}
