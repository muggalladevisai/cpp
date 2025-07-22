#include <iostream>
using namespace std;

class Rectangle {
    int length, width;

public:
    Rectangle(int l, int w) {
        length = l;
        width = w;
    }

    void area() {
        cout << "Area of Rectangle = " << length * width << endl;
    }
};

int main() {
    Rectangle obj(10, 5);
    obj.area();
    return 0;
}
