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
