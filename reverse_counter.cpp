//Write a C++ program to print counting from n to 1.
#include<iostream>
using namespace std;
int main()
{
    int n, i;
    cout<<"Enter a value from where you want to reverse the counter using for loop: ";
    cin>>n;

    for(i = n; i>=1; i--)
    {
        cout<<"\t"<<i;
    }

    /* Using while loop. and do while loop*/

    int m, k;

    cout<<endl<<"\nEnter a value from where you want to reverse the counter using do-while loop: ";
    cin>>m;
    k = m;
    do
    {
        cout<<"\t"<<k;
        k--;
    }
    while(k>=1);
    return 0;
}
