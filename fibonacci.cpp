//Fibonacci series.

#include<iostream>
using namespace std;
int main()
{
    int init_value1=0,init_value2=1,i,n,change_value;
    cout<<"Enter a value for performing the iteration: ";
    cin>>n;

    if(n<=0)
    {
        cout<<"Input a positive number for valid Iteration.";
    }

    else if(n==1)
    {
        cout<<"Fibonacci series for 1 is "<<init_value1<<endl;
    }
    else
    {
        i = 0;
        while(i<n)
        {
            change_value = init_value1+init_value2;
            cout<<init_value1<<"\n";
            init_value1 = init_value2;
            init_value2 = change_value;
            i++;
        }

    }
    return 0;
}
