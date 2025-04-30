#include "Customer.h"



string Customer::getName() const {
    return name;
}

string Customer::getContactInfo() const {
    return contactInfo;
}

void Customer::placeOrder(Order* order) {
    orders.push_back(order);
}

vector<Order*> Customer::getOrders() const {
    return orders;
}
