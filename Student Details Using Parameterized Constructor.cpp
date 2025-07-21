#include <iostream>
using namespace std;

class Student {
    string name;
    int roll;

public:
    // Parameterized constructor
    Student(string n, int r) {
        name = n;
        roll = r;
    }

    void display() {
        cout << "Name" << name << ", Roll" << roll << endl;
    }
};

int main() {
    Student obj1("Sai", 101), obj2("Anu", 102);
    obj1.display();
    obj2.display();
    return 0;
}
