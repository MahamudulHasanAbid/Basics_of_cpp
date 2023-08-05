#include<iostream>
using namespace std;

void swp(int *n1, int *n2)
{
    int temp;

    temp = *n1;
    *n1 = *n2;
    *n2 = temp;
    cout<<"The 1st number is : "<<*n1;
    cout<<"\nThe 2nd number is : "<<*n2;
}
int main()
{
    int a,b;
    cout<<"Input 1st number: ";
    cin>>a;

    cout<<"Input 2nd number: ";
    cin>>b;

    swp(&a,&b);

    return 0;
}
