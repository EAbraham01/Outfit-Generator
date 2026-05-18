#include <iostream>
#include <cassert>
#include "../src/RecommendationSystem.h"

using namespace std;

void test_clothing_item_initialzation() {
     TODO: Create a ClothingItem object and verify attributes
     ClothingItem item("Jacket", Casual, Blue, 40.0, Top, "Nike");     
     assert(item.getName() == "Jacket");
     assert(item.getStyle() == Casual);
     assert(item.getColor() == Blue);
     assert(item.getPrice() == 40.0);
     assert(item.getCategory() == Top);
     assert(item.getBrand() == "Nike");  
}

void test_add_item_normal() {
    // TODO: Test adding items to wardrobe
    cout << "Normal Operation..." << endl;
    Wardrobe w;
    ClothingItem wShoe("AirForces", Casual, White, 20.0, Shoes, "Nike");
    w.addItem(wShoe);
    assert(wShoe.getName() == "AirForces");
    assert(wShoe.getStyle() == Casual);
    assert(wShoe.getColor() == White);
    assert(wShoe.getCategory() == Shoes);
    assert(wShoe.getBrand() == "Nike");
    assert(w.getItemCount() == 1);
    cout << "PASSED" << endl;
}

void test_add_item_empty(){
    Wardrobe e;
    cout << "Testing empty wardrobe" << endl;
    assert(e.getItemCount() == 0);
    cout << "PASSED" << endl;
}

void test_removing_item(){
    cout << "Test removing an item..." << endl;
    Wardrobe r;
    ClothingItem wShoe("AirForces", Casual, White, 20.0, Shoes, "Nike");
    r.addItem(wShoe);
    assert(r.getItemCount() == 1);
    r.removeItem(wShoe);
    assert(r.getItemCount() == 0);
    cout << "PASSED" << endl;
    
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
    
    test_clothing_item_initialzation();
    test_add_item_normal();
    test_add_item_empty();
    test_removing_item();
    
    cout << endl << "All tests completed." << endl;
    return 0;
}

