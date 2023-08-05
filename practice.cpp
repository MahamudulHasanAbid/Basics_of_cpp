#include<iostream>
using namespace std;



int main()
{
   int i, arr[10], *ptr;

   ptr=arr;

    cout<<"Enter elements: ";
    for(i=0;i<5;i++)
    {
        cout<<"\nelement "<<i+1<<" : ";
        cin>>arr[i];
    }
    cout<<"Elements are in descend order: ";
    for(int j=4; j>=0;j--)
    {
        cout<<endl<<ptr[j]<<" ";
    }

    return 0;
}
