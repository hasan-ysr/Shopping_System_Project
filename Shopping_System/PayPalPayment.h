
#ifndef PAYPALPAYMENT_H
#define PAYPALPAYMENT_H

#include "Payment.h"
#include <string>
using namespace std;

class PayPalPayment : public Payment {
private:
    string email;

public:
    PayPalPayment(const string& e) : email(e) {}
    void processPayment(double amount) override;
};

#endif


