#include <iostream>

using namespace std;

void displayMenu();

int main(){
    int choice;
    bool runnning = true;
    
    while (running) {
        displayMenu();
        cin >> choice;
        
        if (choice == 1){
            // TODO: Get details of clothing item from user and create object
            // TODO: Add clothing item to wardrobe
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
}


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
