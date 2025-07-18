#include<iostream> 
using namespace std; 
class op 
{ 
int a; 
public: op(int x=0) 
{ 
a=x; 
} 
void show() 
{ 
cout<<a<<endl; 
} 
friend void operator ++(op &); 
}; 
void operator ++(op &s)//operator overloading with mem func
{ 
++s.a; 
} 
int main() 
{ 
op obj1(10); 
obj1.show();//10 
++obj1;//increment on object 
obj1.show();//11 
++obj1;//increment on object 
obj1.show ();//11 
}
