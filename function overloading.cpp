#include<iostream>
using namespace std; 
int fun(double x,int y) 
{ 
 // x=9; 
 cout<<x +y<<endl;; 
} 
int fun(int y,double x) 
{ 
 // y=7,x=5; 
 cout<<y*x<<endl;; 
} 
int main() 
{ 
 fun(9.8,6); 
 fun(7,5.0); 
} 

