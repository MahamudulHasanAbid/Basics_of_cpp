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
        cin>>*(ptr+i); //ptr[i] = *(ptr+i)
    }
    cout<<"Elements are in reverse order: ";
    for(int j=4; j>=0;j--)
    {
        cout<<ptr[j]<<" ";// ptr[j]=*(ptr+j)
    }

    return 0;
}
