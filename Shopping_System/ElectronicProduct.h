
#ifndef ELECTRONICPRODUCT_H
#define ELECTRONICPRODUCT_H

#include "Product.h"

class ElectronicProduct : public Product {
public:
    ElectronicProduct(const string& pname, double pprice) : Product(pname, pprice) {}
    void displayDetails() override;
};

#endif

