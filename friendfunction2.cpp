#include<iostream>
using namespace std;
class name {
private:
    int a, b;
public:name(int x, int y) {                     // Parameterized constructor
        a = x;
        b = y;
    }
    friend void Greatest(name, int c);          // Declare friend function
};
void Greatest(name obj, int c) {                   // Friend function definition
        if (obj.a >= obj.b && obj.a >= c)
        cout << "The greatest number is " << obj.a << endl;
    else if (obj.b >= obj.a && obj.b >= c)
        cout << "The greatest number is " << obj.b << endl;
    else
        cout << "The greatest number is " << c << endl;
}
int main() {
    name obj(15, 25);
    int c = 20;
    Greatest(obj, c);
    return 0;
}

