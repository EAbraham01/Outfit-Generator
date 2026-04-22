#ifndef OUTFIT_H
#define OUTFIT_H

#include <string>
#include <vector>

/*
 Outfit class represents a single outfit generated which has a top, bottom, shoes. (May add accessories).
 */

class Outfit {
private:
    ClothingItem* top;
    ClothingItem* bottom;
    ClothingItem* shoes;
    string style;
    
    bool hasTop;
    bool hasBottom;
    bool hasShoes;
    
    
    
}
