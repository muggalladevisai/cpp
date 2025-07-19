#include <iostream>
using namespace std;
template <class t,class t1>
class name
{
    t x;
    t1 y;
    public:name(t a,t1 b)
    {
        x=a;
        y=b;
    }
    t1 sum()
    {
        return x+y;
    }
    };
int main() {
  name <int,float>obj(4,5.6);
  cout<<obj.sum();

    return 0;
}










