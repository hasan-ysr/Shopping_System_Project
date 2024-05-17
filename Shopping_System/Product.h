
#ifndef PRODUCT_H
#define PRODUCT_H

#include <string>
using namespace std;

class Product {
protected:
    string name;
    double price;

public:
    Product(const string& pname, double pprice) : name(pname), price(pprice) {}
    virtual void displayDetails() = 0;
    virtual ~Product() {}

    string getName() const { return name; }
    double getPrice() const { return price; }
};

#endif

