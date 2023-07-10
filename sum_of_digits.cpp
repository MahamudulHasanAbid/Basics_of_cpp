//Write a cpp code to sum the digits of a number.
#include<iostream>
using namespace std;
int main()
{
    int n, sum;
    sum = 0;
    cout<<"Give an input number to operate the sum to this number: ";
    cin>>n;
    int num = n;

    while(n>0)
    {
        int remainder = n%10;
        sum += remainder;
        n /= 10;
    }
    cout<<endl<<"The sum of the digits of "<<num<<" is : "<<sum;
    return 0;
}
