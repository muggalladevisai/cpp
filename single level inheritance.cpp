#include <iostream>
using namespace std;
class baseclass {
protected:
    int a, b;
public:
    void sum() {
        cout<<"Enter two numbers";
        cin>> a>>b;
    }
};
class Add : public baseclass {
public:
    void Addition() {
        cout<<a+b<<endl;
    }
};
int main() {
    Add obj;
    obj.sum();
    obj.Addition();
}
