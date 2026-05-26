#include <iostream>
#include <cassert>
#include "../src/RecommendationSystem.h"

using namespace std;

void test_clothing_item_initialization() {
     ClothingItem item("Jacket", Casual, Blue, 40.0, Top, "Nike");     
     assert(item.getName() == "Jacket");
     assert(item.getStyle() == Casual);
     assert(item.getColor() == Blue);
     assert(item.getPrice() == 40.0);
     assert(item.getCategory() == Top);
     assert(item.getBrand() == "Nike");  
}

void test_add_item_normal() {
    cout << "Normal Operation..." << endl;
    Wardrobe w;
    ClothingItem wShoe("AirForces", Casual, White, 20.0, Shoes, "Nike");
    w.addItem(wShoe);
    assert(w.getItems()[0].getName() == "AirForces");
    assert(w.getItems()[0].getStyle() == Casual);
    assert(w.getItems()[0].getColor() == White);
    assert(w.getItems()[0].getCategory() == Shoes);
    assert(w.getItems()[0].getBrand() == "Nike");
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

void test_display_wardrobe_normal() {
    std::cout << "Display wardrobe (normal)...";
    Wardrobe w;
    ClothingItem tee("White Tee", Casual, White, 15.0, Top, "Pro Club");
    ClothingItem jeans("Baggy Jeans", Casual, Blue, 45.0, Bottom, "H&M");
    ClothingItem shoes("AirForces", Casual, White, 90.0, Shoes, "Nike");
    w.addItem(tee);
    w.addItem(jeans);
    w.addItem(shoes);
    assert(w.getItemCount() == 3);
    assert(w.getItems()[0].getName() == "White Tee");
    assert(w.getItems()[1].getName() == "Baggy Jeans");
    assert(w.getItems()[2].getName() == "AirForces");
    assert(w.getItems()[0].getCategory() == Top);
    assert(w.getItems()[1].getCategory() == Bottom);
    assert(w.getItems()[2].getCategory() == Shoes);
    w.display();
    cout << "PASSED" << endl;
    
}

void test_display_empty(){
    cout << "Test display with empty wardrobe..." << endl;
    Wardrobe w;
    assert(w.getItemCount() == 0);
    assert(w.getItems().empty());
    w.display();
    cout << "PASSED" << endl;
}

void test_display_one_item(){
    cout << "Test display with exactly one item..." << endl;
    Wardrobe w;
    ClothingItem shirt("White Tee", Casual, White, 15.0, Top, "Nike");
    w.addItem(shirt);

    assert(w.getItemCount() == 1);
    assert(w.getItems()[0].getName() == "White Tee");
    assert(w.getItems()[0].getStyle() == Casual);
    assert(w.getItems()[0].getColor() == White);
    assert(w.getItems()[0].getCategory() == Top);
    assert(w.getItems()[0].getBrand() == "Nike");
    w.display();
    cout << "PASSED" << endl;
}

void test_generate_outfit(){
    cout << "Testing outfit generator normal case: " << endl;
    Wardrobe w;
    User u(Casual, White, "Nike", 200.0);
    RecommendationSystem rs(w, u);
    Outfit o = rs.generateOutfit();
    assert(o.complete() == true);
    assert(o.hasTop() == true);
    assert(o.hasBottom() == true);
    assert(o.hasShoes() == true);
    cout << "PASSED" << endl;
}

void test_generate_outfi_low_budget(){
    cout << "Test outfit generator with too low budget: " << endl;
    Wardrobe w;
    User u(Formal, Black, "Zara", 10.0);
    RecommendationSystem rs(w, u);
    Outfit o = rs.generateOutfit();
    assert(o.complete() == false);
    cout << "PASSED" << endl;
}

void test_generate_outfit_exact(){
    cout << "Test outfit generator with a certain budget: " << endl;
    Wardrobe w;
    // White Tee costs 15.0, Baggy Jeans cost 45.0, and Air Forces cost 90.0
    User u(Casual, White, "Nike", 150.0);
    RecommendationSystem rs(w, u);
    Outfit o = rs.generateOutfit();
    assert(o.complete() == true);
    cout << "PASSED" << endl;

}
void test_outfit_recommendation(){
    // TODO: Test system can generate an outfit
}

int main() {
    cout << "Running tests..." << endl;
    
    test_clothing_item_initialization();
    test_add_item_normal();
    test_add_item_empty();
    test_removing_item();
    test_display_wardrobe_normal();
    test_display_empty();
    test_display_one_item();
    test_generate_outfit();
    test_generate_outfi_low_budget();
    test_generate_outfit_exact();
    cout << endl << "All tests completed." << endl;
    return 0;
}

