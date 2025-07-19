#include<iostream> 
using namespace std; 
class name
{ 
int a; 
public: name(int x=0) 
{ 
a=x; 
} 
void show() 
{ 
cout<<a<<endl; 
} 
 void operator --( ); 
}; 
void name :: operator --()//operator overloading with mem func 
{ 
 --a; 
} 
int main() 
{ 
name obj1(10); 
obj1.show(); 
--obj1; 
obj1.show(); 
} 

