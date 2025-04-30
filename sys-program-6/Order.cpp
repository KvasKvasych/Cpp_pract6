#include "Order.h"

int Order::nextOrderId = 1;

Order::Order() : orderId(nextOrderId++) {}

void Order::addProduct(Product* product, int quantity) {
    if (product->getQuantityInStock() >= quantity) {
        products.push_back(product);
        product->setQuantityInStock(product->getQuantityInStock() - quantity);
        totalCost = calculateTotalCost();
    }
}

void Order::removeProduct(Product* product) {
    for (auto it = products.begin(); it != products.end(); ++it) {
        if (*it == product) {
            products.erase(it);
            totalCost = calculateTotalCost();
            break;
        }
    }
}

double Order::calculateTotalCost() const {
    double sum = 0.0;
    for (const auto& product : products) {
        sum += product->getPrice();
    }
    return sum;
}

vector<Product*> Order::getProducts() const {
    return products;
}

double Order::getTotalCost() const {
    return totalCost;
}

int Order::getOrderId() const {
    return orderId;
}
