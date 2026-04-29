#include "User.h"
#include <iostream>



User::User(std::string prefStyle, std::string prefColor, std::string prefBrand, std::string prefWeather, double budget) : prefStyle(prefStyle), prefColor(prefColor), prefBrand(prefBrand), prefWeather(prefWeather), budget(budget){};

std::string User::getPrefStyle() const{
    //TODO: Implement later
    return "";
}
std::string User::getPrefColor() const{
    //TODO: Implement later
    return "";
}
std::string User::getPrefBrand() const{
    //TODO: Implement later
    return "";
}
std::string User::getPrefWeather() const{
    //TODO: Implement later
    return "";
}
std::string User::getBudget() const{
    //TODO: Implement later
    return "";
}
    
void User::setPrefStyle(std::string style){
    std::cout << "[User::setPrefStyle] not yet implemented\n";
}
void User::setPrefColor(std::string color){
    std::cout << "[User::setPrefColor] not yet implemented\n";
}
void User::setPrefBrand(std::string brand){
    std::cout << "[User::setPrefBrand] not yet implemented\n";
}
void User::setPrefWeather(std::string weather){
    std::cout << "[User::setPrefWeather] not yet implemented\n";
}
void User::setBudget(double budget){
    std::cout << "[User::setBudget] not yet implemented\n";
};


