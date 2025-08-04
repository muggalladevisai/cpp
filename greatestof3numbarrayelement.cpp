#include <iostream>
using namespace std;
#define n 3
int main()
{
    int arr[n],i,g;
    for(i=0;i<n;i++)
    {
        cout<<"enter elements"<<endl;
        cin>>arr[i];
    }
    int greatest =arr[0];
    for(i=1;i<n;i++)
    {
        if(greatest<arr[i])
        greatest=arr[i];
    }
    cout<<"greatest element is"<<greatest<<endl;
}
