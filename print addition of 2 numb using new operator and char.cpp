#include<iostream>
using namespace std;
main()
{
char *p = new char ('A');
char *q = new char ('A');
cout<< *p;
cout<< *q;
delete p;
delete q;
}
