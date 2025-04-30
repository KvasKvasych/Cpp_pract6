#pragma once
#include <vector>
#include "Product.h"

using namespace std;

class Order {
private:
    vector<Product*> products;
    double totalCost;
    int orderId;
    static int nextOrderId;

public:
    Order();
    
    void addProduct(Product* product, int quantity);
    void removeProduct(Product* product);
    double calculateTotalCost() const;
    
    vector<Product*> getProducts() const;
    double getTotalCost() const;
    int getOrderId() const;
};

