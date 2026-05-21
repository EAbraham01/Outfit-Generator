#ifndef CLOTHINGITEM_H
#define CLOTHINGITEM_H

#include <string>

/*
 ClothingItem class which represents a component of an outfit, which includes style, color, price, and name.
 */

 enum Style {
    Casual,
    Formal,
    Sporty,
    Streetwear,
    Vintage
};

enum Category {
    Top,
    Bottom,
    Shoes
};

enum Color {
    Red,
    Blue,
    Green,
    Yellow,
    Black,
    White,
    Gray,
    Brown,
    Pink,
    Purple,
    Orange
};

class ClothingItem{
private:
    std::string name;
    Style style;
    Color color;
    double price;
    Category category;
    std::string brand;
public:
    ClothingItem(const std::string& name, Style style, Color color, double price, Category category, const std::string& brand);
    std::string getName() const;
    Style getStyle() const;
    Color getColor() const;
    double getPrice() const;
    Category getCategory() const;
    std::string getBrand() const;
    std::string styleToString(Style style) const;
    std::string colorToString(Color color) const;
    std::string categoryToString(Category category) const;
    void printItem() const;
    bool operator==(const ClothingItem& other) const;
};

#endif
