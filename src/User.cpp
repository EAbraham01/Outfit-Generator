#include "User.h"
#include <iostream>



User::User(Style prefStyle, Color prefColor, std::string prefBrand, double budget) : prefStyle(prefStyle), prefColor(prefColor), prefBrand(prefBrand), budget(budget){};

Style User::getPrefStyle() const{
    //TODO: Implement later
    return prefStyle;
}
Color User::getPrefColor() const{
    //TODO: Implement later
    return prefColor;
}
std::string User::getPrefBrand() const{
    //TODO: Implement later
    return "";
}
double User::getBudget() const{
    //TODO: Implement later
    return budget;
}
    
void User::setPrefStyle(Style style){
    std::cout << "[User::setPrefStyle] not yet implemented\n";
}
void User::setPrefColor(Color color){
    std::cout << "[User::setPrefColor] not yet implemented\n";
}
void User::setPrefBrand(std::string brand){
    std::cout << "[User::setPrefBrand] not yet implemented\n";
}
void User::setBudget(double budget){
    std::cout << "[User::setBudget] not yet implemented\n";
};


