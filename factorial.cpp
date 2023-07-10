#include<iostream>
using namespace std;
int main()
{
    int factorial, n;

    cout<<"Enter the value for performing the factorial operation: ";
    cin>>n;
    factorial = 1;
    if (factorial<0)
    {
        cout<<"factorial can not be performed in the negative value.";
    }
    else if(factorial == 0)
    {
        cout<<"factorial of 0 is 1";
    }
    else
    {
     for(int i=1; i<=n; i++)
     {
         factorial *= i;
         cout<<"Factorial of "<<i <<" is: "<<factorial<<endl;
     }
     cout<<endl<<"So finally Factorial of "<<n <<" is: "<<factorial<<endl;
    }
    return 0;
}
