
#include "Cart.h"
#include <iostream>
#include <algorithm>

void Cart::addProduct(Product* product) {
    products.push_back(product);
}

void Cart::removeProduct(Product* product) {
    products.erase(remove(products.begin(), products.end(), product), products.end());
}

void Cart::displayCart() {
    cout << "Cart Contents:" << endl;
    for (auto product : products) {
        product->displayDetails();
    }
}

double Cart::calculateTotal() {
    double total = 0.0;
    for (auto product : products) {
        total += product->getPrice();
    }
    return total;
}

Cart::~Cart() {
    for (auto product : products) {
        delete product;
    }
}

