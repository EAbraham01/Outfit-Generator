#include "RecommendationSystem.h"
#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>



RecommendationSystem::RecommendationSystem(Wardrobe& w, User& u) : wardrobe(w), user(u){};
    
Outfit RecommendationSystem::generateOutfit(){
    std::vector<ClothingItem> tops, bottoms, shoes;
    Style prefStyle = user.getPrefStyle();
    double budget = user.getBudget();

    std::ifstream file("data/clothing_items.csv");
    if(!file.is_open()){
        std::cout << "Error: could not open file." << std::endl;
        return Outfit();
    }

    std::string line;
    std::getline(file, line);

    while (std::getline(file, line)){
        std::stringstream ss(line);
        std::string name, styleStr, colorStr, priceStr, categoryStr, brand;

        std::getline(ss, name, ',');
        std::getline(ss, styleStr, ',');
        std::getline(ss, colorStr, ',');
        std::getline(ss, priceStr, ',');
        std::getline(ss, categoryStr, ',');
        std::getline(ss, brand, ',');

        Style style = Casual;
        if (styleStr == "Formal") 
            style = Formal;
        else if (styleStr == "Sporty")
            style = Sporty;
        else if (styleStr == "Streetwear")
            style = Streetwear;
        else if (styleStr == "Vintage")
            style = Vintage;    

        if (style != prefStyle) continue;

        Color color = Black;
        if (colorStr == "White")
            color = White;
        else if (colorStr == "Blue")
            color = Blue;
        else if (colorStr == "Green")
            color = Green;
        else if (colorStr == "Yellow")
            color = Yellow;
        else if (colorStr == "Red")
            color = Red;
        else if (colorStr == "Gray")
            color = Gray;
        else if (colorStr == "Brown")
            color = Brown;
        else if (colorStr == "Pink")
            color = Pink;
        else if (colorStr == "Purple")
            color = Purple;
        else if (colorStr == "Orange")
            color = Orange;

        double price = std::stod(priceStr);

        if (categoryStr == "Top") {
            ClothingItem item(name, style, color, price, Top, brand);
            tops.push_back(item);
        }
        else if (categoryStr == "Bottom") {
            ClothingItem item(name, style, color, price, Bottom, brand);
            bottoms.push_back(item);
        }
        else if (categoryStr == "Shoes") {
            ClothingItem item(name, style, color, price, Shoes, brand);
            shoes.push_back(item);
        }
        
    }

    for (ClothingItem& t : tops){
        for (ClothingItem& b : bottoms){
            for (ClothingItem& s : shoes){
                if (t.getPrice() + b.getPrice() + s.getPrice() <= budget){
                    ClothingItem* tp = new ClothingItem(t);
                    ClothingItem* bp = new ClothingItem(b);
                    ClothingItem* sp = new ClothingItem(s);
                    return Outfit(tp, bp, sp, prefStyle);
                }
            }
        }
    }
    std::cout << "Could not find an outfit to match preferences." << std::endl;
    return Outfit();
}
Outfit RecommendationSystem::generateByStyle(){
    return Outfit();
}
Outfit RecommendationSystem::generateByWeather(){
    return Outfit();
}
Outfit RecommendationSystem::generateByBudget(){
    return Outfit();
}
Outfit RecommendationSystem::generateByColor(){
    return Outfit();
}
void RecommendationSystem::displayOutfit(const Outfit& outfit){
    outfit.display();
};




