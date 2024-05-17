
#ifndef CLOTHINGPRODUCT_H
#define CLOTHINGPRODUCT_H

#include "Product.h"

class ClothingProduct : public Product {
public:
    ClothingProduct(const string& pname, double pprice) : Product(pname, pprice) {}
    void displayDetails() override;
};

#endif

