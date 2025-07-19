#include <iostream>
using namespace std;

class Student {
public:
    string name;
    int roll;

    void display() {
        cout << "Name: " << name << ", Roll No: " << roll << endl;
    }
};

int main() {
    Student s1;
    s1.name = "Sai";
    s1.roll = 101;
    s1.display();

    Student s2;
    s2.name = "Anu";
    s2.roll = 102;
    s2.display();
}
