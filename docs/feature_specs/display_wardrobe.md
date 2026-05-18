# Display Wardrobe - Spec

## Problem statement
A user can view all the current clothing items that are stored in their wardrobe.
 
## Types involved
- getItems() which will retrieve the full list of items
- printItem() on each item to display its attributes
 
## Public interface
- std::vector<ClothingItem> Wardrobe::getItems()
- void ClothingItem::printItem() const
 
## Inputs and outputs
- Input: user enters choice 2 from main menu
- Output: 
    - If wardrobe has items, prints each item using printItem() 
    - If wardrobe is empty, prints: "Your wardrobe is empty."
 
## Edge cases
- Empty wardrobe (no items)
- Wardrobe has exactly one item
- Wardrobe has a large number of items
- Empty new name (should be rejected).
 
## Three tests (English version)
- Normal: A wardrobe with three items (a top, bottom, and shoes) displays all attributes correctly.
- Edge: A wardrobe with no items displays "Your wardrobe is empty." and does not crash.
- Boundary: A wardrobe with exactly one item displays that item correctly and does not print any extra blank entries.

## Design Decisions
- Adding a display method to wardrobe rather than looping through items
- Move wardrobe declaration outside while loop in main cpp file so items persist across menu choices.


