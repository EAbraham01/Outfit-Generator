# Implementation Plan

# Done

## Feature 1: Adding Clothing Item
**Trigger**: User selects "Add Item"
Asks the user for the details of the clothing item which is then added into the wardrobe. Confirms that item has been added.

## Feature 2: Display Wardrobe
**Trigger**: User selects "Display Wardrobe"
Loops through all items in the wardrobe and prints each one using printItem(). If the wardrobe is empty, displays a message saying no items have been added yet.
## Feature 3: Generate full outfit based on user preference
**Trigger**: User selects "Generate Full Outfit"
Asks for the users preferences such as price, brand, style, color, weather, then generates the full outfit.

# Stubbed
## Feature 4: Generate the rest of an outfit based on the clothing items already given
**Trigger**: User selects "Generate Outfit From Item"
Asks for the details of the users item and then generates the rest of the missing items (full outfit) from that input.

## Feature 5: Suggesting different items to improve the outfit
**Trigger**: User selects "Suggest Outfit Improvement"
User gives their whole outfit and based on the attributes of each item and the desired style, they are recommended better items for their outfit.

## Feature 6: Recommend certain clothing brands that match the budget
**Trigger**: User selects "Recommend Brands"
Asks for the budget of the user and recommends brands that the user should look through.

## Feature 7: Update user preferences
**Trigger**: User selects "Update Preferences"
User is allowed to change the preferences of the attributes of his outfit through this feature.

## Feature 8: Save/Load Outfits
**Trigger**: Program startup (load) and exiting program (save).
Reads clothing items from a file and adds them into the wardrobe. When exiting program, all wardrobe items are written back into the file.