#include <iostream>
using namespace std;
class baseclass1 {
protected:
    int a;
public:
    void sub1() {
        cout<<"Enter first number";
        cin>>a;
    }
};
class baseclass2 {
protected:
    int b;
public:
    void sub2() {
        cout<<"Enter second number";
        cin>>b;
    }
};
class derivedclass:public baseclass1,public baseclass2 {
public:
    void Subtraction() {
        cout<<a-b<<endl;
    }
};
int main() {
    derivedclass obj;
    obj.sub1();
    obj.sub2();
    obj.Subtraction();
}
