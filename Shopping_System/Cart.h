
#ifndef CART_H
#define CART_H

#include "Product.h"
#include <vector>
using namespace std;

class Cart {
private:
    vector<Product*> products;

public:
    void addProduct(Product* product);
    void removeProduct(Product* product);
    void displayCart();
    double calculateTotal();
    ~Cart();
};

#endif
