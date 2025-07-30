#include<iostream>
using namespace std;
class Person {
public:
    string name;
    int age;
    // Default constructor
    Person() {
        name = "Guest";
        age = 18;
    }
    void display() {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};
int main() {
    Person obj;  // Creating object
    obj.display();  // Displaying values

    return 0;
}
