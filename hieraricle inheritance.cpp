#include <iostream>
using namespace std;
class baseclass{  // Base class
protected:
    int a,b;
public:
    void sum() {
        cout << "Enter two numbers: ";
        cin >> a >> b;
    }
};
class derivedclass1 : public baseclass {  //Derived class 1
public:
    void add() {
        cout<<a+b<<endl;
    }
};
class derivedclass2: public baseclass {  // Derived class 2
public:
    void subtract() {
        cout<<a-b<<endl;
    }
};
int main() {
    derivedclass1 obj1;
    derivedclass2 obj2;
    obj1.sum(); //2+2
    obj1.add();  //4
    obj2.sum();  //5-3
    obj2.subtract(); //2
}
