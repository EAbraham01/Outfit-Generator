#Implementation Plan

## Feature 1: Adding Clothing Item
**Trigger**: User selects "Add Item"
Asks the user for the details of the clothing item which is then added into the wardrobe. Confirms that item has been added.

##Feature 2: Generate full outfit based on user preference
**Trigger**: User selcts "Generate Full Outfit"
Asks for the users preferences such as price, brand, style, color, weather, then genertes the full outfit.

##Feature 3: Generate the rest of an outfit based on the clothing items already given
**Trigger**: User selects "Generate Outfit From Item"
Asks for the details of the users item and then generates the rest of the missing items (full outfit) from that input.

##Feature 4: Suggesting different items to improve the outfit
**Trigger**: User selects "Suggest Outfit Improvement"
User gives their whole outfit and based on the attributes of each item and the desired style, they are recommended better items for their outfit.

##Feature 5: Recommend certain clothing brands that match the budget
**Trigger**: User selects "Recommend Brands"
Asks for the budget of the user and recommends brands that the user should look through.

##Feature 6: Update user preferences
**Trigger**: User selects "Update Preferences"
User is allowed to change the preferences of the attributes of his outfit through this feature.

##Feature 7: Save/Load Outfits:
**Trigger** Program startup (load) and exiting program (save).
Reads clothing items for a file and adds them into the wardrobe. When exiting program, all wardrobe items are written back into the file.

