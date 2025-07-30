#include<iostream>
using namespace std;
main()
{
int *p = new int (20);
int *q = new int (30);
cout<< *p + *q;
delete p;
delete q;
}
