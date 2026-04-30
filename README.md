# Outfit-Generator

A command-line program for generating fun outfits.

## Features
- Generate whole outfits based on input(style, budget, color preference)
- Suggesting different items to improve the outfit
- Generate the rest of an outfit based on the clothing items already given
- Recommend certain clothing brands that match the budget
- Graphical user interface for user input and display


## Building
```
cmake -S . -B build
cmake --build build
```

## Running
```
./build/outfit_generator
```

## Running Tests
```
ctest --test-dir build --verbose
```

## Author
Eminadab Abraham - CIS 25 Final Project

## Current Status
 
**Implemented Features**:
- Feature 1: Adding Clothing Item, which adds a clothing item to a wardrobe and the attributes of the clothingitem are created by the user.
 
**Stubbed (compile but not implemented)**:
- Feature 2: Generate full outfit based on user preference
- Feature 3: Generate the rest of an outfit based on the clothing items already given
- Feature 4: Suggesting different items to improve the outfit
- Feature 5: Recommend certain clothing brands that match the budget
- Feature 6: Update user preferences
- Feature 7: Save/Load Outfits
 
**Known Issues**:
- No bugs so far

