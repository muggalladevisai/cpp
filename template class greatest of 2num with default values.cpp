#include <iostream>
using namespace std;
template <class t>
class name
{
    t x, y;
    public:
    t greatest(t a=21,t b=12)
    {
        x=a;
        y=b;
        return x>y ? x: y;
    }
    };
int main() {
  name <int>obj;  
  cout<<obj.greatest();
  return 0;
}
