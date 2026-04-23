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
    
public:
    Outfit();
    Outfit(ClothingItem* t, ClothingItem* b, ClothingItem* s, string style);
    void setTop(ClothingItem* t);
    void setBottom(ClothingItem* b);
    void setShoes(ClothingItem* s);
    void getTop() const;
    void getBottom() const;
    void getShoes() const;
    bool complete() const;
    bool hasTop() const;
    bool hasBottom() const;
    bool hasShoes() const;
    void display() const;
    
};

#endif
