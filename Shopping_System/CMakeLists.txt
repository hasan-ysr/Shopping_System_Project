cmake_minimum_required(VERSION 3.26)
project(untitled92)

set(CMAKE_CXX_STANDARD 17)

add_executable(untitled92 main.cpp
        User.cpp
        User.h
        Customer.cpp
        Customer.h
        Admin.cpp
        Admin.h
        Product.cpp
        Product.h
        ElectronicProduct.cpp
        ElectronicProduct.h
        ClothingProduct.cpp
        ClothingProduct.h
        Cart.cpp
        Cart.h
        Payment.cpp
        Payment.h
        CreditCardPayment.cpp
        CreditCardPayment.h
        PayPalPayment.cpp
        PayPalPayment.h)
