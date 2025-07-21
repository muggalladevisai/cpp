#include <iostream>
using namespace std;
class MyClass {
    public:
        int x;
        int y;
        MyClass(int xval, int yval) {
            x = xval;
            y = yval;
        }
        MyClass(const MyClass &obj) {
            x = obj.x;
            y = obj.y;
        }
};
int main() {
    MyClass obj1(10, 20);
    MyClass obj2 = obj1;
    cout << obj2.x << " " << obj2.y;
    return 0;
}

