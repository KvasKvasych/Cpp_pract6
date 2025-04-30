#pragma once
#include <string>
#include <vector>
#include "Order.h"

using namespace std;

class Customer {
private:
    string name;
    string contactInfo;
    vector<Order*> orders;

public:
    Customer(const string& name, const string& contactInfo)
        : name(name), contactInfo(contactInfo) {
    }

    string getName() const;
    string getContactInfo() const;

    void placeOrder(Order* order);
    vector<Order*> getOrders() const;
};
