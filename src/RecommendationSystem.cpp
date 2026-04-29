#include "RecommendationSystem.h"
#include <iostream>



RecommendationSystem::RecommendationSystem(Wardrobe& w, User& u) : wardrobe(w), user(u){};
    
Outfit RecommendationSystem::generateOutfit(){
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
    std::cout << "[RecommendationSystem::displayOutfit] not yet implemented\n";
};




