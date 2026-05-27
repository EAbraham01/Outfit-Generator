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
    Wardrobe w;
    User u (Casual, White, "Nike", 200.0);
    RecommendationSystem rs(w, u);
    
    while (running) {
        displayMenu();
        cin >> choice;
        
        if (choice == 1){
            string name;
            int style;
            int color;
            double price;
            int category;
            string brand;
            cout << "Please enter the details of your clothing item: " << endl;
            
            cout << "Name: ";
            cin.ignore();
            getline(cin, name);
            
            do {
                cout << "Style (0=Casual, 1=Formal, 2=Sporty, 3=Streetwear, 4=Vintage): ";
                cin >> style;
                if (cin.fail()){
                    cin.clear();
                    cin.ignore(1000, '\n');
                    style = -1;
                }
            } while(style < 0 || style > 4);
            
            do{
                cout << "Color (0=Red, 1=Blue, 2=Green, 3=Yellow, 4=Black, 5=White, 6=Gray, 7=Brown, 8=Pink, 9=Purple, 10=Orange): ";
                cin >> color;
                if (cin.fail()){
                    cin.clear();
                    cin.ignore(1000, '\n');
                    color = -1;
                }
            } while(color < 0 || color > 10);
            
            cout << "Price: ";
            cin >> price;
            
            do{
                cout << "Category (0=Top, 1=Bottom, 2=Shoes): ";
                cin >> category;
                if (cin.fail()){
                    cin.clear();
                    cin.ignore(1000, '\n');
                    category = -1;
                }
            } while(category < 0 || category > 2);
            
            cout << "Brand: ";
            cin.ignore();
            getline(cin, brand);
            ClothingItem c(name, static_cast<Style>(style), static_cast<Color>(color), price, static_cast<Category>(category), brand);
            w.addItem(c);
        }
        else if(choice == 2){
            w.display();
        }
        else if(choice == 3){
            int style;
            double budget;
            do {
                cout << "Style (0=Casual, 1=Formal, 2=Sporty, 3=Streetwear, 4=Vintage): ";
                cin >> style;
                if (cin.fail()){
                    cin.clear();
                    cin.ignore(1000, '\n');
                    style = -1;
                }
            } while(style < 0 || style > 4);

            cout << "Max Budget: ";
            cin >> budget;

            u.setPrefStyle(static_cast<Style>(style));
            u.setBudget(budget);

            Outfit o = rs.generateOutfit();
            o.display();
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
        else if(choice == 9){
            running = false;
        }
        else{
            cout << "Invalid choice. Try again" << endl;
        }
        
    }
    return 0;
}


void displayMenu(){
    cout << endl << "=== Outfit Generator ===" << endl;
    cout << "1. Add Clothing Item" << endl;
    cout << "2. Display Wardrobe" << endl;
    cout << "3. Generate Outfit Through Preference" << endl;
    cout << "4. Generate Outfit from Singular Item" << endl;
    cout << "5. Improve Outfit" << endl;
    cout << "6. Recommend Brands" << endl;
    cout << "7. Update Preferences" << endl;
    cout << "8. Save/Load" << endl;
    cout << "9. Exit" << endl;
    cout << "Choice: ";
}
