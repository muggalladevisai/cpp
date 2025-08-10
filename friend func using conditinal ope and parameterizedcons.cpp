#include <iostream>
using namespace std;
class name {
private:
    int a, b;
public:
    name(int x, int y) {
        a = x;
        b = y;
    }
    friend void Greatest(name n, int c);
};
void Greatest(name n, int c) {
int greatest = (n.a > n.b) ? ((n.a > c) ? n.a : c) : ((n.b > c) ? n.b : c);
    cout << "Greatest number is" << greatest << endl;
}
int main() {
    name obj(25, 40);
    int c= 35;
    Greatest(obj,c);
    return 0;
}
