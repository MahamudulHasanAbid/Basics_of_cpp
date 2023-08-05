//A pointer stores variable's memory address.
//Structure: data-type *pointer-variable;

#include<iostream>

using namespace std;
int main()
{
    int a = 9, *ptr;

    ptr = &a;

    cout<<endl<<"Hello Pointer"<<endl;
    cout<<"The address of a:"<<&a<<endl;
    cout<<"The value of ptr is: "<<ptr<<endl;
    cout<<"The value of *ptr is:"<<*ptr<<endl; // In this line * is used as dereference operator not as pointer.


}
