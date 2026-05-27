#include "User.h"
#include <iostream>



User::User(Style prefStyle, Color prefColor, std::string prefBrand, double budget) : prefStyle(prefStyle), prefColor(prefColor), prefBrand(prefBrand), budget(budget){};

Style User::getPrefStyle() const{
    return prefStyle;
}
Color User::getPrefColor() const{
    return prefColor;
}
std::string User::getPrefBrand() const{
    return prefBrand;
}
double User::getBudget() const{
    return budget;
}
    
void User::setPrefStyle(Style style){
    prefStyle = style;
}
void User::setPrefColor(Color color){
    prefColor = color;
}
void User::setPrefBrand(std::string& brand){
    prefBrand = brand;
}
void User::setBudget(double budget){
    this->budget = budget;
}


