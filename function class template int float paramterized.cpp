#include <iostream>
using namespace std;
template <typename t,typename t1>
class name
{
    t x;
    t1 y;
    public:name(t a,t1 b) //parametrized
    {
        x=a;
        y=b;
    }
    void sum()
    {
        cout<<x+y<<endl;
    }
    };
int main() {
  name <int,float>obj(4,5.6);
  obj.sum();

    return 0;
}

