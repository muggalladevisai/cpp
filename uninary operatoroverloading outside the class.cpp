#include <iostream>
using namespace std;
class uninary
{
    int x;
    public: uninary()
    {
        x=10;
    }
    void operator ++();//operator overloading
    void dis()
    {
        
        cout<<x<<endl;
    }
    
};
void uninary::operator ++()
    {
        
        ++x;
    }
int main()
{
   uninary obj,obj1;
   ++ obj ;
   obj.dis();
   ++ obj1 ;
   obj1.dis();

    return 0;
}



