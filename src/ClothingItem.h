#ifndef CLOTHINGITEM_H
#define CLOTHINGITEM_H

#include <string>
#include <vector>

/*
 ClothingItem class which represents a component of an outfit, which includes style, color, price, and name.
 */

class ClothingItem{
private:
    string name;
    string style;
    string color;
    double price;
    string category;
    string brand;
    string weather;
    int ID;
public:
    ClothingItem(string name, string style, string color, double price, string category, string brand);
    string setName() const;
    string setStyle() const;
    string setColor() const;
    double setPrice() const;
    string setCategory() const;
    string setBrand() const;
    string setWeather() const;
    int setID() const;
    string getName() const;
    string getStyle() const;
    string getColor() const;
    double getPrice() const;
    string getCategory() const;
    string getBrand() const;
    string getWeather(); const;
    int getID(); const;
    void printItem() const;
}

#endif
