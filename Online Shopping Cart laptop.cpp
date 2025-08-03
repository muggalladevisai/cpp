#include <iostream>
using namespace std;

class Product {
public:
    string name;
    float price;

    void showProduct() {
        cout << "Product: " << name << ", Price:" << price << endl;
    }
};

int main() {
    Product obj1;
    obj1.name = "Laptop";
    obj1.price = 60000;

    obj1.showProduct();
    return 0;
}
