#include <iostream>
using namespace std;
#define n 5
void fun(int b[]);
int main()
{
  int arr[n],i;
  for(i=0;i<n;i++)
  {
      cout<<"enter elements"<<endl;
      cin>>arr[i];
  }
  fun(arr);
}
void fun(int b[])
{
    int i;
    for(i=0;i<n;i++){
        if(b[i]%2==0)
        cout<<"even"<<b[i]<<endl;
        else
        cout<<"obb"<<b[i]<<endl;
    }
}
    
