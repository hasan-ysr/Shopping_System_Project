#include <iostream>
#include <vector>
#include "Customer.h"
#include "Admin.h"
#include "ElectronicProduct.h"
#include "ClothingProduct.h"
#include "Cart.h"
#include "CreditCardPayment.h"
#include "PayPalPayment.h"

using namespace std;

vector<User*> users;
vector<Product*> products;

void initializeProducts() {
    products.push_back(new ElectronicProduct("Macbook 256GB Ram: 16GB -> ", 1499.99));
    products.push_back(new ElectronicProduct("Samsung S23 Ultra 512GB ->", 999.99));
    products.push_back(new ElectronicProduct("Airpods Pro 3th Generation -> ", 99.99));
    products.push_back(new ClothingProduct("Tommy Hilfiger Sweatshirt ->", 29.99));
    products.push_back(new ClothingProduct("Levis Jeans -> ", 39.99));
    products.push_back(new ClothingProduct("Columbia Coat -> ", 109.99));
}

User* loginUser(const string& uname, const string& pwd) {
    for (auto user : users) {
        if (user->getUsername() == uname && user->getPassword() == pwd) {
            user->login();
            return user;
        }
    }
    return nullptr;
}

void customerMenu(Customer* customer) {
    Cart cart;
    int choice;
    while (true) {
        cout << "1. View Products\n2. Add Product to Cart\n3. View Cart\n4. Checkout\n5. Logout\n";
        cin >> choice;
        if (choice == 1) {
            for (size_t i = 0; i < products.size(); ++i) {
                cout << i + 1 << ". ";
                products[i]->displayDetails();
            }
        } else if (choice == 2) {
            cout << "Enter product number to add to cart: ";
            int productNumber;
            cin >> productNumber;
            if (productNumber > 0 && productNumber <= products.size()) {
                cart.addProduct(products[productNumber - 1]);
                cout << "Product added to cart.\n";
            } else {
                cout << "Invalid product number.\n";
            }
        } else if (choice == 3) {
            cart.displayCart();
        } else if (choice == 4) {
            double total = cart.calculateTotal();
            cout << "Total amount: $" << total << "\n";
            cout << "Choose payment method:\n1. Credit Card\n2. PayPal\n";
            int paymentChoice;
            cin >> paymentChoice;
            Payment* payment;
            if (paymentChoice == 1) {
                payment = new CreditCardPayment("1234-5678-9876-5432");
            } else {
                payment = new PayPalPayment("customer@example.com");
            }
            payment->processPayment(total);
            delete payment;
            break;
        } else if (choice == 5) {
            break;
        } else {
            cout << "Invalid choice.\n";
        }
    }
}

void adminMenu(Admin* admin) {
    int choice;
    while (true) {
        cout << "1. Add Product\n2. Logout\n";
        cin >> choice;
        if (choice == 1) {
            cout << "Enter product type (1. Electronic 2. Clothing): ";
            int type;
            cin >> type;
            cout << "Enter product name: ";
            string name;
            cin >> name;
            cout << "Enter product price: ";
            double price;
            cin >> price;
            Product* product;
            if (type == 1) {
                product = new ElectronicProduct(name, price);
            } else {
                product = new ClothingProduct(name, price);
            }
            products.push_back(product);
            cout << "Product added.\n";
        } else if (choice == 2) {
            break;
        } else {
            cout << "Invalid choice.\n";
        }
    }
}

void createUser() {
    cout << "Select user type:\n1. Customer\n2. Admin\n";
    int userType;
    cin >> userType;
    cout << "Enter username: ";
    string username;
    cin >> username;
    cout << "Enter password: ";
    string password;
    cin >> password;

    if (userType == 1) {
        users.push_back(new Customer(username, password));
        cout << "Customer account created.\n";
    } else if (userType == 2) {
        users.push_back(new Admin(username, password));
        cout << "Admin account created.\n";
    } else {
        cout << "Invalid user type.\n";
    }
}

int main() {

    initializeProducts();

    int choice;
    while (true) {
        cout << "1. Create Account\n2. Login\n3. Exit\n";
        cin >> choice;
        if (choice == 1) {
            createUser();
        } else if (choice == 2) {
            string username, password;
            cout << "Enter username: ";
            cin >> username;
            cout << "Enter password: ";
            cin >> password;

            User* user = loginUser(username, password);
            if (user) {
                if (Customer* customer = dynamic_cast<Customer*>(user)) {
                    customerMenu(customer);
                } else if (Admin* admin = dynamic_cast<Admin*>(user)) {
                    adminMenu(admin);
                }
            } else {
                cout << "Invalid username or password.\n";
            }
        } else if (choice == 3) {
            break;
        } else {
            cout << "Invalid choice.\n";
        }
    }


    for (auto user : users) {
        delete user;
    }
    for (auto product : products) {
        delete product;
    }

    return 0;
}
