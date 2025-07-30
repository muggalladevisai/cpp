#include <iostream>
using namespace std;
class name {
    int x,y;
    public: name()
    {
        x=10;
        y=20;
    }
    int sum()
    {
        return x+y;
    }
};

int main() {
    name obj;
    obj.sum();
    return 0;
}
