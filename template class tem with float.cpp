#include <iostream>
using namespace std;
template <class t>
class name
{
    t x, y;
    public:name(t a,t b)
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
  name <float>obj(4.5,5.6);
  obj.sum();

    return 0;
}

