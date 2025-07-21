#include <iostream>
using namespace std;
#define n 4
int main()
{
    int arr[n],i,g;
    for(i=0;i<n;i++)
    {
        cout<<"enter elements"<<endl;
        cin>>arr[i];
    }
    int smallest =arr[0];
    for(i=1;i<n;i++)
    {
        if(smallest>arr[i])
        smallest=arr[i];
    }
    cout<<"smallest element is"<<smallest<<endl;
}
