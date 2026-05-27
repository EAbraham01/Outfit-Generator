#ifndef OUTFIT_H
#define OUTFIT_H

#include <string>
#include <vector>
#include "ClothingItem.h"

/*
 Outfit class represents a single outfit generated which has a top, bottom, shoes. (May add accessories).
 */

class Outfit {
private:
    ClothingItem* top;
    ClothingItem* bottom;
    ClothingItem* shoes;
    Style style;
    
public:
    Outfit();
    ~Outfit();
    Outfit(ClothingItem* t, ClothingItem* b, ClothingItem* s, Style style);
    void setTop(ClothingItem* t);
    void setBottom(ClothingItem* b);
    void setShoes(ClothingItem* s);
    ClothingItem* getTop() const;
    ClothingItem* getBottom() const;
    ClothingItem* getShoes() const;
    bool complete() const;
    bool hasTop() const;
    bool hasBottom() const;
    bool hasShoes() const;
    void display() const;
    
};

#endif
