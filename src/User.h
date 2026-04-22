#ifndef USER_H
#define USER_H

#include <string>
#include <vector>

/*
 User class represents the preferences set by the user so they could create their outfits.
 */
class User {
private:
    string prefStyle;
    string prefColor;
    string prefBrand;
    string prefWeather;
    double budget;

public:
    User(string prefStyle, string prefColor, string prefBrand, string prefWeather, double budget);

    string getPrefStyle();
    string getPrefColor();
    string getPrefBrand();
    string getPrefWeather();
    string getBudget();
    
    void setPrefStyle(string style);
    void setPrefColor(string color);
    void setPrefBrand(string brand);
    void setPrefWeather(string weather);
    void setBudget(double budget);
};

#endif

