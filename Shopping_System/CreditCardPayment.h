
#ifndef CREDITCARDPAYMENT_H
#define CREDITCARDPAYMENT_H

#include "Payment.h"
#include <string>
using namespace std;

class CreditCardPayment : public Payment {
private:
    string cardNumber;

public:
    CreditCardPayment(const string& cNumber) : cardNumber(cNumber) {}
    void processPayment(double amount) override;
};

#endif
