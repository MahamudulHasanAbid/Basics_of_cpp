#include<iostream>
using namespace std;

int main()
{

     int a, *b;

     a=30;
     b=&a;

     cout<<"Address of a is : " <<&a;
     cout<<"\nValue of b is: "<<*b;
    return 0;
}
