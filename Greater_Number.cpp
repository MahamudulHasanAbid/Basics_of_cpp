// Take values from user and Print Largest number

#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"Enter the first value: ";
    cin>>a;
    cout<<"Enter the second value: ";
    cin>>b;
    cout<<"Enter the third value: ";
    cin>>c;
    cout<<endl;

    if (a>b && a>c)
    {
        cout<<endl<< a << " is largest from "<<b <<" and "<<c<< endl;
    }
    if (b>c && b>a)
    {
        cout<<endl<< b << " is largest from "<<a <<" and "<<c<< endl;
    }
    else
    {
        cout<<endl<< c << " is largest from "<<a << " and "<< b<< endl;
    }
    return 0;
}
