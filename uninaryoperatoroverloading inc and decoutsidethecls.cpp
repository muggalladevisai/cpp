#include <iostream>
using namespace std;

class uninary
{
    int x, y;

public:
    uninary() {
        x = 10;
        y = 20;
    }

    void operator++();   // Overload prefix ++
    void operator--();   // Overload prefix --
    
    void dis() {
        cout << x << endl;
        cout << y << endl;
    }
};

// Prefix increment: ++obj
void uninary::operator++() {
    ++x;
    ++y;
}

// Prefix decrement: --obj
void uninary::operator--() {
    --x;
    --y;
}

int main()
{
    uninary obj, obj1;

    ++obj;     // x = 11, y = 21
    obj.dis(); // prints 11, 21

    --obj1;    // x = 9, y = 19
    obj1.dis(); // prints 9, 19

    return 0;
}
