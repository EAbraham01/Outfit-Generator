#ifndef CLOTHINGITEM_H
#define CLOTHINGITEM_H



#include <string>
#include <vector>

/*
 ClothingItem class which represents a component of an outfit, which includes style, color, price, and name.
 */

class ClothingItem{
private:
    std::string name;
    std::string style;
    std::string color;
    double price;
    std::string category;
    std::string brand;
    //string weather;
    //int ID;
public:
    ClothingItem(std::string name, std::string style, std::string color, double price, std::string category, std::string brand);
    //string setName(string name) const;
    //string setStyle(string ) const;
    //string setColor() const;
    //double setPrice() const;
    //string setCategory() const;
    //string setBrand() const;
    //string setWeather() const;
    //int setID() const;
    std::string getName() const;
    std::string getStyle() const;
    std::string getColor() const;
    double getPrice() const;
    std::string getCategory() const;
    std::string getBrand() const;
    //string getWeather(); const;
    //int getID() const;
    void printItem() const;
    bool operator==(const ClothingItem& other) const;
};

#endif
