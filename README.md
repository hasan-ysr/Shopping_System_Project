# Shopping_System_Project
OOP PROJECT

# Online Shopping System

## Project Description

This project is a simple online shopping system developed using C++. Users can create accounts as customers or administrators. Customers can view products, add them to their cart, and make payments. Administrators can add new products. The project utilizes object-oriented programming principles, including inheritance, polymorphism, abstract classes, and virtual functions.

## Features

- **User Management**: Create and log in to customer or administrator accounts.
- **Product Management**: Administrators can add products.
- **Shopping Cart**: Customers can add products to their cart.
- **Payment Processing**: Customers can make payments using different methods.
- **Object-Oriented Programming**: Use of inheritance, polymorphism, abstract classes, and virtual functions.

## Project Structure

```
OnlineShoppingSystem/
│
├── main.cpp
├── User.h
├── User.cpp
├── Customer.h
├── Customer.cpp
├── Admin.h
├── Admin.cpp
├── Product.h
├── Product.cpp
├── ElectronicProduct.h
├── ElectronicProduct.cpp
├── ClothingProduct.h
├── ClothingProduct.cpp
├── Cart.h
├── Cart.cpp
├── Payment.h
├── Payment.cpp
├── CreditCardPayment.h
├── CreditCardPayment.cpp
├── PayPalPayment.h
├── PayPalPayment.cpp
```

## File Descriptions

- **main.cpp**: Entry point of the program, handles user interactions.
- **User.h / User.cpp**: User class and related functions (abstract class).
- **Customer.h / Customer.cpp**: Customer class and functions (derived from User class).
- **Admin.h / Admin.cpp**: Admin class and functions (derived from User class).
- **Product.h / Product.cpp**: Product class and related functions (abstract class).
- **ElectronicProduct.h / ElectronicProduct.cpp**: Electronic product class and functions (derived from Product class).
- **ClothingProduct.h / ClothingProduct.cpp**: Clothing product class and functions (derived from Product class).
- **Cart.h / Cart.cpp**: Shopping cart class and functions.
- **Payment.h / Payment.cpp**: Payment class and related functions (abstract class).
- **CreditCardPayment.h / CreditCardPayment.cpp**: Credit card payment class and functions (derived from Payment class).
- **PayPalPayment.h / PayPalPayment.cpp**: PayPal payment class and functions (derived from Payment class).

## Setup and Execution

1. **Clone the Project**:
    ```sh
    git clone https://github.com/username/OnlineShoppingSystem.git
    cd OnlineShoppingSystem
    ```

2. **Compile**:
    ```sh
    g++ -o OnlineShoppingSystem main.cpp User.cpp Customer.cpp Admin.cpp Product.cpp ElectronicProduct.cpp ClothingProduct.cpp Cart.cpp Payment.cpp CreditCardPayment.cpp PayPalPayment.cpp
    ```

3. **Run**:
    ```sh
    ./OnlineShoppingSystem
    ```

## Usage

1. **Create User Account**:
    - Select the option to create an account when the program starts.
    - Create an account as a customer or an administrator.

2. **Log In**:
    - Log in with the created account credentials.
    - If logged in as a customer, you can view products and add them to your cart.
    - If logged in as an administrator, you can add new products.

3. **Add Products (Administrator)**:
    - Select the product type (Electronic or Clothing) and enter product details.

4. **Cart and Payment (Customer)**:
    - Add products to your cart and choose a payment method to complete the purchase.

## Contributors

HASAN YAŞAR Project Manager and Developer
FERİT BULUT Project Manager and Developer
CEREN ÖZDEMİR Project Manager and Developer

