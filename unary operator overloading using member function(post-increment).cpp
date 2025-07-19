#include<iostream> 
using namespace std; 
class op 
{ 
int a,b; 
public: op(int x=0) 
{ 
a=x; 
} 
void show() 
{ 
cout<<a<<endl; 
} 
void operator ++( int); 
}; 
void op::operator ++(int )//operator overloading with mem func
 { 
 b=a++;//a++ or a=a++
 cout<<b<<endl;
 
} 
int main() 
{ 
op obj1(10); 
obj1.show();//10 
obj1++;// post increment on object 
obj1.show();//11 
} 

