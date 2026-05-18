 #include <iostream>
#include "ClothingItem.h"
#include "Outfit.h"
#include "Wardrobe.h"
#include "User.h"
#include "RecommendationSystem.h"

using namespace std;

void displayMenu();

int main(){
    int choice;
    bool running = true;
    
    while (running) {
        displayMenu();
        cin >> choice;
        
        if (choice == 1){
            Wardrobe w;
            string name;
            int style;
            int color;
            double price;
            int category;
            string brand;
            cout << "Please enter the details of your clothing item: " << endl;
            cout << "Name: ";
            cin >> name;
            cout << "Style (0=Casual, 1=Formal, 2=Sporty, 3=Streetwear, 4=Vintage): ";
            cin >> style;
            cout << "Color (0=Red, 1=Blue, 2=Green, 3=Yellow, 4=Black, 5=White, 6=Gray, 7=Brown, 8=Pink, 9=Purple, 10=Orange): ";
            cin >> color;
            cout << "Price: ";
            cin >> price;
            cout << "Category (0=Top, 1=Bottom, 2=Shoes): ";
            cin >> category;
            cout << "Brand: ";
            cin >> brand;
            ClothingItem c(name, static_cast<Style>(style), static_cast<Color>(color), price, static_cast<Category>(category), brand);
            w.addItem(c);
            // TODO: Get details of clothing item from user and create object
            // TODO: Add clothing item to wardrobe`
        }
        else if(choice == 2){
            // TODO: Generate a full outfit based on user preferences
            // TODO: Use generaateOutfitWithPreferences() function
            // TODO: Display outfit
        }
        else if(choice == 3){
            // TODO: Ask user for a specific clothing item
            // TODO: Add item into wardrobe
            // TODO: Generate rest of outfit from that item using generateFromItem(item)
        }
        else if(choice == 4){
            // TODO: Prompt user for a whole outfit
            // TODO: Help improve the outfit with recommendaations and keeping preference in mind using suggestImprovement(outfit)
        }
        else if(choice == 5){
            // TODO: Recommend brands based on user budget
            // TODO: Get brands from vector<string> brands;
        }
        else if(choice == 6){
            // TODO: Show all items in wardrobe through display
            // TODO: Use display()
        }
        else if(choice == 7){
            // TODO: Update user preferences
        }
        else if(choice == 8){
            // TODO: Save and quit
        }
        else{
            cout << "Invalid choice. Try again" << endl;
        }
        
    }
    return 0;
};


void displayMenu(){
    cout << endl << "=== Outfit Generator ===" << endl;
    cout << "1. Add Clothing Item" << endl;
    cout << "2. Generate Outfit Through Preference" << endl;
    cout << "3. Generate Outfit from Singular Item" << endl;
    cout << "4. Improve Outfit" << endl;
    cout << "5. Recommend Brands" << endl;
    cout << "6. Display Wardrobe" << endl;
    cout << "7. Update Preferences" << endl;
    cout << "8. Exit" << endl;
    cout << "Choice: ";
}
