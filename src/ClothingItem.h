#ifndef CLOTHINGITEM_H
#define CLOTHINGITEM_H



#include <string>
#include <vector>

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
    //string weather;
    //int ID;
public:
    ClothingItem(std::string name, Style style, Color color, double price, Category category, std::string brand);
    std::string getName() const;
    Style getStyle() const;
    Color getColor() const;
    double getPrice() const;
    Category getCategory() const;
    std::string getBrand() const;
    static std::string styleToString(Style style);
    static std::string colorToString(Color color);
    static std::string categoryToString(Category category);
    //string getWeather(); const;
    //int getID() const;
    void printItem() const;
    bool operator==(const ClothingItem& other) const;
};

#endif
