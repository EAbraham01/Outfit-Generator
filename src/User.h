#ifndef USER_H
#define USER_H

#include <string>
#include <vector>
#include "ClothingItem.h"

/*
 User class represents the preferences set by the user so they could create their outfits.
 */
class User {
private:
    Style prefStyle;
    Color prefColor;
    std::string prefBrand;
    double budget;

public:
    User(Style prefStyle, Color prefColor, std::string prefBrand, double budget);

    Style getPrefStyle() const;
    Color getPrefColor() const;
    std::string getPrefBrand() const;
    std::string getPrefWeather() const;
    double getBudget() const;
    
    void setPrefStyle(Style style);
    void setPrefColor(Color color);
    void setPrefBrand(std::string& brand);
    //void setPrefWeather(std::string weather);
    void setBudget(double budget);
};

#endif

