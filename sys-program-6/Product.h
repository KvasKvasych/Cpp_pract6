#include <string>

using namespace std;

class Product {
private:
    string name;
    double price;
    int quantityInStock;

public:
    Product(const string& name, double price, int quantity)
        : name(name), price(price), quantityInStock(quantity) {
    }

    string getName() const;
    double getPrice() const;
    int getQuantityInStock() const;

    void setPrice(double newPrice);
    void setQuantityInStock(int newQuantity);
};

