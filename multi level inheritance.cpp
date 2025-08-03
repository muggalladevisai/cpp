#include <iostream>
using namespace std;
class base {
protected:
    int a, b;
public:
    void sum() {
        cout << "Enter two numbers: ";
        cin >> a >> b;
    }
};
class derived: public base{
public:
    int z;
    };
class derived1: public base {
public:
    void display() {
        cout << a*b<< endl;
    }
};
int main() {
    derived1 obj;
    obj.sum();       
    obj.display();  
    return 0;
}

