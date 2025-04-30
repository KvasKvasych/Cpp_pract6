
#include <vector>
#include "Order.h"
#include "Customer.h"

using namespace std;

class OrderManager {
private:
    vector<Order*> orders;
    vector<Customer*> customers;

public:
    Order* createOrder(Customer* customer);
    void cancelOrder(int orderId);
    vector<Order*> getAllOrders() const;
    vector<Order*> getCustomerOrders(const Customer* customer) const;
};
