#include<iostream>
using namespace  std;
/*
void sum(int *a, int *b)
{
    int add;
    add=*a+*b;
    cout<<"The sum of " <<*a<<" and "<<*b<<" is: "<<add;

}

int main()
{
    int n1,n2;
    cout<<"Enter 1st value: ";
    cin>>n1;
    cout<<"Enter 2nd value: ";
    cin>>n2;

    sum(&n1, &n2);
    return 0;
}
*/

int sum(int *a, int *b)
{
    int add= *a+*b;
    return add;
}

int main()
{

    int n1, n2;
    cout<<"Enter 1st value: ";
    cin>>n1;
    cout<<"Enter 2nd value: ";
    cin>>n2;

    int add = sum(&n1, &n2);
    cout<<"The sum is : "<<add;
    return 0;
}
