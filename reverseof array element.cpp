//Reverse of array elements
#include <iostream>
using namespace std;
#define n 3
int main()
{
    int arr[n],i,temp;
  for(i=0;i<n;i++)
  {
      cout<<"Enter element";
      cin>>arr[i];
  }
    for(i=0;i<n/2;i++)
  {
      temp=arr[i];
      arr[i]=arr[n-i-1];
      arr[n-i-1]=temp;
  }
   for(i=0;i<n;i++)
  {
           cout<<arr[i]<<endl;
  }
      return 0;
}

