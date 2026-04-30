#ifndef USER_H
#define USER_H

#include <string>
#include <vector>

/*
 User class represents the preferences set by the user so they could create their outfits.
 */
class User {
private:
    std::string prefStyle;
    std::string prefColor;
    std::string prefBrand;
    std::string prefWeather;
    double budget;

public:
    User(std::string prefStyle, std::string prefColor, std::string prefBrand, std::string prefWeather, double budget);

    std::string getPrefStyle() const;
    std::string getPrefColor() const;
    std::string getPrefBrand() const;
    std::string getPrefWeather() const;
    std::string getBudget() const;
    
    void setPrefStyle(std::string style);
    void setPrefColor(std::string color);
    void setPrefBrand(std::string brand);
    void setPrefWeather(std::string weather);
    void setBudget(double budget);
};

#endif

