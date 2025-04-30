#include "Product.h"
string Product::getName() const {
    return name;
}

double Product::getPrice() const {
    return price;
}

int Product::getQuantityInStock() const {
    return quantityInStock;
}

void Product::setPrice(double newPrice) {
    price = newPrice;
}

void Product::setQuantityInStock(int newQuantity) {
    quantityInStock = newQuantity;
}