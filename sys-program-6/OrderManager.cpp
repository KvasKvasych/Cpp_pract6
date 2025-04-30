#include "OrderManager.h"

Order* OrderManager::createOrder(Customer* customer) {
    Order* newOrder = new Order();
    orders.push_back(newOrder);
    customer->placeOrder(newOrder);
    return newOrder;
}

void OrderManager::cancelOrder(int orderId) {
    for (auto it = orders.begin(); it != orders.end(); ++it) {
        if ((*it)->getOrderId() == orderId) {
            orders.erase(it);
            break;
        }
    }
}

vector<Order*> OrderManager::getAllOrders() const {
    return orders;
}

vector<Order*> OrderManager::getCustomerOrders(const Customer* customer) const {
    return customer->getOrders();
}