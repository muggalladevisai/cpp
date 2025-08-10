#include<iostream> 
using namespace std; 
class name 
{ 
    int a; 
public: 
    name(int x = 0)  // Constructor with default parameter value
    { 
        a = x; 
    } 
    void show()  // Method to display the value of a
    { 
        cout << a << endl; 
    }
    friend void operator ++(name &); //// Friend function to overload the ++ operator
}; 
void operator ++(name &obj)    // Overloading the ++ operator as a friend function
{ 
    ++obj.a;  // Increment the value of a by 1
} 
int main() 
{ 
    name obj1(10);  // Create an object with initial value 10
    obj1.show();  // Display: 10

    ++obj1;  // Increment using overloaded ++ operator
    obj1.show();  // Display: 11

    ++obj1;  // Increment again using overloaded ++ operator
    obj1.show();  // Display: 12
}
