#include "ClothingItem.h"
#include <iostream>

ClothingItem::ClothingItem(std::string name, std::string style, std::string color, double price, std::string category, std::string brand) : name(name), style(style), color(color), price(price), category(category), brand(brand){};

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
std::string ClothingItem::getStyle() const{
    return style;
}
std::string ClothingItem::getColor() const{
    return color;
}
double ClothingItem::getPrice() const{
    return price;
}
std::string ClothingItem::getCategory() const{
    return category;
}
std::string ClothingItem::getBrand() const{
    return brand;
}
//string ClothingItem::getWeather(); const;
//int ClothingItem::getID() const;
void ClothingItem::printItem() const{
    std::cout << "Clothing Item: " << std::endl;
    std::cout << "Name: " << name << std::endl;
    std::cout << "Style: " << style << std::endl;
    std::cout << "Color: " << color << std::endl;
    std::cout << "Category: " << category << std::endl;
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
