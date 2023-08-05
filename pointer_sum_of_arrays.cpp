#include<iostream>
using namespace std;

int main()

{
    int n,i,sum;
    n=9;
    int arr[n];
    int *ptr;

    cout<<"Enter elements at your choice: ";
    cout<<endl;
    for(i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    ptr=arr;

    for(i=0;i<n;i++)
    {
        sum = sum+ ptr[i]; //ptr[i] = *(ptr+i)
    }

    cout<<sum;

    return 0;
}
