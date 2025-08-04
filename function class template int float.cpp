#include <iostream>
using namespace std;
template <class t,class t1>
class name
{
    t x;
    t1 y;
    public:name()
    {
       x=5;
       y=4.2;
    }
    void sum()
    {
        cout<<x+y<<endl;
    }
    };
int main() {
    name <int,float>obj;
  obj.sum();
  
}
