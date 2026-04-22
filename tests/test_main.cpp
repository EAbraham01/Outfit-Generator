#include <iostream>
#include <cassert>
#include "../src/RecommendationSystem.h"

void test_clothing_item_initialzation() {
    // TODO: Create a ClothingItem object and verify attributes
    // ClothingItem item("Jacket", "casual", "blue", 40.0, "top", "Nike"
    // assert(item.getName() == "Jacket");
    // assert(item.getStyle() == "casual");
    // assert(item.getColor() == "blue");
    // assert(item.getPrice() == "40.0");
}

void test_wardrobe_add_item() {
    // TODO: Test adding items to wardrobe
    // Wardrobe w;
    // ClothingItem item("AirForces", "casual", "white", 20.0, "shoes", "Nike);
    // w.addItem(item);
    
    // assert(w.getItems().size() == 1);
}

void test_outfit_recommendation(){
    // TODO: Test system can generate an outfit
    // Wardrobe w'
    // User u("casual, "any", "any", "any", 200.0);
    // RecommendationSystem r(w, u);
    
    //Outfit o = r.generateOutfit();
}

int main() {
    cout << "Running tests..." << endl;
    
    test_clothing_item_initialization();
    tesst_wardrobe_add_item();
    test_outfit_recommendaation();
    
    cout << endl << "All tests completed." << endl;
    return 0;
}

